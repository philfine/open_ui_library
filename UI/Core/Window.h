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
#ifndef WINDOW1_H_
#define WINDOW1_H_

#include "Global.h"
#include "Timer.h"

class ViewController;

#define VIEW_WINDOW_STACK_SIZE 3

class Window {
  ViewController *stack[VIEW_WINDOW_STACK_SIZE];
  int8_t stack_pos;

  static Window *s_instance;

  uint8_t animating;
  Time animation_last_time;
public:
  Timer timer; // TODO: change to private

  Window() : stack_pos(-1), animating(0), animation_last_time(0), timer(100) { s_instance = this; }
  static Window *instance() { return s_instance; }
  bool pushViewController(ViewController *v);
  bool dropView();

  /* Animation related */
  bool inAnimation() {
	Time current_time = timer.getTime();
    if(animating > 0 && animation_last_time != current_time)
    {
    	animation_last_time = current_time;
    	return true;
    }
    return false;
  }
  void startAnimation() { animating++; }
  void stopAnimation() { animating--; }

  /* Redraw */
  void redraw();
};



#endif /* WINDOW1_H_ */
