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
#include "SystemController.h"
#include <avr/pgmspace.h>

LabelCell label_cell;
CaptionCell caption_cell;
OnOffCell on_off_cell;

const char caption1_str[] PROGMEM = "Caption Title";
const char onoff_str[] PROGMEM = "Boolean Choice";
const char label1_str[] PROGMEM = "Label1";
const char label2_str[] PROGMEM = "Label2";
const char label3_str[] PROGMEM = "This is a big label to be slided";

struct list_data {
	CaptionCellData caption1;
	LabelCellData label1;
	OnOffCellData onoffdata;
	LabelCellData label2;
	LabelCellData label3;
	CaptionCellData caption2;
	LabelCellData label4;
	OnOffCellData onoffdata1;
	LabelCellData label5;
	LabelCellData label6;
};
struct list_data data = {
		MAKE_CAPTIONCELLDATA(caption1_str),
		MAKE_LABELCELLDATA(label1_str),
		MAKE_ONOFFCELDATA(onoff_str, false),
		MAKE_LABELCELLDATA(label2_str),
		MAKE_LABELCELLDATA(label3_str),
		MAKE_CAPTIONCELLDATA(caption1_str),
		MAKE_LABELCELLDATA(label1_str),
		MAKE_ONOFFCELDATA(onoff_str, false),
		MAKE_LABELCELLDATA(label2_str),
		MAKE_LABELCELLDATA(label3_str),
};

const void *list_data[] = {
	&data.caption1,
	&data.label1,
	&data.onoffdata,
	&data.label2,
	&data.label3,
	&data.caption2,
	&data.label4,
	&data.onoffdata1,
	&data.label5,
	&data.label6
};

//const char *strings[] = {
//  "CAPTION",
//  "Position NEW",
//  "Position 2",
//  "Posit2ion 3",
//  "Position 4"
//};
enum cell_types {
	LABEL = 0,
	CAPTION,
	ONOFF
};
const enum cell_types types[] = {
	CAPTION,
	LABEL,
	ONOFF,
	LABEL,
	LABEL,
	CAPTION,
	LABEL,
	ONOFF,
	LABEL,
	LABEL,
};


uint8_t SystemController::numberOfElems()
{
  return 8;
}
ListCell *SystemController::getCellForRow(uint8_t row)
{
//	row = xrow % 5;
	switch(types[row]) {
		case CAPTION:
			caption_cell.setData(list_data[row]);
			return &caption_cell;
		case LABEL:
			label_cell.setData(list_data[row]);
			return &label_cell;
		case ONOFF:
			on_off_cell.setData(list_data[row]);
			return &on_off_cell;

	}
	return NULL;
}

