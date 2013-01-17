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
#ifndef AVR_CPP_H
#define AVR_CPP_H

#include <stdlib.h> 

void * operator new(size_t size);
void operator delete(void * ptr);

extern "C" void __cxa_pure_virtual(void);

//disable whole pgmspace functionality for all avr-gcc because
//avr-gcc > 4.2.1 does not work anyway
//http://www.mail-archive.com/gcc-bugs@gcc.gnu.org/msg239240.html
//http://gcc.gnu.org/bugzilla/show_bug.cgi?id=34734
//

//Workarounds:
//
//PSTR is fixed below
//all prog_xx definitions must use APM explicitely

//#define __ATTR_PROGMEM__
//#include <avr/pgmspace.h>
//#ifdef __cplusplus
//#define APM __attribute__(( section(".progmem.data") ))
//#undef PSTR
//#define PSTR(s) (__extension__({static prog_char APM __c[] = (s);&__c[0];}))
//#endif

#endif /* AVR_CPP_H */
