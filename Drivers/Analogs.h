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
#ifndef ANALOGS_H
#define ANALOGS_H

#include <inttypes.h>

enum capture_mode {
  single = 0,
  filter,
  osmp
};

#define NR_ANA 8

class Analogs;
extern Analogs AnalogsInstance;

class Analogs {
private:
  uint16_t positions[NR_ANA];
  enum capture_mode mode;

  uint16_t getADC(uint8_t channel);

public:
  //static Analogs *instance() { return &AnalogsInstance; }
  void init();
  uint16_t readAnalog(uint8_t nr) { return positions[nr]; }
  void updateAnalogs();
};


#endif
