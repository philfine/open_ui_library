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
#include "Tools.h"

Size MakeSize(uint16_t w, uint16_t h)
{
	Size size;
	size.width = w;
	size.height = h;
	return size;
}
Position MakePosition(int16_t x, int16_t y)
{
	Position position;
	position.x = x;
	position.y = y;
	return position;
}
Rect MakeRect(int16_t x, int16_t y, uint16_t w, uint16_t h)
{
	Rect rect;
	rect.position = MakePosition(x, y);
	rect.size = MakeSize (w, h);
	return rect;
}
