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
#include "TextureBuilder.h"
//#include "fonts/helvB08.h" // TODO

char *TextureBuilder::pgm_helper_pointer = NULL;
TextureBuilder::~TextureBuilder() { }

/* FontAccess */
const struct characterFontData FontAccess::getCharacterData(const char c)
{
  const char *data = font_data_pointer(c);
	struct characterFontData ret;

	unsigned char byte1 = pgm_read_byte(data);
	unsigned char byte2 = pgm_read_byte(data + 1);
	unsigned char byte3 = pgm_read_byte(data + 2);

  uint8_t num_bytes_header = byte1 & 0x80 ? 3 : 2;

	ret.rows = ((byte1 & 0x60) >> 5) + 1;
	ret.width = (byte1 & 0x1F) + 1;

	if(num_bytes_header == 2)
	{
		ret.yoff = (byte2 >> 5);
		char lead_trail = (byte2 & 0x1F);
		ret.lead = (lead_trail / 6) - 1;
		ret.trail = (lead_trail % 6) - 2;
	}
	else
	{
		ret.yoff = byte2;
		ret.lead = (byte3 >> 4) - 4;
		ret.trail = (byte3 & 0x0F) - 5;
	}
	ret.data_pointer = data + num_bytes_header;

	// TODO: Repair the font files ... trail and lead values are incorrect.

	return ret;
}

/* SpecialFontTexture class definitions */

uint8_t SpecialFontTexture::mask_for(uint8_t x, uint8_t row)
{
  static uint8_t last_min, last_max;
  static char last_c = 0;
  char c = 0;
  static struct characterFontData data;
  const char *p = string_pointer;

 //global_debug = "BLE";
  /* Find character c for x position */
  uint8_t width = 0;
  uint8_t count = 0;
  int8_t prev_trail = 0;
  static int8_t spacing = 0;

  /* If it is suppose to write a differenet channel find a character for the position x */
  if(last_c == 0 || x > last_max || x < last_min)
  while((c = (prog_string == true ? pgm_read_byte(p++) : *p++)) != 0)
  {
    data = font->getCharacterData(c);
    if(count > 0)
    	spacing = data.lead + prev_trail;
    else
    	spacing = 0;
    width += data.width + spacing;
    if(width > x)
    {
      last_max = width-1;
      last_min = width - data.width - spacing; // - data.lead - data.trail;
      last_c = c;
//      printf("%c, s = %ux%u, yoff = %u, lead = %d, trail = %d, min = %d max = %d, x = %u, row = %u, spacing = %d\n",
//  					c, data.width, data.rows, data.yoff, data.lead, data.trail,
//  					last_min, last_max,
//  					x, row, spacing);
      break;
    }
    prev_trail = data.trail;
    count++;
  }

  uint8_t ret = 0;
  uint8_t delta_x = x - last_min;
  if(delta_x >= spacing && delta_x < spacing + data.width)
  {
    int8_t pos = x - last_min - spacing; //(count > 0 ? data.lead : 0);

//    printf("POS = %d, x = %d (%d, %d)\n", pos, x, last_min, spacing);
//    if(pos >= 0 && pos < data.width)
    {
    	if(data.yoff > 0 && row > 0)
    	{
    		ret = pgm_read_byte(data.data_pointer + (data.width * (row-1)) + pos);
    		//printf("%x\n", ret);
    		for(c = 0; c < 7 - data.yoff; c++)
    			ret = (ret >> 1) & 0x7F;
    	}

    	if(row < data.rows)
    		ret |= pgm_read_byte(data.data_pointer + (data.width * row) + pos) << data.yoff;

    }
  }

  return ret;
}

uint16_t SpecialFontTexture::width()
{
	char c;
	uint8_t count = 0;
	uint8_t width = 0;
  const char *p = string_pointer;
  int8_t prev_trail = 0;
  while((c = (prog_string == true ? pgm_read_byte(p++) : *p++)) != 0)
	{
		const struct characterFontData data = font->getCharacterData(c);
		width += data.width + (count > 0 ? data.lead + prev_trail : 0);
		prev_trail = data.trail;
  		count++;
	}
  return width;
}
uint16_t SpecialFontTexture::height()
{
	uint8_t height = 0;

	char c;
  const char *p = string_pointer;
  while((c = (prog_string == true ? pgm_read_byte(p++) : *p++)) != 0)
	{
		const struct characterFontData data = font->getCharacterData(c);

		if(height < (data.rows * 8) + data.yoff)
			height = (data.rows * 8) + data.yoff;
	}
  return height;
	//const struct characterFontData data = font->getCharacterData(' ');
  //return data.yoff;
}

uint8_t ImageTexture::mask_for(uint8_t x, uint8_t row)
{
  static int8_t old_index = -1;

  uint8_t width = pgm_read_byte(&image[0]);
  uint8_t size = pgm_read_byte(&image[2]);

  if(pgm_helper_pointer == NULL || this->index != old_index)
    pgm_helper_pointer = (char *) (image + ((this->index * size) + 3));

  return pgm_read_byte(&pgm_helper_pointer[x + (row * width)]);
}
uint16_t ImageTexture::width()
{
  return pgm_read_byte(&image[0]);
}
uint16_t ImageTexture::height()
{
  return pgm_read_byte(&image[1]);
  return pgm_read_byte(&image[1])/8;
}
