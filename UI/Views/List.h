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
#ifndef LIST_H
#define LIST_H

#include "../Core/Global.h" // TODO: Remove this dependency
#include "../Core/View.h"
#include "ListCell.h"

class ListViewController;

enum ListSelectorOperation {
  None = 0,
  Forward,
  Backward
};

class List : public View {
private:
  uint8_t sizeOfElement(uint8_t i);
  uint16_t fullListSize();

  uint16_t size_until();
  uint16_t size_after();

  void init();

  enum ListSelectorOperation operation;

  /* Animate related attribute */
  bool should_animate;
  int16_t offset;
  int16_t origin_offset;

  bool startAnimation();
  bool endAnimation();
protected: 
  ListViewController *delegator;
  uint8_t list_id;
  uint8_t selected_element;

  void nextElement();
  void previousElement();

  void draw();
  bool handle_event(Event *ev);
  bool handle_general_event(Event *ev);
  int16_t computeOffset();
public:
  List(Responder *next_responder, ListViewController *d) : View(next_responder),
						     offset(0),
						     delegator(d), 
						     list_id(0),
						     selected_element(0){ }
  List(Rect f, Responder *next_responder, ListViewController *d) : View(f, next_responder, NULL),
						     should_animate(false),
						     offset(0),
						     delegator(d), 
						     list_id(0),
  	  	  	  	  	  	  	 selected_element(0)
						     {
//
//						       setPosition(f.position);
//						       setSize(f.size);
						     }
  void setDelegate(ListViewController *d) { delegator = d; }

  friend class ListViewController;
};

class HorizontalList : public List {
private:
  uint8_t sizeOfElement(uint8_t i);
  void draw();
public:
  HorizontalList(Responder *next_responder, ListViewController *d) : List(next_responder, d) { }
  bool handle_event(Event *ev);
};

#endif

