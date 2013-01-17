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
#ifndef SYSTEM_CONTROLLER_H
#define SYSTEM_CONTROLLER_H

#include "UI/Views/List.h"
#include "UI/Views/LabelCell.h"
#include "UI/Views/CaptionCell.h"
#include "UI/Views/OnOffCell.h"

#include "UI/Views/ListViewController.h"

enum LabelIDS {
  TEXT1 = 0,
  TEXT2
};

class SystemController : public ListViewController {
private:
	uint8_t numberOfElems();
    ListCell *getCellForRow(uint8_t row);

    /* Must be defined before of the list so it is already constructed at the list constructor call */
    LabelCell label_cell;
    CaptionCell caption_cell;
    OnOffCell on_off_cell;

    /* Should be defined after the cells */
public:
    SystemController() : ListViewController(MakeRect(10, 4, 108, 50), this) { init(); }
};

#endif
