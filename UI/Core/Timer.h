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
#ifndef TIMER_H
#define TIMER_H

#undef UINT16_MAX
#define UINT16_MAX 0xFFFF

typedef uint16_t Time;

/* Timer: Mostly useful for animations allowing to predict which 
 * animation frame should be drawn */
class Timer {
  private:
    Time ticks;
  public:
    Timer(Time range_ms) : ticks(0) { }
        
    void tick() { ticks++; }
    Time getTime() { return ticks; }

    Time timePassed(Time origin) {
      return Timer::getTimerDifference(origin, this->getTime());
    }

    static Time getTimerDifference(Time origin, Time last) { 
      return origin > last ? (UINT16_MAX - origin) + last : last - origin; 
    }

    bool inTime(Time time) {
      return timePassed(time) < UINT16_MAX / 2;
    }
};
#endif /* TIMER_H */

