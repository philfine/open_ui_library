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
#ifndef LABELCELL_H_
#define LABELCELL_H_

#include "../Core/Global.h"
#include "ListCell.h"

typedef struct {
	const char *string_pointer;
	bool state;
} LabelCellData;

#define MAKE_LABELCELLDATA(STR) { STR }

class LabelCell: public ListCell {
private:
	int16_t anim_pos;
	LabelCellData *getData() { return ((LabelCellData *) data); }
public:
	LabelCell() : ListCell(), anim_pos(0) { }
	void draw();
	uint8_t height() { return 8; }
	bool selectable() { return true; }
};

#endif /* LABELCELL_H_ */
