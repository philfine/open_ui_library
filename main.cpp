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
#include "Drivers/Analogs.h" // Change by a single include file for the device
#include "Drivers/Lcd.h"
#include "Drivers/Events.h"
#include "Drivers/ports.h"

#include "UI/Core/Global.h"
#include "UI/Core/Timer.h"

#include "SystemController.h"

#include <inttypes.h>
#include <avr/io.h>

#ifndef SIMULATE
#include <avr/io.h>
#include <avr/wdt.h>
#include <avr/interrupt.h>
#endif

//#include "fonts_new/font_4x6.c"
//#include "fonts_new/font_helvB14.c"

#include "UI/Core/fonts/helvB14.h" // TODO
#include "UI/Core/fonts/helvB08.h"


//#define SIMULATE

//#ifdef SIMULATE
//#include "Debug.h"
//#endif

Window window;

Analogs analogs;
Events events;
Lcd main_lcd;

Display main_display;

#ifndef SIMULATE
static inline void init_avr() {
  //volatile uint8_t debug = MCUCSR;

  DDRA = 0xff;  PORTA = 0x00;
  DDRB = 0x81;  PORTB = 0x7e; //pullups keys+nc
  DDRC = 0x3e;  PORTC = 0xc1; //pullups nc
  DDRD = 0x00;  PORTD = 0xff; //all D inputs pullups keys
  DDRE = 0x08;  PORTE = 0xff-(1<<OUT_E_BUZZER); //pullups + buzzer 0
  DDRF = 0x00;  PORTF = 0x00; //all F inputs anain - pullups are off
  DDRG = 0x10;  PORTG = 0xff; //pullups + SIM_CTL=1 = phonejack = ppm_in

  wdt_disable();

}
#endif

uint8_t timer_counter = 0;
#ifndef SIMULATE
ISR(TIMER0_OVF_vect, ISR_NOBLOCK)
{   
  if (timer_counter % 6 == 0)
  {
    Window::instance()->timer.tick();
    timer_counter = 1;
  }
  else
    timer_counter++;
}
#endif 

char *global_debug = (char *) "BlA";

int main(int argc, char *argv[])
{
#ifndef SIMULATE
  init_avr();

  //TCCR0  = (7 << CS00);//  Norm mode, clk/1024
  TCCR0 = (1<<CS02) | (1<<CS01) | (1<<CS00);
  //OCR0   = 156;
  //TIMSK |= (1<<OCIE0) |  (1<<TOIE0);
  TIMSK|=(1<<TOIE0);
  TCNT0=0;
  sei();
#else
  //if (SDL_Init(SDL_INIT_VIDEO) < 0 ) return 1;
#endif

  /* Initialize Display */
  Display::instance()->init();
  Display::instance()->set_contrast(30);

  /* Define the systemController */
  SystemController systemCtrl;

//#define TEST
#ifdef TEST
  	  FontAccess font(font_helvB14);
  	  SpecialFontTexture texture(&font);
  	  texture.setString("Cupertino");
            printf("height = %d\n", texture.height());
  	  Lcd::instance()->draw_with(0, 5, &texture);
  	  Lcd::instance()->draw_with(0, 24, &texture);


    Display::instance()->refresh();

  while(1);
#endif
  /* Setting the first view in the Window stack */
  Window::instance()->pushViewController(&systemCtrl);
  Window::instance()->redraw();

//	global_debug = "BLI";
//  lcd->clear();
//  FontAccess font1(font_helvB14);
//  lcd->draw_with(10, 16, SpecialFontTexture(&font1).setString("Cupertino"));



//
//    //lcd->clear();
//    //lcd->print_font();
//  lcd->draw_with(50, 40, RegularFontTexture(0).setString(global_debug));
//

#ifdef SIMULATE
  Uint32 now, old_now = 0;
#endif
  while(1)
  {
#ifdef SIMULATE
    now = SDL_GetTicks();
    // TODO: error on overflow
		if(now > old_now + 100)
    {
			Window::instance()->timer.tick();
      old_now = now;
    }
#endif

    bool redraw = false;
    Event *event;

    /* Read analogs */
    //analogs.updateAnalogs();
    
    /* Read any possible events */
    events.updateEvents();

    /* Loop through all events and pass to responder */
    while((event = events.nextEvent()) != NULL)
    {
      Responder::responder_handle_event(event); 
      /* TODO: make redraw to be updated by the return from handle_event */
      redraw = true;
    }

    /* Redraw screen if needed */
    uint8_t in_animation;
    if(redraw == true || (in_animation = Window::instance()->inAnimation()))
    {
      printf("REDRAWING\n");
      printf("redraw = %d, inAnimation = %d\n", redraw, in_animation);
      Window::instance()->redraw();
    }

    //FontAccess font(font_helvB14);
    //lcd->draw_with(10, 16, SpecialFontTexture(&font).setString(global_debug));
		//Display::instance()->refresh();
  }

  return 0;
}
