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
#include "Lcd.h"

#include "ports.h"
#include <stddef.h>

#define BITMASK(bit) (1<<(bit))

#ifdef SIMULATE
  #define pgm_read_byte(P) *((uint8_t *) P)
  #define pgm_read_word(P) *((uint16_t *) P)
#endif 



#define X1 (frame.position.x)
#define Y1 (frame.position.y)
#define X2 (frame.position.x + frame.size.width)
#define Y2 (frame.position.y + frame.size.height)

//Lcd *Lcd::s_instance = 0;

void Lcd::change_byte(uint8_t x, uint8_t y, enum operation op, uint8_t data, uint8_t mask)
{
  Rect frame = getBounds();
  if(x < X1 || x > X2)
    return;
  if(y < (Y1 / 8) || y > ((Y2 / 8)))// + (y2 % 8 == 0 ? 0 : 1)))
    return;

  if(y == (Y1 / 8))
    mask &= (0xff << (Y1 % 8));
  if(y == (Y2 / 8))
    mask &= (0xff >> (8 - (Y2 % 8)));

  data = (mode & INVERS) ? ~data : data;
  uint8_t *p = &buffer[ y * DISPLAY_W + x ];
  switch(op)
  {
    case XOR:
      *p ^= (data & mask);
      break;
    case OR:
      *p |= (data & mask);
      break;
    case AND:
      *p &= (data & mask);
      break;
    case REPLACE:
      *p = (*p & (~mask)) | (mask & data);
      break;
  }
}

#undef X1
#undef X2
#undef Y1
#undef Y2

void Lcd::hline_with_pattern(uint8_t x, uint8_t y, int8_t w, uint8_t pattern)
{
  if(w < 0) { w = -w; x -= w; }
  w += x-1;
  while(x <= w)
  {
    if(BITMASK(x%8) & pattern)
      change_byte (x, y / 8, REPLACE, 0xff, BITMASK(y%8));
    else
      change_byte (x, y / 8, REPLACE, 0x00, BITMASK(y%8));
    x++;
  }
}

void Lcd::vline_with_pattern(int16_t x, int16_t y, int8_t h, uint8_t pattern)
{
    uint8_t y_start = y / 8;
    uint8_t y_end = (y+h) / 8;

    change_byte (x, y_start, REPLACE, 0xff, (~(BITMASK(y%8)-1)) & pattern);
    for(y_start = y_start + 1; y_start <= y_end; y_start++)
    {
      change_byte (x, y_start, REPLACE, 0xff, 
      		   (y_start == y_end ? BITMASK((y+h)%8)-1 : 0xff) & pattern
		  );
    }
}

void Lcd::draw_with(int8_t i_x, int8_t i_y, TextureBuilder *builder)
{
  uint8_t height = builder->height();
  uint8_t width = builder->width();

  uint8_t rows = ((height) / 8) + (height % 8 == 0 ? 0 : 1);
  //printf("HEIGHT = %d, ROWS = %d\n", height, rows);

#define LCD_ROW (i_y >= 0 ? i_y / 8 : (i_y / 8) - 1)
#define LCD_ROW_Y (i_y % 8 >= 0 ? i_y % 8 : 8+(i_y % 8))

  //printf("LCD_ROW = %d, Y = %d\n", LCD_ROW, LCD_ROW_Y);

  uint8_t mask = 0;
  for(uint8_t i = 0; i < LCD_ROW_Y; i++)
    mask = (mask << 1) | 0x01;

  for(int row = 0; row < rows; row++)
  {
    //printf("ROW = %d\n", row);
    for(int x = 0; x < width; x++)
    {

      uint8_t byte = builder->mask_for(x, row);
      change_byte(i_x + x, LCD_ROW + row, XOR, (byte <<  LCD_ROW_Y) & ~mask , ~mask);
      change_byte(i_x + x, LCD_ROW + row + 1, XOR, (byte >> (8 - LCD_ROW_Y)) & mask, mask); 
    }
  }

 // return;

 // for(int row = 0; row < rows; row++)
 // {
 //   printf("ROW = %d\n", row);
 //   for(int x = 0; x < width; x++)
 //   {
 //     uint8_t mask = 0;
 //     if(row < rows-1 || (i_y % 8) == 0)
 //       mask |= builder->mask_for(x, row) << (i_y % 8); 
 //     else if(row > 0)
 //       mask |= builder->mask_for(x, row-1) >> (i_y % 8);
 //     change_byte(i_x + x, (i_y / 8) + row, XOR, mask, 0xff);
 //   }
 // }
}

void Lcd::plot(uint8_t x, uint8_t y)
{
  change_byte(x + x, (y / 8), XOR, BITMASK(y%8), BITMASK(y%8));
}

