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
#ifndef ONOFFCELL_H_
#define ONOFFCELL_H_

#include "ListCell.h"

typedef struct {
	const char *string_pointer;
	bool state;
} OnOffCellData;

#define MAKE_ONOFFCELDATA(STR, STATE) { STR, STATE }

#define DATA ((OnOffCellData *) data)

class OnOffCell: public ListCell {
private:
	OnOffCellData *getData() { return ((OnOffCellData *) data); }
public:
	OnOffCell() : ListCell() { }
//	void setString(const char *string_pointer_p, bool is_prog_string_p = true) {
//    	is_prog_string = is_prog_string_p;
//    	string_pointer = string_pointer_p;
//    }
    void toggle() { getData()->state ^= 1; }
    void setState(bool state_p) { getData()->state = state_p; }
	void draw();
	uint8_t height() { return 8; }
	bool selectable() { return true; }
	bool handle_event(Event *ev);
};

#endif /* ONOFFCELL_H_ */
