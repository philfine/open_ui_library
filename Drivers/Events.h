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
#ifndef EVENTS_H
#define EVENTS_H

#include "../UI/Core/Global.h" // TODO

#define IS_SOFT_KEY(I) (keys_pin[I] & (1 << 7) ? 1 : 0) 
#define KEY_SHOULD_EVENT(I) (keys_pin[I] & (1 << 3) ? 1 : 0)

extern struct key_id keys_pin[];

#define KEY(ENUM, PORT, PIN, SOFT_KEY, EVENT, STRING) ENUM,
typedef enum {
  KEYS_ENUM_FIRST = -1,
  #include "keys.def"
  KEYS_ENUM_SIZE,
  KEYS_INVALID
} KeyIds;
#undef KEY

bool pinState(KeyIds key);


enum EventState {
  EVENT_STATE_OFF = 0xf0,
  EVENT_STATE_DOWN,
  EVENT_STATE_UP,
  EVENT_STATE_HOLDING,
};

#define MAX_EVENTS 4
class Event {
private:
  enum EventState type;
  KeyIds key;
  bool trigger_event;
  //uint8_t counter;
  uint8_t vals:4;
public:
  Event() {
	  key = KEYS_INVALID;
	  type = EVENT_STATE_OFF;
	  vals = 0;
	  trigger_event = false;
 }

  void updateEvent();

  KeyIds getKey() { return key; }
  enum EventState getType() { return type; }

  friend class Events;
};

class Events {
private:
  Event events[MAX_EVENTS];

  bool hasEventFor(KeyIds key);
  Event *eventFor(KeyIds key);
  void updateEventForKey(KeyIds key);
public:
  uint8_t current_event;
  Events() { current_event = 0; }

  void updateEvents();
  Event *nextEvent();

  static bool pinState(KeyIds key);
};

#endif /* EVENTS_H */
