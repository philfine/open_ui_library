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
#ifndef LCD_NEW_H
#define LCD_NEW_H

#include <inttypes.h>
#include <string.h>
#include <util/delay.h>

#include "../UI/Core/Global.h"
#include "../UI/Core/AbstractLcd.h"

#define PORTA_LCD_DAT  PORTA
#define PORTC_LCD_CTRL PORTC
#define OUT_C_LCD_E     5
#define OUT_C_LCD_RnW   4
#define OUT_C_LCD_A0    3
#define OUT_C_LCD_RES   2
#define OUT_C_LCD_CS1   1

#ifndef SIMULATE
  #define delay_1us() _delay_us(1)
#else
  #define delay_1us()
#endif
static inline void delay_1_5us(int ms) { for(volatile int i=0; i<ms; i++) delay_1us(); }

class Display {
private:
  static Display *s_instance;
#ifndef SIMULATE
  void sendCtl(uint8_t val);
  void display_init();
  void setRefVolt(uint8_t val);
#else /* SIMULATE */
  #define WIDTH 256
  #define HEIGHT 128
  #define DEPTH 32
  #define BPP 4
  SDL_Surface *screen;
#endif /* SIMULATE */

public:
  inline Display() { s_instance = this; }
  void init();
  static Display *instance()
  {
    if (!s_instance)
      s_instance = new Display();
    return s_instance;
  }
  void refresh();
  void set_contrast(uint8_t val);
};

#define DISPLAY_W 128
#define DISPLAY_H  64

/* lcd common flags */
#define INVERS        0x01
#define BLINK         0x02
#define DBLSIZE       0x04
#define CONDENSED     0x08

/* lcd puts flags */
#define BSS           0x10

/* lcd outdez flags */
#define LEADING0      0x10
#define PREC1         0x20
#define PREC2         0x30 /* 4 modes in 2bits! */
#define LEFT          0x40 /* align left */

extern volatile uint8_t   g_blinkTmr10ms;
#define BLINK_ON_PHASE (g_blinkTmr10ms & (1<<6))
#define BLINK_SYNC      g_blinkTmr10ms = (3<<5)


#define REGULAR_FONT_WIDTH 5
#define REGULAR_FONT_HEIGHT 8


class Lcd : public AbstractLcd {
  private:
    uint8_t buffer[DISPLAY_W*DISPLAY_H/8];
    uint16_t mode;


  public:

    Lcd() : AbstractLcd()  {
    	mode = 0;
    	setBounds(MakeRect(0, 0, 127, 64));
    	printf("I AM HEREEEEEEE\n");
    }
//    static Lcd *instance()
//    {
//      if(s_instance == 0)
//	s_instance = new Lcd();
//      return s_instance;
//    }
    virtual ~Lcd() { }

    uint16_t width() { return 128; }
    uint16_t height() { return 64; }

    void change_byte(uint8_t x, uint8_t y, enum operation op, uint8_t data, uint8_t mask);

//    void print_font(void);

//    void set_mode(uint16_t mode) { this->mode = mode; }
//    void clear_mode() { this->mode = 0; }

    void hline_with_pattern(uint8_t x, uint8_t y, int8_t w, uint8_t pattern);
    void hline(uint8_t x,uint8_t y, int8_t w) { this->hline_with_pattern (x,y,w,0xff); }

    void vline_with_pattern(int16_t x, int16_t y, int8_t h, uint8_t pattern);

    //void image(uint8_t i_x, uint8_t i_y, const uint8_t *data, uint8_t idx, uint8_t mode);

    void draw_with(int8_t i_x, int8_t i_y, TextureBuilder *builder);

    void plot(uint8_t x, uint8_t y);

    void clear(void) { memset(this->buffer, 0, 1024); }

    void refresh() { Display::instance()->refresh(); }

    uint8_t *getBuffer() { return buffer; }
    static char *stringify(int value);

    friend class Display;
    friend class DisplaySDL;
};



#endif /* LCD_NEW_H */
