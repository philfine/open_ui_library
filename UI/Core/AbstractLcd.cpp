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
#include "AbstractLcd.h"
#include "fonts/helvB08.h" // TODO




AbstractLcd *AbstractLcd::s_instance = 0;

AbstractLcd *AbstractLcd::instance() { return s_instance; }

void AbstractLcd::drawDebugMessage()
{
	FontAccess font(font_helvB08);
	SpecialFontTexture texture(&font);
  	texture.setString(debug_message);
  	AbstractLcd::instance()->draw_with(0, 56, &texture);
}

