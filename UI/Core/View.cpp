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
#include "View.h"

Position View::offset_position = MakePosition(0, 0);

Position View::top_left_bounds = MakePosition(0, 0);
Position View::bottom_right_bounds = MakePosition(127, 64);

void View::local_draw() {
	/* Backup parent view offset and bounds */
	Position position_backup(View::offset_position);
//	Bounds bounds_backup = AbstractLcd::instance()->getBounds();

	/* Set current view offset and bounds */
	View::offset(this->frame.position.x, this->frame.position.y);
	AbstractLcd::instance()->setBounds(MakeRect(frame.position.x, frame.position.y, frame.size.width, frame.size.height));
	printf("setBounds (%d, %d) (%d, %d)\n", frame.position.x, frame.position.y, frame.size.width, frame.size.height);

	/* Verify for animation start */
	if (in_animation == false && startAnimation() == true) {
		in_animation = true;
		animation_time = Window::instance()->timer.getTime();
		Window::instance()->startAnimation();
	}

	/* Draw view */
	this->draw();

	/* Verify for animation end */
	printf("View::in_animation = %d\n", in_animation);
	if (in_animation == true && endAnimation() == true) {
		in_animation = false;
		Window::instance()->stopAnimation();
	}

	/* Recover parent view offset and bounds */
	View::offset_position = position_backup;
	AbstractLcd::instance()->popBounds();
}
void View::draw() {
	if (subviews != NULL) {
		View **tmp = subviews;
		while (*tmp != NULL) {
			View *view = *tmp;
			view->local_draw();
			tmp++;
		}
	}
}

