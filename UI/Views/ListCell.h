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
#ifndef LISTCELL_H_
#define LISTCELL_H_

#include "../Core/View.h"

class ListCell : public View {
protected:
	const void *data;
	bool selected;
public:

	ListCell() : View(MakeRect(0,0,0,0), NULL), selected(false) { }
	~ListCell() { };

	virtual uint8_t height() = 0;
	virtual bool selectable() = 0;
	void setData(const void *data) { this->data = data; }
	void setSelected(bool value)  { selected = value; }
};

#endif /* LISTCELL_H_ */
