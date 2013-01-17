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
#ifndef CAPTIONCELL_H_
#define CAPTIONCELL_H_

#include "../Core/Global.h"
#include "ListCell.h"

typedef struct {
	const char *string_pointer;
} CaptionCellData;

#define MAKE_CAPTIONCELLDATA(STR) { STR }

class CaptionCell : public ListCell {
private:
	CaptionCellData *getData() { return ((CaptionCellData *) data); }
public:
	CaptionCell() : ListCell() { }
	~CaptionCell() { }
	void draw();
	uint8_t height() { return 6; }
	bool selectable() { return false; }
};

#endif /* CAPTIONCELL_H_ */
