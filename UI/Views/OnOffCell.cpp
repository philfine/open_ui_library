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
#include "OnOffCell.h"
#include "../Core/fonts/courB08.h"

void OnOffCell::draw()
{
	printf("DRAWING ONOFFCELL state = %d\n", getData()->state);
	FontAccess font(font_courB08);
	SpecialFontTexture texture(&font);
	texture.setProgString(getData()->string_pointer);

	AbstractLcd::instance()->setBounds(MakeRect(0,0, frame.size.width - 28, 8));
	View::draw_with(0, 0, &texture);
	AbstractLcd::instance()->popBounds();

	texture.setProgString(getData()->state == true ? PSTR("On") : PSTR("Off"));
	View::draw_with(frame.size.width - texture.width(), 0, &texture);
	AbstractLcd::instance()->setBounds(MakeRect(frame.size.width - texture.width(),0, texture.width(), 8));
	AbstractLcd::instance()->popBounds();
}

bool OnOffCell::handle_event(Event *ev) {
	if (ev->getType() == EVENT_STATE_DOWN)
	{
		switch (ev->getKey()) {
			case KEY_MENU:
				printf("HANDLING OnOffCell Events\n");
				getData()->state ^= 1;
				return true;
				break;
			default:
				break;
		}
	}
	return false;
}
