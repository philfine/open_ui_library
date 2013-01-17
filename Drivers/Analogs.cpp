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
#include "Analogs.h"

#ifndef SIMULATE
#include <avr/io.h>

#define ADC_VREF_TYPE 0x40
uint16_t Analogs::getADC(uint8_t channel)
{
  ADMUX = channel | ADC_VREF_TYPE;
  // Start the AD conversion
  ADCSRA |= 0x40;
  // Wait for the AD conversion to complete
  while ((ADCSRA & 0x10) == 0);
  ADCSRA |= 0x10;
  return ADCW; 
}

void Analogs::updateAnalogs()
{
  for(uint8_t i = 0; i < NR_ANA; i++)
  {
    switch(mode)
    {
      case single:
      case filter:
      case osmp:
	positions[i] = getADC(i);	
	break;
    }
  }
}

void Analogs::init()
{
  //DDRF = 0x00;  PORTF = 0x00; //all F inputs anain - pullups are off

  ADMUX=ADC_VREF_TYPE;
  ADCSRA=0x85;

  for(uint8_t i = 0; i < NR_ANA; i++)
  {
    positions[i] = getADC(i);
  }
}

#endif
//Analogs AnalogsInstance;
