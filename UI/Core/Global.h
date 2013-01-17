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
#ifndef GLOBAL_H
#define GLOBAL_H

#ifndef SIMULATE
#include <avr/io.h>
//  #include <util/delay.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/io.h>
// TODO: Redundant and fixed for Atmega64
#include <avr/iom64.h>
#include <inttypes.h>

#define printf(...)

//#define BREAKPOINT(INDEX) { if(INDEX == -1 || array[INDEX]) { __asm { "break" } } }
#define BREAKPOINT() { __asm { "break" }

#else
#include <inttypes.h>
#include <SDL.h>
#define PROGMEM
#define PSTR(S) S

#define pgm_read_byte(P) *((uint8_t *) P)
#define pgm_read_word(P) *((uint16_t *) P)

#define BREAKPOINT()

#endif

//#ifndef prog_char
//  #define prog_char char
//  #undef APM 
//  #define APM 
//#endif

#undef NULL
#define NULL 0

extern char *global_debug;

#endif /* GLOBAL_H */
