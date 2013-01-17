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
#ifndef TOOLS_H_
#define TOOLS_H_

#include "Global.h"

typedef struct {
	uint16_t width;
	uint16_t height;
} Size;
Size MakeSize(uint16_t w, uint16_t h);

typedef struct {
	int16_t x;
	int16_t y;
} Position;
Position MakePosition(int16_t x, int16_t y);

typedef struct {
	Position position;
	Size size;
} Rect;
Rect MakeRect(int16_t x, int16_t y, uint16_t w, uint16_t h);


//
//class Size {
//public:
//    int16_t width;
//    int16_t height;
//    Size(int16_t w, int16_t h) : width(w), height(h) { }
//    Size(const Size &s) : width(s.width), height(s.height) { }
//};
//
//class Position {
//public:
//    int16_t x;
//    int16_t y;
//    Position(int16_t _x, int16_t _y) : x(_x), y(_y) { }
//    Position(const Position &p) : x(p.x), y(p.y) { }
//};
//
//class Bounds {
//public:
//	Position pos;
//	Size size;
//	Bounds() : pos(0, 0), size(0, 0) { }
//	Bounds(int16_t x, int16_t y, int16_t w, int16_t h) : pos(x, y), size(w, h) { }
//    Bounds(const Bounds &b) : pos(b.pos), size(b.size) { }
//};



#endif /* TOOLS_H_ */