Display *Display::s_instance = 0;

#ifndef SIMULATE

void Display::sendCtl(uint8_t val)
{
  PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_CS1);
  PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_A0);
  PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_RnW);
  PORTA_LCD_DAT = val;
  PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_E);
  PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_E);
  PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_A0);
  PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_CS1);
}
void Display::init()
{
  // /home/thus/txt/datasheets/lcd/KS0713.pdf
  // ~/txt/flieger/ST7565RV17.pdf  from http://www.glyn.de/content.asp?wdid=132&sid=

  PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_RES);  //LCD_RES
  delay_1us();
  delay_1us();//    f520  call  0xf4ce  delay_1us() ; 0x0xf4ce
  PORTC_LCD_CTRL |= (1<<OUT_C_LCD_RES); //  f524  sbi 0x15, 2 IOADR-PORTC_LCD_CTRL; 21           1
  delay_1_5us(1500);
  sendCtl(0xe2); //Initialize the internal functions
  sendCtl(0xae); //DON = 0: display OFF
  sendCtl(0xa1); //ADC = 1: reverse direction(SEG132->SEG1)
  sendCtl(0xA6); //REV = 0: non-reverse display
  sendCtl(0xA4); //EON = 0: normal display. non-entire
  sendCtl(0xA2); // Select LCD bias=0
  sendCtl(0xC0); //SHL = 0: normal direction (COM1->COM64)
  sendCtl(0x2F); //Control power circuit operation VC=VR=VF=1
  sendCtl(0x25); //Select int resistance ratio R2 R1 R0 =5
  sendCtl(0x81); //Set reference voltage Mode
  sendCtl(0x22); // 24 SV5 SV4 SV3 SV2 SV1 SV0 = 0x18
  sendCtl(0xAF); //DON = 1: display ON
}

void Display::refresh()
{
  uint8_t *p = AbstractLcd::instance()->getBuffer();
  for(uint8_t y=0; y < 8; y++) {
    sendCtl(0x04);
    sendCtl(0x10); //column addr 0
    sendCtl( y | 0xB0); //page addr y
    PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_CS1);
    PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_A0);
    PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_RnW);
    for(uint8_t x=32; x>0; x--){
//      lcdSendDat(*p);
      PORTA_LCD_DAT = *p++;
      PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_E);
      PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_E);
      PORTA_LCD_DAT = *p++;
      PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_E);
      PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_E);
      PORTA_LCD_DAT = *p++;
      PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_E);
      PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_E);
      PORTA_LCD_DAT = *p++;
      PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_E);
      PORTC_LCD_CTRL &= ~(1<<OUT_C_LCD_E);
//      p++;
    }
    PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_A0);
    PORTC_LCD_CTRL |=  (1<<OUT_C_LCD_CS1);
  }
}

void Display::set_contrast(uint8_t val)
{
  sendCtl(0x81);
  sendCtl(val);
}

#else

void Display::init()
{ 
  if (SDL_Init(SDL_INIT_VIDEO) < 0 ) 
	{
    SDL_Quit();
		return;
	}
  if (!(screen = SDL_SetVideoMode(WIDTH, HEIGHT, DEPTH, SDL_HWSURFACE)))
  {
    SDL_Quit();
    return;
  }
  //printf("I AM HERE\n");
}

static void setpixel(SDL_Surface *screen, int x, int y, Uint8 r, Uint8 g, Uint8 b)
{
		Uint32 *pixels = (Uint32 *) screen->pixels;
    Uint32 colour = SDL_MapRGB( screen->format, r, g, b );
  
#define Y (y * screen->pitch/BPP)
		pixels[(y * screen->w) + x] = colour;
#undef Y
}
static void DRAW(SDL_Surface *screen, int x, int y, bool w)
{
	int i=0, j=0;
	for(i = 0; i < 2; i++)
	for(j = 0; j < 2; j++)
	{
    if(w)
			setpixel(screen, x*2 + i, y*2 + j, 0, 0, 0);
		else
			setpixel(screen, x*2 + i, y*2 + j, 255, 255, 255);
	}
}

void Display::refresh()
{
  uint8_t *p = static_cast<Lcd*>(AbstractLcd::instance())->buffer;

  for(int j = 0; j < 8; j++)
  for(int i = 0; i < 128; i++) 
	{
		for(int k = 0; k < 8; k++)
		{
			//printf("DRAW %d %d\n", i, j * 8 + k);
			DRAW(screen, i, j * 8 + k, (*p >> k) & 0x01);
		}
	  p++;
	}
  SDL_Flip(screen);
}

void Display::set_contrast(uint8_t val)
{
	/* TODO */
}

#endif /* SIMULATE */
