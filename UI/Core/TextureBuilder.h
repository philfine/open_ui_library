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
#ifndef TEXTURE_BUILDER_H_
#define TEXTURE_BUILDER_H_

#include "Global.h"
#include "Tools.h"

struct characterFontData {
	uint8_t rows :2;
	uint8_t width :5;
	int8_t yoff;
	int8_t lead :4;
	int8_t trail :4;
	const char *data_pointer;
};

class TextureBuilder {
protected:
	static char *pgm_helper_pointer;
	virtual ~TextureBuilder();
public:
	virtual uint8_t mask_for(uint8_t x, uint8_t row) = 0;
	virtual uint16_t width() = 0;
	virtual uint16_t height() = 0;
};

class FontAccess {
private:
	uint8_t first, last;
	const char *addresses;

	const char *font_data_pointer(char c) {
		c = c - first;
		uint16_t offset = pgm_read_byte(addresses + (c * 2)+1) << 8 & 0xff00;
		offset = offset | (pgm_read_byte(addresses + (c * 2)) & 0xff);
		return ((const char *) addresses) - 2 + offset;
	}

public:
	const struct characterFontData getCharacterData(const char c);

	FontAccess(const char *font) {
		first = pgm_read_byte(font);
		last = pgm_read_byte(font + 1);

		addresses = font + 2;
	}
};

class SpecialFontTexture: public TextureBuilder {
private:
	FontAccess *font;
	const char *string_pointer;
	bool prog_string;
public:
	uint8_t mask_for(uint8_t x, uint8_t row);
	uint16_t width();
	uint16_t height();
	SpecialFontTexture(FontAccess *font_p) {
		this->font = font_p;
		this->string_pointer = NULL;
		this->prog_string = false;
	}
	~SpecialFontTexture() {
		font = NULL;
	}
	SpecialFontTexture *setString(const char *pointer) {
		string_pointer = pointer;
		prog_string = false;
		return this;
	}
	SpecialFontTexture *setProgString(const char *pointer) {
		string_pointer = pointer;
		prog_string = true;
		return this;
	}
};

class ImageTexture: public TextureBuilder {
private:
	const char *image;
	uint8_t index;
public:
	uint8_t mask_for(uint8_t x, uint8_t row);
	uint16_t width();
	uint16_t height();
	void set_index(uint8_t index) {
		this->index = index;
	}
	ImageTexture(const char *image) {
		this->image = image;
		this->index = 0;
	}
	~ImageTexture() {
		this->pgm_helper_pointer = NULL;
	}
};

#endif /* TEXTURE_BUILDER_H_ */
