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
#include "../Global.h"

// timI24 = "Times Italic"

const char font_timI24[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xDE,0x00,
0xEB,0x00,
0x20,0x01,
0x5E,0x01,
0xA8,0x01,
0xE9,0x01,
0xF0,0x01,
0x1A,0x02,
0x44,0x02,
0x5E,0x02,
0x81,0x02,
0x89,0x02,
0x93,0x02,
0x99,0x02,
0xB9,0x02,
0xEB,0x02,
0x11,0x03,
0x43,0x03,
0x72,0x03,
0xA7,0x03,
0xD9,0x03,
0x05,0x04,
0x34,0x04,
0x63,0x04,
0x8F,0x04,
0x9E,0x04,
0xB9,0x04,
0xEE,0x04,
0x13,0x05,
0x49,0x05,
0x6D,0x05,
0xD7,0x05,
0x16,0x06,
0x51,0x06,
0x92,0x06,
0xDF,0x06,
0x23,0x07,
0x67,0x07,
0xAB,0x07,
0xFB,0x07,
0x24,0x08,
0x5C,0x08,
0xA3,0x08,
0xDE,0x08,
0x3A,0x09,
0x87,0x09,
0xC2,0x09,
0x03,0x0A,
0x55,0x0A,
0x93,0x0A,
0xC5,0x0A,
0xFE,0x0A,
0x45,0x0B,
0x87,0x0B,
0xE7,0x0B,
0x2E,0x0C,
0x6C,0x0C,
0xAA,0x0C,
0xDC,0x0C,
0xF9,0x0C,
0x2B,0x0D,
0x4B,0x0D,
0x5E,0x0D,
0x67,0x0D,
0x88,0x0D,
0xB7,0x0D,
0xD4,0x0D,
0x06,0x0E,
0x23,0x0E,
0x72,0x0E,
0xA5,0x0E,
0xD4,0x0E,
0xEB,0x0E,
0x26,0x0F,
0x55,0x0F,
0x6F,0x0F,
0xA0,0x0F,
0xC1,0x0F,
0xE2,0x0F,
0x1E,0x10,
0x4B,0x10,
0x66,0x10,
0x81,0x10,
0x9B,0x10,
0xBC,0x10,
0xDB,0x10,
0x08,0x11,
0x2B,0x11,
0x5E,0x11,
0x7D,0x11,
0xAB,0x11,
0xD1,0x11,
0xFF,0x11,

// space (32): w=1, h=1
0x80,0x16,0x4C,
0x00,

// exclam (33): w=8, h=23
0x47,0x15,
0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0x1F,
0x00,0x00,0xC0,0xFC,0x1F,0x03,0x00,0x00,
0x70,0x70,0x71,0x00,0x00,0x00,0x00,0x00,

// quotedbl (34): w=10, h=8
0x89,0x00,0x85,
0xF8,0x7E,0x1F,0x06,0x00,0x00,0xF8,0x7E,0x1F,0x06,

// numbersign (35): w=17, h=23
0x50,0x0D,
0x00,0x00,0x80,0x80,0x80,0x80,0xF8,0xBF,0x83,0x80,
0x80,0x80,0xF8,0xBF,0x87,0x80,0x80,
0xC0,0xC0,0xC1,0xE1,0xFD,0xDF,0xC3,0xC1,0xC1,0xE1,
0xFD,0xDF,0xC3,0xC1,0xC1,0x01,0x01,
0x00,0x70,0x7E,0x0F,0x01,0x00,0x00,0x60,0x7E,0x0F,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=15, h=26
0x6E,0x0E,
0x00,0x00,0x00,0x78,0xFE,0xC6,0x83,0x01,0xE1,0x3F,
0x03,0x03,0x06,0x3E,0x0C,
0x00,0x00,0x00,0x00,0x01,0x03,0xC7,0x7F,0x1F,0x3C,
0xF8,0xF0,0xE0,0x80,0x00,
0x1F,0x38,0x20,0x60,0xC0,0x7C,0x47,0x40,0x60,0x60,
0x30,0x3F,0x1F,0x07,0x00,
0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// percent (37): w=24, h=24
0x57,0x15,
0xE0,0xF8,0x7C,0x0E,0x06,0x03,0x01,0x01,0x81,0xE3,
0x7E,0x0C,0x0C,0x8C,0xE6,0x7E,0x1F,0x07,0x01,0x00,
0x00,0x00,0x00,0x00,
0x03,0x07,0x0E,0x08,0x08,0x08,0x0C,0x06,0x07,0xC1,
0xF0,0x38,0x0E,0x03,0xC1,0xE0,0x70,0x30,0x18,0x08,
0x08,0x08,0x18,0xF0,
0x00,0x00,0x00,0x00,0x00,0xC0,0x70,0x1C,0x0F,0x03,
0x00,0x00,0x00,0x1F,0x3F,0x73,0x40,0x40,0x40,0x60,
0x30,0x3C,0x0F,0x03,

// ampersand (38): w=21, h=23
0x54,0x1C,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFC,0x0E,
0x03,0x81,0xC1,0xE3,0x7F,0x1E,0x00,0x00,0x00,0x00,
0x00,
0x00,0xC0,0xE0,0xF0,0x30,0x18,0x08,0x07,0x1F,0xFF,
0xFB,0xC1,0x00,0x00,0x08,0xC8,0x78,0x38,0x18,0x08,
0x08,
0x1F,0x3F,0x3F,0x70,0x60,0x60,0x60,0x60,0x20,0x30,
0x33,0x1F,0x1F,0x3E,0x7B,0x71,0x60,0x60,0x20,0x10,
0x00,

// quotesingle (39): w=4, h=8
0x83,0x00,0x84,
0xF8,0x7E,0x1F,0x06,

// parenleft (40): w=10, h=29
0x69,0x13,
0x00,0x00,0x80,0xC0,0xF0,0x38,0x0C,0x06,0x03,0x01,
0xF0,0xFE,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x7F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x0E,0x10,0x00,0x00,0x00,0x00,0x00,0x00,

// parenright (41): w=10, h=29
0x69,0x04,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0E,0xF8,0xC0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x80,0xE0,0x7C,0x3F,0x0F,0x01,
0x10,0x18,0x0C,0x06,0x03,0x01,0x00,0x00,0x00,0x00,

// asterisk (42): w=12, h=13
0x2B,0x17,
0x0C,0x1C,0x18,0xB0,0xE0,0xFF,0xFF,0xE0,0xB0,0x18,
0x1C,0x0C,
0x06,0x07,0x03,0x01,0x00,0x1F,0x1F,0x00,0x01,0x03,
0x07,0x06,

// plus (43): w=16, h=16
0xAF,0x07,0x79,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,

// comma (44): w=5, h=8
0x84,0x13,0x39,
0x80,0xC0,0x67,0x3F,0x0F,

// hyphen (45): w=7, h=2
0x86,0x0F,0x67,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=3, h=3
0x82,0x14,0x59,
0x07,0x07,0x07,

// slash (47): w=10, h=24
0x49,0x02,
0x00,0x00,0x00,0x00,0x00,0x80,0xF0,0x7E,0x0F,0x01,
0x00,0x00,0x00,0xE0,0xFC,0x1F,0x03,0x00,0x00,0x00,
0x80,0xF0,0x7E,0x0F,0x01,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=16, h=23
0x4F,0x08,
0x00,0x00,0x80,0xE0,0xF0,0x38,0x0C,0x06,0x02,0x03,
0x01,0x03,0x07,0xFE,0xFC,0xF0,
0xF0,0xFE,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xC0,0xF8,0xFF,0x3F,0x07,
0x07,0x1F,0x3F,0x70,0x60,0x40,0x60,0x60,0x30,0x18,
0x1E,0x07,0x03,0x00,0x00,0x00,

// one (49): w=12, h=23
0x4B,0x11,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xE2,0xFE,
0xFF,0x0F,
0x00,0x00,0x00,0x00,0x00,0x80,0xF0,0xFF,0x7F,0x07,
0x00,0x00,
0x40,0x40,0x40,0x60,0x78,0x7F,0x7F,0x43,0x40,0x40,
0x00,0x00,

// two (50): w=16, h=23
0x4F,0x03,
0x00,0x00,0x00,0x30,0x18,0x0C,0x06,0x06,0x07,0x07,
0x07,0x0F,0x1E,0xFE,0xFC,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,
0x78,0x3C,0x1F,0x0F,0x07,0x01,
0x40,0x60,0x70,0x78,0x6C,0x66,0x63,0x61,0x61,0x60,
0x60,0x60,0x70,0x38,0x0C,0x00,

// three (51): w=15, h=23
0x4E,0x09,
0x00,0x00,0x00,0x00,0x08,0x04,0x02,0x02,0x03,0x03,
0x03,0x87,0xFF,0xFE,0x3C,
0x00,0x00,0x00,0x00,0x04,0x04,0x06,0x06,0x0E,0x3F,
0xFB,0xF1,0xE1,0x00,0x00,
0x1C,0x3C,0x38,0x70,0x60,0x60,0x60,0x20,0x30,0x1C,
0x0F,0x07,0x01,0x00,0x00,

// four (52): w=17, h=23
0x50,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,
0x60,0x30,0xD8,0xFC,0xFE,0x1F,0x03,
0x80,0xC0,0xE0,0xF0,0xD8,0xCC,0xC6,0xC3,0xC1,0xC0,
0xE0,0xFC,0xFF,0xDF,0xC1,0x40,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x61,0x7D,
0x7F,0x0F,0x01,0x01,0x01,0x00,0x00,

// five (53): w=16, h=23
0x4F,0x08,
0x00,0x00,0x00,0xE0,0xF8,0x9F,0x87,0x87,0x07,0x07,
0x07,0x07,0x07,0x07,0x03,0x01,
0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x07,0x07,0x0F,
0x1F,0xFE,0xF8,0xF0,0x00,0x00,
0x1C,0x3C,0x38,0x70,0x60,0x60,0x60,0x20,0x20,0x30,
0x18,0x0F,0x07,0x01,0x00,0x00,

// six (54): w=14, h=23
0x4D,0x0F,
0x00,0x00,0x00,0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0C,
0x06,0x02,0x01,0x01,
0xE0,0xFC,0xFF,0x1F,0x07,0x06,0x03,0x03,0x01,0x03,
0x07,0xFE,0xFE,0xF8,
0x07,0x1F,0x3F,0x30,0x60,0x60,0x60,0x60,0x30,0x38,
0x1E,0x0F,0x07,0x01,

// seven (55): w=15, h=23
0x4E,0x18,
0x08,0x06,0x07,0x07,0x07,0x07,0x07,0x07,0x87,0xC7,
0xF7,0x3F,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0xC0,0xF0,0x78,0x1E,0x07,0x01,
0x00,0x00,0x00,0x00,0x00,
0x60,0x78,0x1E,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// eight (56): w=15, h=23
0x4E,0x09,
0x00,0x00,0x00,0x78,0xFE,0xFE,0xC7,0x83,0x01,0x01,
0x01,0x03,0x86,0xFE,0x7C,
0x80,0xE0,0xF0,0x70,0x19,0x1B,0x0F,0x0F,0x1F,0x3E,
0xFA,0xF1,0xE1,0x80,0x00,
0x0F,0x3F,0x3F,0x70,0x60,0x40,0x40,0x40,0x60,0x60,
0x38,0x3F,0x1F,0x07,0x00,

// nine (57): w=14, h=23
0x4D,0x0F,
0xC0,0xF0,0xF8,0x3C,0x0E,0x06,0x03,0x03,0x03,0x03,
0x06,0xFE,0xFC,0xF0,
0x0F,0x3F,0x3F,0x70,0x60,0x40,0x60,0x60,0xB0,0xF0,
0xFC,0x7F,0x1F,0x03,
0x40,0x60,0x20,0x30,0x18,0x1C,0x0E,0x07,0x03,0x01,
0x00,0x00,0x00,0x00,

// colon (58): w=6, h=15
0xA5,0x08,0x77,
0x00,0x00,0x00,0x07,0x07,0x07,
0x70,0x70,0x70,0x00,0x00,0x00,

// semicolon (59): w=8, h=20
0xC7,0x08,0x57,
0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,
0x00,0x00,0x70,0xF0,0xF0,0x00,0x00,0x00,
0x08,0x0C,0x06,0x03,0x00,0x00,0x00,0x00,

// less (60): w=17, h=17
0x50,0xDD,
0x00,0x80,0x80,0xC0,0xC0,0xE0,0x60,0x70,0x30,0x38,
0x18,0x0C,0x0C,0x06,0x06,0x03,0x03,
0x01,0x03,0x03,0x07,0x06,0x0E,0x0C,0x1C,0x18,0x38,
0x30,0x60,0x60,0xC0,0xC0,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=17, h=9
0xB0,0x0A,0x78,
0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,
0x83,0x83,0x83,0x83,0x83,0x83,0x83,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// greater (62): w=17, h=17
0xD0,0x06,0x5A,
0x03,0x03,0x06,0x06,0x0C,0x0C,0x18,0x38,0x30,0x70,
0x60,0xE0,0xC0,0xC0,0x80,0x80,0x00,
0x80,0x80,0xC0,0xC0,0x60,0x60,0x30,0x38,0x18,0x1C,
0x0C,0x0E,0x06,0x07,0x03,0x03,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=11, h=23
0xCA,0x00,0x86,
0x00,0x0C,0x1E,0x0A,0x01,0x01,0x01,0x83,0xEF,0xFE,
0x3C,
0x00,0x00,0xC0,0xF0,0x3C,0x0E,0x07,0x03,0x01,0x00,
0x00,
0x70,0x70,0x71,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// at (64): w=26, h=27
0x79,0x37,
0x00,0x00,0x80,0xC0,0xE0,0x70,0x18,0x1C,0x0C,0x06,
0x06,0x03,0x83,0x83,0x81,0x83,0x03,0x83,0x83,0x06,
0x06,0x0E,0x1C,0x78,0xF0,0xC0,
0xF8,0xFE,0x7F,0x07,0x00,0x00,0x80,0xE0,0xF8,0x1C,
0x06,0x03,0x01,0x00,0x00,0xC1,0xFF,0xFF,0x0F,0x00,
0x00,0x00,0x00,0xC0,0xFF,0x3F,
0x03,0x1F,0x7F,0xF0,0xE0,0x80,0x07,0x1F,0x1F,0x3C,
0x38,0x38,0x18,0x0C,0x06,0x1F,0x3F,0x30,0x30,0x18,
0x18,0x0E,0x07,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x02,0x06,0x06,
0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x02,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=20, h=23
0xD3,0x00,0x27,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0x70,0x18,0xFE,0xFF,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x78,0x4C,0x47,
0x41,0x40,0x40,0x47,0xFF,0xFF,0xFC,0x00,0x00,0x00,
0x40,0x60,0x70,0x7C,0x4F,0x43,0x00,0x00,0x00,0x00,
0x00,0x00,0x40,0x40,0x63,0x7F,0x7F,0x7F,0x60,0x40,

// B (66): w=19, h=23
0x52,0x09,
0x00,0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0xFF,0x1F,
0x01,0x01,0x01,0x01,0x03,0x07,0xFE,0xFE,0xF8,
0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x09,0x08,
0x08,0x18,0x1C,0x3C,0xF6,0xF7,0xE3,0x81,0x00,
0x40,0x60,0x78,0x7F,0x7F,0x7F,0x41,0x40,0x40,0x40,
0x60,0x60,0x30,0x38,0x1F,0x1F,0x0F,0x03,0x00,

// C (67): w=21, h=23
0x54,0x13,
0x00,0x00,0xC0,0xE0,0xF0,0x78,0x1C,0x0C,0x06,0x06,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x06,0x7E,0x1E,
0x03,
0xFC,0xFF,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,
0x03,0x0F,0x1F,0x3E,0x38,0x70,0x60,0x60,0x60,0x60,
0x60,0x60,0x30,0x30,0x18,0x0C,0x04,0x02,0x00,0x00,
0x00,

// D (68): w=25, h=23
0x58,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0xFF,
0x3F,0x01,0x01,0x01,0x01,0x01,0x03,0x03,0x06,0x06,
0x1E,0xFC,0xFC,0xF0,0xC0,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xFA,0xFF,0x7F,0x1F,
0x40,0x40,0x60,0x7C,0x7F,0x7F,0x67,0x60,0x60,0x60,
0x60,0x60,0x60,0x20,0x30,0x30,0x18,0x18,0x0C,0x0F,
0x07,0x03,0x01,0x00,0x00,

// E (69): w=22, h=23
0x55,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xF1,0xFF,0xFF,
0x1F,0x03,0x01,0x01,0x01,0x01,0x01,0x81,0x01,0x03,
0x1F,0x07,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x09,
0x08,0x08,0x08,0x08,0x18,0xFC,0x1F,0x01,0x00,0x00,
0x00,0x00,
0x40,0x40,0x60,0x78,0x7F,0x7F,0x5F,0x40,0x40,0x40,
0x40,0x40,0x40,0x40,0x40,0x60,0x60,0x78,0x1C,0x00,
0x00,0x00,

// F (70): w=22, h=23
0x55,0x06,
0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xF1,0xFF,0xFF,
0x1F,0x03,0x01,0x01,0x01,0x01,0x01,0x81,0x01,0x03,
0x1F,0x07,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x09,
0x08,0x08,0x08,0x08,0x18,0xFC,0x1F,0x01,0x00,0x00,
0x00,0x00,
0x40,0x40,0x60,0x78,0x7F,0x7F,0x6F,0x40,0x40,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// G (71): w=22, h=23
0x55,0x14,
0x00,0x00,0xC0,0xE0,0xF0,0x78,0x1C,0x0C,0x06,0x06,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x06,0x7E,0x1E,
0x03,0x00,
0xFC,0xFF,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x10,0x10,0x10,0xB0,0xF0,0xF0,0xF0,0x30,
0x10,0x10,
0x03,0x0F,0x1F,0x3E,0x38,0x70,0x60,0x40,0x40,0x40,
0x40,0x40,0x60,0x70,0x3C,0x3F,0x3F,0x07,0x00,0x00,
0x00,0x00,

// H (72): w=26, h=23
0x59,0x06,
0x00,0x00,0x00,0x00,0x00,0x00,0xC1,0xF9,0xFF,0x7F,
0x0F,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0xC1,0xF9,
0xFF,0x7F,0x0F,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0xE0,0xFC,0xFF,0x7F,0x0F,0x08,
0x08,0x08,0x08,0x08,0x08,0x08,0xE8,0xFC,0xFF,0x7F,
0x07,0x00,0x00,0x00,0x00,0x00,
0x40,0x40,0x60,0x7C,0x7F,0x7F,0x47,0x40,0x00,0x00,
0x00,0x00,0x40,0x40,0x60,0x7C,0x7F,0x7F,0x47,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,

// I (73): w=13, h=23
0x4C,0x01,
0x00,0x00,0x00,0x00,0x00,0x81,0xF1,0xFF,0xFF,0x1F,
0x03,0x01,0x01,
0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x01,0x00,
0x00,0x00,0x00,
0x40,0x60,0x78,0x7F,0x7F,0x4F,0x40,0x00,0x00,0x00,
0x00,0x00,0x00,

// J (74): w=18, h=23
0x51,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0xC1,0xFF,0xFF,0xFF,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,
0xFF,0x7F,0x07,0x00,0x00,0x00,0x00,0x00,
0x18,0x3C,0x7C,0x78,0x60,0x40,0x70,0x3E,0x3F,0x0F,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// K (75): w=23, h=23
0x56,0x07,
0x00,0x00,0x00,0x00,0x00,0x81,0xF1,0xFF,0xFF,0x1F,
0x03,0x01,0x81,0xC0,0x60,0x31,0x19,0x0F,0x07,0x03,
0x03,0x01,0x01,
0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x0D,0x1E,
0x7E,0xFB,0xF1,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x40,0x40,0x78,0x7F,0x7F,0x5F,0x40,0x40,0x00,0x00,
0x00,0x01,0x03,0x4F,0x7F,0x7E,0x7C,0x70,0x60,0x40,
0x40,0x00,0x00,

// L (76): w=19, h=23
0x52,0x02,
0x00,0x00,0x00,0x00,0x00,0x81,0xF1,0xFF,0xFF,0x1F,
0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x60,0x78,0x7F,0x7F,0x7F,0x60,0x60,0x60,0x60,
0x60,0x60,0x60,0x60,0x60,0x70,0x78,0x1C,0x06,

// M (77): w=30, h=23
0x5D,0x06,
0x00,0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0x0F,0xFF,
0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0xE0,0x30,0x9C,0xFF,0xFF,0xFF,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x80,0xF8,0x7F,0x07,0x00,0x00,0x7F,
0xFF,0xFF,0x00,0x00,0xC0,0xE0,0x38,0x1E,0x07,0x01,
0xC0,0xFC,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x40,0x40,0x78,0x7F,0x47,0x40,0x40,0x00,0x00,0x00,
0x7F,0x3F,0x0E,0x07,0x01,0x00,0x40,0x40,0x60,0x7C,
0x7F,0x7F,0x67,0x40,0x40,0x00,0x00,0x00,0x00,0x00,

// N (78): w=25, h=23
0x58,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0xC1,0xFF,0x0F,0x7F,
0xFE,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,0x01,0x81,
0xFF,0x1F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xC0,0xFC,0x0F,0x00,0x00,0x00,
0x01,0x0F,0x3F,0xFE,0xF8,0xC0,0x00,0x80,0xF8,0x1F,
0x01,0x00,0x00,0x00,0x00,
0x40,0x40,0x60,0x7C,0x7F,0x40,0x40,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x07,0x3F,0x7E,0x7F,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,

// O (79): w=19, h=23
0x52,0x1C,
0x00,0x00,0x80,0xE0,0xF0,0x78,0x3C,0x0E,0x02,0x03,
0x01,0x01,0x01,0x03,0x03,0x0E,0xFE,0xFC,0xF0,
0xF8,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0x7F,0x0F,
0x07,0x1F,0x3F,0x38,0x60,0x60,0x40,0x40,0x60,0x20,
0x30,0x18,0x1E,0x0F,0x07,0x03,0x00,0x00,0x00,

// P (80): w=21, h=23
0x54,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xF1,0xFF,0xFF,
0x1F,0x03,0x01,0x01,0x01,0x03,0x03,0x0E,0xFE,0xFC,
0xF0,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x11,
0x10,0x10,0x10,0x18,0x18,0x0C,0x0C,0x07,0x07,0x03,
0x00,
0x40,0x40,0x60,0x78,0x7F,0x7F,0x6F,0x40,0x40,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// Q (81): w=20, h=29
0x73,0x16,
0x00,0x00,0x00,0x80,0xE0,0xF0,0x78,0x3C,0x0E,0x02,
0x03,0x01,0x01,0x01,0x03,0x03,0x06,0xFE,0xFC,0xF0,
0x00,0xF8,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0x7F,0x0F,
0x00,0x07,0x1F,0x3F,0x38,0xE0,0xE0,0x40,0x40,0x60,
0x20,0x30,0x18,0x1E,0x0F,0x07,0x03,0x00,0x00,0x00,
0x10,0x18,0x0C,0x0E,0x0F,0x05,0x06,0x0E,0x0E,0x0E,
0x1C,0x1C,0x18,0x18,0x18,0x18,0x08,0x0C,0x06,0x00,

// R (82): w=20, h=23
0x53,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xF1,0xFF,0xFF,
0x1F,0x03,0x01,0x01,0x03,0x03,0x07,0xFE,0xFE,0xF8,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x1F,0x19,
0x18,0x78,0xF8,0xF8,0x8C,0x0C,0x07,0x07,0x03,0x00,
0x40,0x40,0x60,0x78,0x7F,0x7F,0x6F,0x40,0x40,0x00,
0x00,0x00,0x01,0x0F,0x7F,0x7E,0x78,0x60,0x40,0x40,

// S (83): w=16, h=23
0x4F,0x13,
0x00,0x00,0x00,0xF0,0xFC,0xFE,0x87,0x03,0x01,0x01,
0x01,0x03,0x06,0x7E,0x1E,0x03,
0x00,0x00,0x00,0x00,0x03,0x07,0x0F,0x1F,0x3E,0xFC,
0xF8,0xE0,0xC0,0x00,0x00,0x00,
0x7F,0x38,0x60,0x60,0x40,0x40,0x40,0x60,0x60,0x38,
0x3F,0x1F,0x07,0x00,0x00,0x00,

// T (84): w=18, h=23
0xD1,0x00,0x72,
0x1F,0x07,0x03,0x01,0x01,0x01,0xC1,0xFF,0xFF,0xFF,
0x0F,0x01,0x01,0x01,0x01,0x03,0x1F,0x0F,
0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x40,0x60,0x7C,0x7F,0x7F,0x7F,0x40,0x40,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=23, h=23
0x56,0x18,
0x00,0x01,0x81,0xF3,0xFF,0xFF,0x1F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xF3,0x3F,
0x07,0x01,0x01,
0xC0,0xF8,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0x1F,0x01,0x00,
0x00,0x00,0x00,
0x07,0x1F,0x3F,0x38,0x70,0x60,0x60,0x60,0x60,0x60,
0x60,0x30,0x30,0x18,0x0E,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// V (86): w=21, h=23
0xD4,0x00,0x62,
0x01,0x03,0x3F,0xFF,0xFF,0xC3,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0xC0,0x71,0x39,0x0F,0x03,0x01,
0x01,
0x00,0x00,0x00,0x07,0xFF,0xFF,0xFC,0x00,0x00,0xC0,
0xE0,0x38,0x0E,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0x03,0x7F,0x3F,0x0E,0x07,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// W (87): w=31, h=23
0xDE,0x00,0x51,
0x01,0x01,0x03,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,
0x00,0x00,0x01,0xC1,0x7F,0xFF,0xFF,0x01,0x01,0x00,
0x00,0x00,0x00,0x80,0xE1,0x79,0x1F,0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0x03,0xFF,0xFF,0xFC,0x00,0x00,0xC0,
0x70,0x3C,0x0F,0x01,0x00,0xFF,0xFF,0xFE,0x00,0x80,
0xE0,0x38,0x0E,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x7F,0x3F,0x0E,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x3F,0x0F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// X (88): w=23, h=23
0x56,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x07,0x3F,0xFF,0xFF,
0xF3,0x81,0x00,0x00,0xC0,0xE0,0x71,0x19,0x0F,0x07,
0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x67,
0x3F,0xFF,0xFE,0xF3,0xC1,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x40,0x40,0x60,0x70,0x78,0x4E,0x47,0x03,0x00,0x00,
0x00,0x40,0x43,0x7F,0x7F,0x7E,0x70,0x60,0x40,0x40,
0x00,0x00,0x00,

// Y (89): w=20, h=23
0x53,0x0C,
0x00,0x01,0x01,0x0F,0xFF,0xFF,0xFF,0xC1,0x01,0x00,
0x00,0xC0,0xE0,0x31,0x1D,0x0F,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x87,0xFF,0xFF,0xFC,0x1E,
0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x40,0x40,0x60,0x78,0x7F,0x7F,0x47,0x40,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=20, h=23
0x53,0x07,
0x00,0x00,0x00,0x00,0x1E,0x07,0x03,0x03,0x03,0x03,
0x03,0x83,0xC3,0xF3,0xFB,0x7F,0x3F,0x0F,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xF0,0xF8,0x7C,
0x3F,0x0F,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x60,0x70,0x78,0x7C,0x7F,0x6F,0x67,0x63,0x60,0x60,
0x60,0x60,0x60,0x60,0x60,0x60,0x70,0x3C,0x00,0x00,

// bracketleft (91): w=12, h=29
0x6B,0x13,
0x00,0x00,0x00,0x00,0x00,0xF8,0xFF,0x3F,0x01,0x01,
0x01,0x01,
0x00,0x00,0x00,0xF0,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x00,0x00,
0x00,0xF0,0xFF,0x7F,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x1E,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00,0x00,0x00,
0x00,0x00,

// backslash (92): w=9, h=23
0x48,0x08,
0x03,0x1F,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x3E,0xF0,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x0F,0x7C,0x60,

// bracketright (93): w=12, h=29
0x6B,0x04,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x81,0xFD,
0xFF,0x1F,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0x3F,
0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x3F,0x03,0x00,
0x00,0x00,
0x10,0x10,0x10,0x18,0x1F,0x1F,0x07,0x00,0x00,0x00,
0x00,0x00,

// asciicircum (94): w=15, h=16
0x2E,0x02,
0x00,0x00,0x00,0xC0,0xF0,0x7C,0x1F,0x07,0x1F,0x7C,
0xF0,0xC0,0x00,0x00,0x00,
0xE0,0xF8,0x3F,0x0F,0x01,0x00,0x00,0x00,0x00,0x00,
0x01,0x0F,0x3F,0xF8,0xE0,

// underscore (95): w=16, h=2
0x8F,0x1A,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=6, h=6
0x85,0x00,0x95,
0x03,0x07,0x0E,0x0C,0x18,0x30,

// a (97): w=15, h=15
0xAE,0x08,0x55,
0x00,0xC0,0xE0,0xF8,0x3C,0x0C,0x06,0x03,0x03,0x01,
0x83,0xFE,0xFF,0x1F,0x00,
0x0F,0x3F,0x3F,0x60,0x40,0x40,0x60,0x30,0x18,0x0C,
0x3F,0x7F,0x61,0x30,0x08,

// b (98): w=15, h=23
0x4E,0x0E,
0x00,0x00,0x00,0x02,0xE2,0xFE,0x7F,0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xF0,0xFF,0x7F,0x1D,0x0C,0x06,0x02,0x03,
0x03,0x07,0xFF,0xFE,0x7C,
0x38,0x7F,0x7F,0x63,0x40,0x40,0x60,0x60,0x30,0x18,
0x1C,0x0F,0x07,0x01,0x00,

// c (99): w=13, h=15
0xAC,0x08,0x65,
0x00,0xC0,0xF0,0x78,0x0C,0x06,0x02,0x01,0x01,0x01,
0x0F,0x1E,0x0C,
0x1F,0x3F,0x7F,0x60,0x40,0x40,0x60,0x20,0x30,0x10,
0x08,0x00,0x00,

// d (100): w=16, h=23
0x4F,0x0D,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0x82,0xFE,0xFF,0x0F,
0x00,0xC0,0xE0,0xF8,0x3C,0x0C,0x06,0x03,0x01,0x01,
0x83,0xFE,0xFF,0x1F,0x00,0x00,
0x0F,0x3F,0x3F,0x60,0x40,0x40,0x60,0x30,0x18,0x0C,
0x3F,0x7F,0x61,0x30,0x08,0x00,

// e (101): w=13, h=15
0xAC,0x08,0x65,
0x00,0xC0,0xF0,0xF8,0x0C,0x86,0x82,0xC1,0x61,0x73,
0x3F,0x1E,0x0C,
0x1F,0x3F,0x7F,0x61,0x41,0x41,0x60,0x20,0x30,0x10,
0x08,0x00,0x00,

// f (102): w=19, h=30
0xF2,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xE0,0xF8,0x3C,0x0E,0x03,0x01,0x0F,0x0F,0x06,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xF1,0xFF,
0x7F,0x03,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFF,0x7F,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x18,0x3C,0x3C,0x20,0x38,0x1E,0x0F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// g (103): w=16, h=22
0xCF,0x08,0x45,
0x00,0x00,0x00,0x70,0xFC,0xFE,0x06,0x03,0x01,0x01,
0xC3,0xFF,0xFE,0x3E,0x06,0x06,
0x00,0x80,0xC0,0x58,0x7D,0x77,0x73,0xF2,0xE2,0xE3,
0xC1,0x81,0x00,0x00,0x00,0x00,
0x07,0x1F,0x18,0x30,0x30,0x20,0x20,0x20,0x30,0x11,
0x1F,0x07,0x00,0x00,0x00,0x00,

// h (104): w=15, h=23
0x4E,0x0E,
0x00,0x00,0x00,0x02,0xE2,0xFE,0xFF,0x1F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xF0,0xFE,0xFF,0x17,0x09,0x04,0x06,0x03,
0x83,0xFF,0xFF,0x7E,0x00,
0x70,0x7F,0x7F,0x0F,0x00,0x00,0x00,0x00,0x00,0x38,
0x7F,0x7F,0x67,0x30,0x08,

// i (105): w=7, h=23
0x46,0x14,
0x00,0x00,0x00,0x00,0x07,0x07,0x07,
0x00,0x82,0xF2,0xFE,0x3F,0x07,0x00,
0x38,0x7F,0x7F,0x63,0x30,0x08,0x00,

// j (106): w=14, h=30
0xED,0x00,0x04,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xE2,
0xFF,0x7F,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,
0x07,0x00,0x00,0x00,
0x18,0x3C,0x3C,0x20,0x30,0x18,0x1E,0x0F,0x03,0x00,
0x00,0x00,0x00,0x00,

// k (107): w=15, h=23
0x4E,0x0D,
0x00,0x00,0x00,0x02,0xF2,0xFE,0x3F,0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xF8,0xFF,0xFF,0x83,0xC0,0xE0,0x30,0x19,
0x0D,0x07,0x03,0x01,0x01,
0x70,0x7F,0x7F,0x07,0x01,0x01,0x07,0x1F,0x3E,0x7C,
0x70,0x60,0x30,0x08,0x00,

// l (108): w=8, h=23
0x47,0x13,
0x00,0x00,0x00,0x02,0xF2,0xFE,0x3F,0x07,
0x00,0x80,0xF8,0xFF,0x3F,0x03,0x00,0x00,
0x38,0x7F,0x7F,0x61,0x30,0x08,0x00,0x00,

// m (109): w=23, h=15
0xB6,0x08,0x55,
0x00,0x02,0xF2,0xFE,0xFF,0x17,0x08,0x04,0x06,0x03,
0xC3,0xFF,0xFF,0x1E,0x08,0x04,0x06,0x02,0xE3,0xFF,
0xFF,0x1E,0x00,
0x70,0x7F,0x7F,0x0F,0x00,0x00,0x00,0x00,0x60,0x7C,
0x7F,0x1F,0x01,0x00,0x00,0x00,0x00,0x3C,0x7F,0x7F,
0x63,0x30,0x08,

// n (110): w=15, h=15
0xAE,0x08,0x55,
0x00,0x02,0xF2,0xFE,0xFF,0x17,0x08,0x04,0x02,0x03,
0xC3,0xFF,0xFF,0x3E,0x00,
0x70,0x7F,0x7F,0x07,0x00,0x00,0x00,0x00,0x00,0x3C,
0x7F,0x7F,0x63,0x30,0x08,

// o (111): w=15, h=15
0xAE,0x08,0x56,
0x00,0xC0,0xE0,0xF8,0x3C,0x0C,0x06,0x03,0x03,0x01,
0x01,0x83,0xFE,0xFE,0x78,
0x0F,0x3F,0x3F,0x60,0x40,0x40,0x60,0x60,0x30,0x18,
0x1E,0x0F,0x03,0x01,0x00,

// p (112): w=19, h=22
0xD2,0x08,0x25,
0x00,0x00,0x00,0x00,0x02,0x02,0xFE,0xFF,0x7F,0x18,
0x0C,0x06,0x02,0x03,0x03,0x07,0xFF,0xFE,0x7C,
0x00,0x00,0x00,0x80,0xF8,0xFF,0x7F,0x63,0x40,0x40,
0x60,0x60,0x30,0x18,0x1C,0x0F,0x07,0x01,0x00,
0x20,0x20,0x38,0x3F,0x3F,0x21,0x20,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=14, h=22
0xCD,0x08,0x66,
0x00,0xC0,0xF0,0x78,0x1C,0x0E,0x06,0x03,0x01,0x01,
0x83,0xFE,0xFF,0x1F,
0x0F,0x3F,0x3F,0x70,0x60,0x60,0x20,0x10,0xF8,0xFC,
0xFF,0x0F,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x38,0x3F,0x3F,
0x21,0x20,0x00,0x00,

// r (114): w=12, h=15
0xAB,0x08,0x64,
0x00,0x02,0xE2,0xFE,0xFF,0x33,0x18,0x0C,0x06,0x07,
0x0F,0x0E,
0x60,0x7E,0x7F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// s (115): w=12, h=15
0xAB,0x08,0x55,
0x00,0x00,0x00,0x3C,0x7E,0xFF,0xE3,0x81,0x01,0x03,
0x06,0x1F,
0x7C,0x30,0x60,0x40,0x40,0x41,0x63,0x7F,0x3F,0x1C,
0x00,0x00,

// t (116): w=8, h=19
0x47,0x93,
0x00,0x10,0x90,0xF8,0xFC,0x3F,0x10,0x10,
0x80,0xF8,0xFF,0x1F,0x03,0x80,0x00,0x00,
0x03,0x07,0x07,0x06,0x03,0x00,0x00,0x00,

// u (117): w=15, h=15
0xAE,0x08,0x56,
0x02,0x02,0xFA,0xFF,0xFF,0x07,0x00,0x00,0x00,0x00,
0xF0,0xFF,0xFF,0x0F,0x00,
0x00,0x3F,0x7F,0x7F,0x60,0x60,0x20,0x30,0x18,0x0E,
0x3F,0x7F,0x61,0x20,0x10,

// v (118): w=14, h=15
0xAD,0x08,0x46,
0x02,0x02,0x06,0x07,0x7F,0xFF,0xF0,0x00,0x00,0x00,
0x83,0xE7,0x7F,0x1E,
0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x38,0x1C,0x0F,
0x07,0x01,0x00,0x00,

// w (119): w=21, h=15
0xB4,0x08,0x46,
0x02,0x02,0x06,0x1F,0xFF,0xFE,0x00,0x00,0xC0,0xE0,
0x38,0x1E,0xFF,0xFF,0x00,0x00,0x00,0x83,0xF7,0x7F,
0x1E,
0x00,0x00,0x00,0x00,0x7F,0x3F,0x0C,0x07,0x01,0x00,
0x00,0x00,0x7F,0x7F,0x38,0x1C,0x0F,0x03,0x01,0x00,
0x00,

// x (120): w=16, h=15
0xAF,0x08,0x35,
0x00,0x00,0x02,0x02,0x06,0x0F,0x3F,0xFC,0xE0,0xF0,
0x38,0x0C,0x06,0x03,0x03,0x03,
0x60,0x60,0x60,0x30,0x18,0x0C,0x07,0x03,0x0F,0x3F,
0x7E,0x78,0x60,0x30,0x08,0x00,

// y (121): w=16, h=22
0xCF,0x08,0x35,
0x00,0x00,0x02,0x02,0x06,0x07,0x7F,0xFF,0xF0,0x00,
0x00,0x00,0x80,0xE3,0x7F,0x1F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x78,
0x3C,0x0F,0x07,0x01,0x00,0x00,
0x10,0x38,0x38,0x30,0x18,0x1C,0x0E,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=14, h=15
0xAD,0x08,0x35,
0x00,0x00,0x08,0x0E,0x07,0x03,0x83,0xC3,0x73,0x3B,
0x1F,0x0F,0x07,0x03,
0x60,0x70,0x78,0x7C,0x6E,0x67,0x63,0x60,0x60,0x70,
0x38,0x08,0x00,0x00,

// braceleft (123): w=11, h=29
0x6A,0x14,
0x00,0x00,0x00,0x00,0x80,0xF8,0x7E,0x07,0x03,0x03,
0x03,
0x60,0xE0,0xB0,0x38,0x1F,0x07,0x00,0x00,0x00,0x00,
0x00,
0x00,0xE0,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,
0x00,0x07,0x1F,0x18,0x10,0x10,0x00,0x00,0x00,0x00,
0x00,

// bar (124): w=9, h=29
0x68,0x08,
0x00,0x00,0x00,0x00,0x00,0x80,0xF0,0x1F,0x03,
0x00,0x00,0x00,0xC0,0xF8,0x0F,0x01,0x00,0x00,
0x00,0xE0,0x7C,0x07,0x00,0x00,0x00,0x00,0x00,
0x1E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// braceright (125): w=11, h=29
0x6A,0x05,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0xFF,0xFC,
0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9F,0xBF,0xE0,
0xC0,
0x00,0x00,0x00,0x00,0xC0,0xFC,0x3F,0x03,0x01,0x00,
0x00,
0x18,0x18,0x18,0x1C,0x0F,0x03,0x00,0x00,0x00,0x00,
0x00,

// asciitilde (126): w=16, h=4
0x8F,0x0D,0x56,
0x0C,0x0E,0x06,0x03,0x03,0x03,0x03,0x06,0x0E,0x0C,
0x0C,0x0C,0x0C,0x06,0x07,0x03

};
// 4436 bytes
// 4626 bytes with FAST_FONT_INDEX
