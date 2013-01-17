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
#ifndef RESPONDER_H_
#define RESPONDER_H_

#include "../../Drivers/Events.h"

class Responder {
protected:
  static Responder *first_responder;
  Responder *next_responder;
  virtual bool handle_event(Event *ev) { return false; }
  bool canBeFirstResponder() { return false; };
public:
  Responder(Responder *nr) : next_responder(nr) { }
  virtual ~Responder() { }
  static bool responder_handle_event(Event *ev);

};

#endif /* RESPONDER_H_ */
