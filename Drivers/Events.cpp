/* 
 * Copyright (C) 2013 Cupertino Miranda
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see <http://www.gnu.org/
 * licenses>.
 * 
 * Contributors:
 *     Cupertino Miranda - initial API and implementation
 */
#include "../UI/Core/Global.h"
#include "Events.h"
#include "ports.h"

typedef struct {
  uint8_t reversed:1;
  uint8_t port:3;
  uint8_t event:1;
  uint8_t pin:3;
} KeyAttr;

typedef struct {
  union {
    uint8_t data;
    KeyAttr attr;
  };
} KeyAttrCast;

#define KEY(ENUM, PORT, PIN, SOFT_KEY, EVENT, NAME) { SOFT_KEY, PORT, EVENT, PIN },
const KeyAttr keysDef[] PROGMEM = {
  #include "keys.def"
};
#undef KEY

KeyAttr getKeyAttr(KeyIds key)
{
  KeyAttrCast tmp;
  tmp.data = pgm_read_byte(&keysDef[key]);
  return tmp.attr;
}



static bool softPinState(KeyIds key)
{
  switch(key)
  {
    case SW_ID0 : return !Events::pinState(SW_ID1_P);
    case SW_ID1 : return Events::pinState(SW_ID1_P) & Events::pinState(SW_ID2_P);
    case SW_ID2 : return !Events::pinState(SW_ID2_P);
    default:
    	break;
  }
  return 0;
}

#ifndef SIMULATE
static uint8_t portValue(KeyIds key)
{
  uint8_t port = getKeyAttr(key).port;
	  
  switch(port)
  {
    case 0:
      return PINA;
    case 1:
      return PINB;
    case 2:
      return PINC;
    case 3:
      return PIND;
    case 4:
      return PINE;
    case 5:
      return PINF;
    case 6:
      return PING;
  }
  return 0;
}

bool Events::pinState(KeyIds key)
{
  if(getKeyAttr(key).port == 7) // Software key
    return softPinState(key);

  return getKeyAttr(key).reversed == true ? 
	  (~portValue(key)) & (1 << getKeyAttr(key).pin) :
	  ( portValue(key)) & (1 << getKeyAttr(key).pin);
}
#else
struct SDLKeyMatcher {
  KeyIds keyid;
  uint16_t SDLKey;
};
const struct SDLKeyMatcher sdl_match[] = {
  { KEY_DOWN, 	SDLK_DOWN },
  { KEY_UP, 	SDLK_UP },
  { KEY_LEFT, 	SDLK_LEFT },
  { KEY_RIGHT, 	SDLK_RIGHT },
  { KEY_MENU, 	SDLK_m },
};

bool Events::pinState(KeyIds key)
{
  static uint16_t keys_mapping[KEYS_ENUM_SIZE];
  static char key_state[KEYS_ENUM_SIZE];
  static char initted = false;
  if(initted == false)
  {
    for(uint8_t i = 0; i < KEYS_ENUM_SIZE; i++)
    {
      keys_mapping[i] = 0;
      key_state[i] = 0;
    }

    /* Todo define more keys to simulate */
    keys_mapping[KEY_DOWN]  = SDLK_DOWN;
    keys_mapping[KEY_UP]    = SDLK_UP;
    keys_mapping[KEY_LEFT]  = SDLK_LEFT;
    keys_mapping[KEY_RIGHT] = SDLK_RIGHT;
    keys_mapping[KEY_MENU] =  SDLK_m;

    initted = true;
  }

#define MATCH_KEY(KEYVAR, SDLKEY) \
  uint8_t KEYVAR = KEYS_INVALID; \
  for(uint8_t z = 0; z < KEYS_ENUM_SIZE; z++) \
    if(keys_mapping[z] == SDLKEY) \
      KEYVAR = z; 

  SDL_Event keyevent;
  while (SDL_PollEvent(&keyevent))   //Poll our SDL key event for any keystrokes.
  {
    switch(keyevent.type){
      case SDL_KEYUP:
      case SDL_KEYDOWN:
        {
	  MATCH_KEY(key_match, keyevent.key.keysym.sym);
	  key_state[key_match] = keyevent.type == SDL_KEYDOWN ? 1 : 0;
	}
	break;
      case SDL_QUIT:
        SDL_Quit();
        break;
    }
  }

  if(getKeyAttr(key).port == 7) // Software key
    return softPinState(key);

  return key_state[key];
}
#endif

void Event::updateEvent()
{
  vals <<= 1;  
  if(Events::pinState(key)) 
    vals |= 1;

  //counter++;

  enum EventState old_type = type;
  switch(type)
  {
    case EVENT_STATE_OFF:
      if(vals != 0)
	type = EVENT_STATE_DOWN;
      break;

    case EVENT_STATE_DOWN:
      if(vals != 0)
	type = EVENT_STATE_HOLDING;
      else
	type = EVENT_STATE_UP;
      break;

    case EVENT_STATE_HOLDING:
      if(vals == 0)
	type = EVENT_STATE_UP;
      break;

    case EVENT_STATE_UP:
      type = EVENT_STATE_OFF;
      key = KEYS_INVALID;
      break;

    // TODO: Make new event types to detect long presses and continues
    //  pressing
  }

  if(type != old_type)
    trigger_event = true; 
}


Event *Events::eventFor(KeyIds key)
{
  Event *ret = 0;
  uint8_t empty = MAX_EVENTS;
  for(int8_t i = MAX_EVENTS-1; i >= 0; i--)
  {
    if(events[i].key == key) 
      ret = &events[i];
    if(events[i].key == KEYS_INVALID)
      empty = i;
  }
  if(ret == 0 && empty != MAX_EVENTS)
  {
    events[empty].key = key;
    ret = &events[0];
  }

  return ret;
}

bool Events::hasEventFor(KeyIds key)
{
  for(uint8_t i = 0; i < MAX_EVENTS; i++)
  {
    if(events[i].key == key)
      return true;
  }
  return false;
}

void Events::updateEventForKey(KeyIds key)
{
  volatile bool val = Events::pinState(key);

  if(val == true || hasEventFor(key))
    {
      Event *event = eventFor(key);
      if(event != NULL)
	event->updateEvent();
    }
}

void Events::updateEvents()
{
  for(uint8_t i = 0; i < KEYS_ENUM_SIZE; i++)
  {
    if(getKeyAttr((KeyIds) i).event == true)
      updateEventForKey((KeyIds) i);
  }
  current_event = 0;
}

Event *Events::nextEvent()
{
  if(current_event == MAX_EVENTS)
    return NULL;

  while(events[current_event].key == KEYS_INVALID 
	|| events[current_event].trigger_event == false)
  {
    current_event++;
    if(current_event == MAX_EVENTS)
      return NULL;
  }
  events[current_event].trigger_event = false;
  return &events[current_event++];
}
