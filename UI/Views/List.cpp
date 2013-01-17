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
#include "List.h"
#include "ListViewController.h"

#include <stdlib.h>

void List::init() {
	selected_element = 0;
	ListCell *cell = delegator->getCellForRow(selected_element);

	printf("CELL = %p\n", cell);

	if(!cell->selectable())
	{
		selected_element += 1;
		cell = delegator->getCellForRow(selected_element);
	}
}

uint8_t List::sizeOfElement(uint8_t i) {
	ListCell *cell = delegator->getCellForRow(i);
	return cell->height();

//	switch (delegator->getElementType(i)) {
//	case ElemTypeLabel:
//	case ElemTypeSelector:
//		return 8;
//	case ElemTypeSubView:
//		return delegator->getSubViewForElem(i)->current_size.height;
//	}
	return 0;
}
uint16_t List::fullListSize() {
	uint16_t size = 0;
	for (uint8_t i = 0; i < delegator->numberOfElems(); i++)
		size += sizeOfElement(i);
	return size;
}

uint16_t List::size_until() {
	uint16_t ret = 0;
	for (uint8_t i = 0; i < selected_element; i++)
		ret += sizeOfElement(i);
	return ret;
}

// TODO: Remove is not needed
uint16_t List::size_after() {
	uint16_t ret = 0;
	for (uint8_t i = selected_element + 1; i < delegator->numberOfElems(); i++)
		ret += sizeOfElement(i);
	return ret;
}

int16_t List::computeOffset() {

	uint16_t full_size = fullListSize();
	uint16_t pos1 = size_until();
	uint8_t size = sizeOfElement(selected_element);
	int16_t max = pos1 - frame.size.height + size + 8;
	int16_t min = pos1 - 8;

	int16_t offset = 0;

	if (operation == Forward)
		offset = -max;
	else if (operation == Backward)
		offset = -min;

	if ((-offset) + frame.size.height > (int16_t) full_size)
		offset = -(full_size - frame.size.height);
	if (offset > 0)
		offset = 0;

	return offset;
}

bool List::startAnimation() {
	//printf("HERE I AM\n");
//  if(should_animate == true)
	{
		origin_offset = offset;
		should_animate = false;
		return true;
	}
	return false;
}

#define ANINAMTION_SPEED 1
bool List::endAnimation() {
	//int8_t diff = offset - computeOffset();
	//diff = diff < 0 ? -diff : diff;
	printf("step = %d, computeOffset = %d, offset = %d\n",
			animationStep(), computeOffset(), offset);
	if (offset == computeOffset())
		return true;
	else
		return false;

//  else if(animationStep() * ANINAMTION_SPEED < diff)
//    return false;
//  else
//    return true;
}

void List::draw() {
	// Compute new start offset
	int16_t final_offset = computeOffset();

	int8_t diff = (animationStep() * ANINAMTION_SPEED);

	if (origin_offset < final_offset && origin_offset + diff < final_offset)
		offset = origin_offset + diff;
	else if (origin_offset > final_offset
			&& origin_offset - diff > final_offset)
		offset = origin_offset - diff;
	else
		offset = computeOffset();

//	View::offset(0, offset);

	AbstractLcd::instance()->setDebugMessage("HERE");

	uint16_t cell_y_offset = offset;
	for (uint8_t i = 0; i < delegator->numberOfElems(); i++) {
		ListCell *cell = delegator->getCellForRow(i);
		cell->setSelected(i == selected_element);
		cell->frame.position = MakePosition(0, cell_y_offset);
		cell->frame.size = MakeSize(frame.size.width, cell->height());

		/* Draw box on selected element */
		if (selected_element == i) {
			uint8_t height = 8;
			if(cell->selectable())
			{
				height = cell->height();
			}

			View::draw_box(0, cell_y_offset, frame.size.width, height);
		}

		// TODO: Verify if the cell is inside the frame
		if(true) {
//			AbstractLcd::instance()->setBounds(Bounds(Position(0,0), Size(64, 8)))
//			cell->setPosition(MakePosition(0, offset));
			cell->local_draw();
//			View::offset(0, cell->height());
		}
		cell_y_offset += cell->height();
	}
}
bool List::handle_general_event(Event *ev) {
	if (ev->getType() == EVENT_STATE_DOWN)
	{
		// TODO: Handle sub actions on Cells
		switch (ev->getKey()) {
			case KEY_EXIT:
				// Make first responder higher in hierarchy
				// If there is no first responder jump out of this view
				if (next_responder != NULL)
					first_responder = next_responder; // TODO: Check this
				else
					Window::instance()->dropView();
				break;
			default:
				{
					printf("IN LIST HANDLING GENERAL EVENT\n");
					ListCell *cell = delegator->getCellForRow(selected_element);
					return cell->handle_event(ev);
				}
				break;
		}
	}
	return false; // TODO
}

void List::previousElement()
{
	uint8_t new_element = (selected_element - 1);
	if (selected_element == 0)
		new_element = delegator->numberOfElems() - 1;

	while(!delegator->getCellForRow(new_element)->selectable())
	{
		if(new_element == 0)
			new_element = delegator->numberOfElems()-1;
		else
			new_element -= 1;
	}
	operation = selected_element > new_element ? Backward : Forward;
	selected_element = new_element;
	should_animate = true;
}
void List::nextElement()
{
	uint8_t new_element = (selected_element + 1);
	if (selected_element == delegator->numberOfElems() - 1)
		new_element = 0;

	while(!delegator->getCellForRow(new_element)->selectable())
	{
		if(new_element == delegator->numberOfElems() - 1)
			new_element = 0;
		else
			new_element += 1;
	}
	operation = selected_element > new_element ? Backward : Forward;
	selected_element = new_element;
	should_animate = true;
}


bool List::handle_event(Event *ev) {
	if (ev->getType() == EVENT_STATE_DOWN) {
		switch (ev->getKey()) {
		case KEY_UP:
			previousElement();
			return true;
			break;
		case KEY_DOWN:
			nextElement();
			return true;
			break;
		default:
			return handle_general_event(ev);
			break;
		}
	}

	return false; // TODO
}

uint8_t HorizontalList::sizeOfElement(uint8_t i) {
	ListCell *cell = delegator->getCellForRow(i);
	return cell->height();
}
bool HorizontalList::handle_event(Event *ev) {
// TODO: Add verification for cell->selectable()
	if (ev->getType() == EVENT_STATE_DOWN)
		switch (ev->getKey()) {
		case KEY_RIGHT:
			if (selected_element > 0)
				selected_element -= 1;
			break;
		case KEY_LEFT:
			if (selected_element < delegator->numberOfElems() - 1)
				selected_element += 1;
			break;
		default:
			handle_general_event(ev);
			break;
		}
	return false; // TODO
}

void HorizontalList::draw() {
	// Compute new start offset
	uint16_t offset = computeOffset();
	View::offset(offset, 0);

	for (uint8_t i = 0; i < delegator->numberOfElems(); i++) {
		ListCell *cell = delegator->getCellForRow(i);

		if (selected_element == i) {
			uint8_t height = cell->height();
			View::draw_box(0, 0, frame.size.width, height);
		}

		// TODO: Verify if cell is inside the frame before calling draw
		cell->draw();
		View::offset(sizeOfElement(i), 0);
	}
}
