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
#include "Responder.h"
#include "Global.h"

Responder *Responder::first_responder = NULL;

bool Responder::responder_handle_event(Event *ev) {
	Responder *current = first_responder;
	bool handled = false;
	while (current != NULL && handled == false) {
		handled = current->handle_event(ev);
		if (handled == false)
			current = current->next_responder;
		else {
			/* return true to redraw window */
			return true;
		}
	}
	return false;
}
