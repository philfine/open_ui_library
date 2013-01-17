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
#include "Window.h"
#include "ViewController.h"
#include "View.h"

Window *Window::s_instance = 0;
void Window::redraw()
{
  printf("Redrawing");
  View::clear();
  stack[stack_pos]->view->local_draw();
  AbstractLcd::instance()->drawDebugMessage();
  AbstractLcd::instance()->refresh();
}


bool Window::pushViewController(ViewController *vc)
{
  //if(stack_pos == VIEW_STACK_SIZE-1)
  //  return false;

  // TODO : Reset animating views to 0;
  animating = 0;

  ViewController *old_vc = stack[stack_pos];

  /* Add v to the view stack */
  stack[++stack_pos] = vc;
  View::first_responder = vc->view;

  //TODO : Add call to pushed view to prepare appearance animation.
  if(stack_pos > 0)
	  old_vc->willDisappear();
  vc->willAppear();
  redraw();
  if(stack_pos > 0)
  	  old_vc->didDisappear();
  vc->didAppear();

  return true;
}
bool Window::dropView()
{
  // Will never lost first view in stack
  if(stack_pos == 0)
    return false;

  // Remove view from stack
  stack_pos--;
  return true;
}
