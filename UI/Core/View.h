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
#ifndef VIEW_H
#define VIEW_H

#include "AbstractLcd.h"
#include "Timer.h"

#include "Tools.h"
#include "Window.h"
#include "Responder.h"

class View : public Responder { 
  bool local_handle_event(Event ev) { return false; };
  View **subviews;

  bool in_animation;
  uint8_t animation_time;

  static Position offset_position;
  static Position top_left_bounds;
  static Position bottom_right_bounds;

  void local_draw();

protected:
  Rect frame;

  virtual void draw();

  /* Animation methods */
protected:
  virtual bool startAnimation() { return false; };
  virtual bool endAnimation() { return true; };

  uint8_t animationStep() {
    return Window::instance()->timer.timePassed(animation_time);
  }
  void endAnimating() {
    Window *window = Window::instance();
    window->stopAnimation();
  }
private:

  /* Initialization methods */
protected:
  View(Rect f, Responder *chain, View **sv) :
       Responder(chain), subviews(sv), frame(f) { animation_time = 0; in_animation = 0; }
  View(Rect f, Responder *chain) : Responder(chain), subviews(NULL), frame(f) { animation_time = 0; in_animation = 0; }
  View(Responder *chain) : Responder(chain), subviews(NULL), frame(MakeRect(0, 0, 0, 0)) { animation_time = 0; in_animation = 0; }

  /* Accessor methods */
  void setPosition(Position p) { frame.position = p; }
  void setSize(Size s) { frame.size = s; }

  static void draw_with(int16_t x, int16_t y, TextureBuilder *texture) { 
    x += offset_position.x;
    y += offset_position.y;
    printf("X = %d, Y = %d\n", x, y);
    AbstractLcd::instance()->draw_with(x, y, texture);
  }
  
  static void draw_box(int16_t x, int16_t y, uint8_t w, uint8_t h) {
    x += offset_position.x;
    y += offset_position.y;
    //for(uint8_t i = y; i < y+h; i++)
    //  AbstractLcd::instance()->hline_with_pattern(x, i, w, 0xff);
    for(int16_t i = x; i < x+w; i++)
      AbstractLcd::instance()->vline_with_pattern(i, y, h, 0xff);
  }

  /* Offset of the view inside the parent view */
  static void offset(int16_t x, int16_t y) { 
    offset_position.x += x;
    offset_position.y += y;
  }

//  void bounds()
//  {
//    top_left_bounds = current_pos;
//    uint16_t w = (current_pos.x + current_size.width > bottom_right_bounds.x) ? bottom_right_bounds.x : current_pos.x + current_size.width;
//    uint16_t h = (current_pos.y + current_size.width > bottom_right_bounds.y) ? bottom_right_bounds.y : current_pos.y + current_size.width;
//    bottom_right_bounds = MakePosition(current_pos.x + w, current_pos.y + h);
////    AbstractLcd::instance()->setBounds (current_pos.x, current_pos.y, w, h);
//  }

  static void clear() {
    AbstractLcd::instance()->clear();
  }

  friend class Window;
  friend class List;
  friend class HorizontalList;
};


#endif
