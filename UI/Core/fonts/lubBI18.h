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

const char font_lubBI18[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xDB,0x00,
0xE7,0x00,
0x19,0x01,
0x45,0x01,
0x83,0x01,
0xC1,0x01,
0xC8,0x01,
0xE6,0x01,
0x03,0x02,
0x19,0x02,
0x39,0x02,
0x48,0x02,
0x51,0x02,
0x59,0x02,
0x8F,0x02,
0xBE,0x02,
0xDE,0x02,
0x0D,0x03,
0x39,0x03,
0x65,0x03,
0x94,0x03,
0xC3,0x03,
0xF0,0x03,
0x1F,0x04,
0x4E,0x04,
0x5C,0x04,
0x73,0x04,
0x95,0x04,
0xA8,0x04,
0xCA,0x04,
0xED,0x04,
0x28,0x05,
0x63,0x05,
0x95,0x05,
0xCA,0x05,
0x08,0x06,
0x3D,0x06,
0x73,0x06,
0xA8,0x06,
0xF0,0x06,
0x14,0x07,
0x44,0x07,
0x7F,0x07,
0xAE,0x07,
0xFC,0x07,
0x41,0x08,
0x7C,0x08,
0xB1,0x08,
0xF3,0x08,
0x28,0x09,
0x57,0x09,
0x90,0x09,
0xCC,0x09,
0x08,0x0A,
0x50,0x0A,
0x8F,0x0A,
0xC5,0x0A,
0xFA,0x0A,
0x1B,0x0B,
0x36,0x0B,
0x56,0x0B,
0x74,0x0B,
0x82,0x0B,
0x8A,0x0B,
0xAA,0x0B,
0xD9,0x0B,
0xF5,0x0B,
0x27,0x0C,
0x41,0x0C,
0x6E,0x0C,
0x9D,0x0C,
0xC9,0x0C,
0xE0,0x0C,
0x0D,0x0D,
0x39,0x0D,
0x50,0x0D,
0x7E,0x0D,
0x9C,0x0D,
0xBA,0x0D,
0xEC,0x0D,
0x1B,0x0E,
0x38,0x0E,
0x52,0x0E,
0x6F,0x0E,
0x8D,0x0E,
0xAD,0x0E,
0xD7,0x0E,
0xF3,0x0E,
0x28,0x0F,
0x46,0x0F,
0x63,0x0F,
0x77,0x0F,
0x94,0x0F,

// space (32): w=1, h=1
0x80,0x11,0x4C,
0x00,

// exclam (33): w=7, h=18
0x46,0x0C,
0x00,0x00,0x80,0xFF,0xFF,0x3F,0x03,
0x80,0x80,0x9F,0x9F,0x03,0x00,0x00,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,

// quotedbl (34): w=9, h=7
0x88,0x00,0x83,
0x07,0x7F,0x3F,0x01,0x00,0x01,0x3F,0x7F,0x07,

// numbersign (35): w=16, h=18
0x4F,0x12,
0x00,0x40,0x40,0x40,0x40,0x40,0xC0,0x70,0x5E,0x47,
0x41,0xC0,0x70,0x5C,0x47,0x41,
0x10,0x90,0xD0,0x70,0x1C,0x17,0x11,0xD0,0x70,0x1C,
0x1F,0x11,0x10,0x10,0x10,0x00,
0x02,0x03,0x01,0x00,0x00,0x02,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=14, h=21
0x4D,0x19,
0x00,0x00,0x00,0x7C,0xFE,0xFF,0xC3,0xE1,0x3F,0x01,
0x01,0x03,0x0F,0x07,
0x80,0xC0,0x00,0x00,0x00,0xC1,0x7F,0x07,0x8F,0xFF,
0xFE,0x7C,0x00,0x00,
0x03,0x03,0x03,0x02,0x7A,0x7F,0x02,0x03,0x03,0x01,
0x00,0x00,0x00,0x00,

// percent (37): w=20, h=18
0x53,0x0C,
0x20,0xFC,0xFE,0x0E,0x03,0x81,0xC1,0xFF,0x7E,0x1C,
0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x07,0x03,0x01,
0x00,0x00,0x01,0x81,0xE1,0x71,0x39,0x1C,0x0E,0x07,
0x03,0xF1,0xFC,0x3C,0x06,0x02,0x82,0xFE,0xFC,0x78,
0x02,0x02,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0x03,0x02,0x02,0x03,0x01,0x00,0x00,

// ampersand (38): w=20, h=18
0x53,0x0C,
0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0xFE,0xC3,
0xC1,0x41,0x73,0x3F,0x3E,0x0C,0x00,0x00,0x00,0x00,
0x78,0xFC,0xFE,0xFF,0x03,0x01,0x00,0x07,0x1F,0x3F,
0xFE,0xF8,0xE0,0xC0,0xE1,0x3F,0x1F,0x07,0x01,0x01,
0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,0x02,0x02,
0x01,0x01,0x03,0x03,0x03,0x03,0x02,0x02,0x00,0x00,

// quotesingle (39): w=4, h=7
0x83,0x00,0x83,
0x07,0x7F,0x7F,0x03,

// parenleft (40): w=9, h=23
0xC8,0x00,0x62,
0x00,0x00,0xC0,0xE0,0xF8,0x3C,0x0C,0x02,0x01,
0xFC,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x03,0x0F,0x1F,0x78,0x40,0x00,0x00,0x00,0x00,

// parenright (41): w=9, h=23
0x48,0x07,
0x00,0x00,0x00,0x00,0x00,0x07,0xFC,0xF8,0xE0,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0x7F,0x1F,
0x40,0x20,0x18,0x1E,0x0F,0x03,0x01,0x00,0x00,

// asterisk (42): w=10, h=9
0x29,0x18,
0x88,0x9C,0xD8,0x78,0x01,0xEF,0xDB,0x98,0x1C,0x0C,
0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// plus (43): w=15, h=15
0x2E,0x73,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xF8,0xFF,0x83,
0x80,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x60,0x7F,0x0F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// comma (44): w=6, h=9
0xA5,0x0E,0x46,
0x80,0x8E,0xFF,0xFF,0x3F,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,

// hyphen (45): w=6, h=1
0x85,0x09,0x64,
0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=5, h=4
0x84,0x0E,0x56,
0x0C,0x0F,0x0F,0x0F,0x03,

// slash (47): w=17, h=22
0xD0,0x00,0x41,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xC0,0x30,0x18,0x06,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x0C,0x02,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x20,0x30,0x18,0x04,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=15, h=18
0x4E,0x13,
0x00,0xC0,0xF0,0xF8,0x7C,0x0E,0x02,0x01,0x01,0x01,
0x03,0xFF,0xFE,0xFC,0xE0,
0x7F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x80,0xE0,
0xFC,0x7F,0x3F,0x0F,0x00,
0x00,0x00,0x01,0x03,0x03,0x02,0x02,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// one (49): w=10, h=18
0x49,0x1D,
0x00,0x00,0x00,0x01,0x01,0xE1,0xFF,0xFF,0xFF,0x07,
0x00,0x00,0x00,0x80,0xFC,0xFF,0xFF,0x1F,0x00,0x00,
0x02,0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x02,

// two (50): w=15, h=18
0x4E,0x13,
0x00,0x00,0x00,0x0C,0x0E,0x02,0x01,0x01,0x01,0x01,
0xC3,0xFF,0xFE,0x7E,0x3C,
0x00,0xC0,0xE0,0xF0,0x90,0x88,0x84,0x82,0x82,0x81,
0x81,0x80,0x80,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x00,0x00,0x00,

// three (51): w=14, h=18
0x4D,0x19,
0x00,0x00,0x00,0x08,0x0F,0x03,0x01,0x01,0x81,0xC3,
0xFF,0x7F,0x3E,0x1C,
0x80,0xC0,0x00,0x01,0x01,0x01,0x01,0x03,0x83,0xFF,
0xFE,0xFC,0x38,0x00,
0x01,0x03,0x03,0x02,0x02,0x02,0x02,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,

// four (52): w=14, h=18
0x4D,0x14,
0x00,0x00,0x00,0x00,0x80,0x40,0x20,0x10,0x08,0xC4,
0xFE,0xFF,0x3F,0x01,
0x18,0x1C,0x1E,0x1D,0x1C,0x1C,0x1C,0x1C,0xFC,0xFF,
0xFF,0x1F,0x1C,0x1C,
0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x03,0x03,0x03,
0x03,0x02,0x02,0x00,

// five (53): w=15, h=18
0x4E,0x18,
0x00,0x00,0x80,0xF8,0x9F,0x87,0x87,0x87,0x07,0x07,
0x07,0x07,0x07,0x07,0x01,
0x80,0xC0,0x00,0x00,0x00,0x00,0x01,0x01,0xC7,0xFF,
0xFE,0x7E,0x10,0x00,0x00,
0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// six (54): w=15, h=18
0x4E,0x18,
0x00,0xC0,0xF0,0xF8,0x7C,0x1E,0x86,0x83,0x81,0x81,
0x81,0x01,0x13,0x1F,0x02,
0x3F,0xFF,0xFF,0xFF,0x03,0x01,0x00,0x00,0x00,0xC1,
0xFF,0xFF,0x3F,0x00,0x00,
0x00,0x00,0x01,0x03,0x03,0x02,0x02,0x02,0x03,0x01,
0x01,0x00,0x00,0x00,0x00,

// seven (55): w=14, h=18
0xCD,0x00,0x83,
0x00,0x06,0x07,0x07,0x07,0x07,0x07,0x87,0xC7,0x67,
0x37,0x1F,0x0F,0x03,
0x00,0xC0,0xF0,0xF8,0x7C,0x1E,0x07,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// eight (56): w=15, h=18
0x4E,0x13,
0x00,0x00,0x00,0x78,0xFC,0xFE,0xE6,0xC3,0x81,0x81,
0xC1,0x7F,0x7F,0x3E,0x1C,
0xF0,0xF8,0xFC,0xFE,0x06,0x01,0x01,0x03,0x07,0x0F,
0xFF,0xFE,0x7E,0x38,0x00,
0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,0x02,0x01,
0x01,0x00,0x00,0x00,0x00,

// nine (57): w=15, h=18
0x4E,0x13,
0x00,0xE0,0xF8,0xFC,0xFE,0x0E,0x03,0x01,0x01,0x01,
0x03,0xFE,0xFE,0xFC,0xF0,
0xC0,0xE0,0x03,0x03,0x07,0x06,0x04,0x04,0x84,0xE2,
0xFF,0x7F,0x3F,0x0F,0x01,
0x01,0x03,0x03,0x02,0x02,0x02,0x02,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,

// colon (58): w=6, h=13
0x25,0xAD,
0x00,0x00,0x0F,0x0F,0x0F,0x07,
0x1C,0x1E,0x1E,0x1E,0x00,0x00,

// semicolon (59): w=7, h=18
0x46,0xAC,
0x00,0x00,0x00,0x0F,0x0F,0x0F,0x07,
0x00,0x18,0xF8,0xF8,0x38,0x00,0x00,
0x02,0x03,0x01,0x01,0x00,0x00,0x00,

// less (60): w=16, h=15
0x2F,0x72,
0x80,0x80,0xC0,0xC0,0x40,0x60,0x20,0x30,0x10,0x18,
0x08,0x0C,0x04,0x06,0x06,0x03,
0x00,0x00,0x01,0x01,0x03,0x07,0x06,0x0E,0x0C,0x18,
0x18,0x30,0x70,0x20,0x00,0x00,

// equal (61): w=16, h=6
0x8F,0x08,0x54,
0x20,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,
0x21,0x21,0x21,0x21,0x21,0x01,

// greater (62): w=16, h=15
0x2F,0x6D,
0x00,0x00,0x00,0x07,0x06,0x0C,0x0C,0x18,0x38,0x30,
0x70,0x60,0xC0,0xC0,0x80,0x80,
0x60,0x20,0x30,0x10,0x18,0x08,0x0C,0x04,0x06,0x02,
0x03,0x01,0x01,0x01,0x00,0x00,

// question (63): w=11, h=18
0x4A,0x18,
0x08,0x0E,0x03,0x01,0x01,0x01,0x83,0xFF,0x7F,0x3E,
0x1C,
0x80,0x90,0x9C,0x9E,0x1E,0x03,0x01,0x00,0x00,0x00,
0x00,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// at (64): w=19, h=18
0x52,0x1A,
0x00,0xC0,0x30,0x18,0x0C,0x84,0xC2,0x62,0x11,0x11,
0x11,0x31,0xE1,0xE1,0x03,0x02,0x06,0x0C,0xF0,
0x1F,0x60,0x80,0x00,0x1E,0x3F,0x31,0x20,0x10,0x18,
0x0E,0x3F,0x3F,0x21,0x20,0x20,0x10,0x0C,0x07,
0x00,0x00,0x00,0x01,0x01,0x02,0x02,0x02,0x02,0x02,
0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=19, h=18
0x52,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x70,
0x18,0x3E,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0x70,0x18,0x1E,0x13,0x10,0x10,
0x10,0x10,0x17,0x7F,0xFF,0xFF,0xF0,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x02,

// B (66): w=16, h=18
0x4F,0x0D,
0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0x3F,0x01,0x01,
0x81,0xC1,0xFF,0xFF,0x7E,0x1E,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0x07,0x01,0x01,0x01,
0x83,0xFF,0xFE,0xFC,0x78,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x03,
0x03,0x03,0x01,0x00,0x00,0x00,

// C (67): w=17, h=18
0x50,0x18,
0x00,0xC0,0xE0,0xF8,0xFC,0x1C,0x0E,0x02,0x03,0x01,
0x01,0x01,0x01,0x03,0x13,0x1F,0x06,
0x3F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x02,0x02,0x02,
0x02,0x02,0x01,0x01,0x00,0x00,0x00,

// D (68): w=20, h=18
0x53,0x0E,
0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,0x07,0x01,
0x01,0x01,0x01,0x03,0x03,0x07,0xFE,0xFE,0xFC,0xF0,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0x3F,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0xE0,0xF8,0x7F,0x3F,0x0F,0x03,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x02,
0x02,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// E (69): w=17, h=18
0x50,0x0C,
0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,0x1F,0x01,
0x01,0x01,0x81,0x81,0x01,0x07,0x03,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0x3F,0x01,0x01,0x01,
0x01,0x01,0x03,0x80,0x80,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x02,
0x02,0x02,0x03,0x03,0x00,0x00,0x00,

// F (70): w=17, h=18
0xD0,0x00,0x52,
0x00,0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0x0F,0x01,
0x01,0x01,0x81,0x81,0x05,0x07,0x03,
0x00,0x00,0x80,0xF8,0xFF,0xFF,0x3F,0x01,0x01,0x01,
0x01,0x01,0x03,0x00,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=17, h=18
0x50,0x19,
0x00,0xC0,0xE0,0xF8,0xFC,0x1C,0x0E,0x06,0x03,0x01,
0x01,0x01,0x01,0x01,0x0B,0x0F,0x07,
0x3F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,
0x04,0xFC,0xFC,0xFC,0x1C,0x04,0x04,
0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,0x02,
0x03,0x03,0x01,0x01,0x00,0x00,0x00,

// H (72): w=23, h=18
0xD6,0x00,0x52,
0x00,0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0x1F,0x03,
0x01,0x01,0x00,0x00,0x00,0x01,0xF9,0xFF,0xFF,0x7F,
0x07,0x01,0x01,
0x00,0x00,0x80,0xF8,0xFF,0xFF,0x7F,0x03,0x01,0x01,
0x01,0x01,0x01,0x01,0xE1,0xFF,0xFF,0xFF,0x0F,0x00,
0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x00,0x00,
0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,
0x00,0x00,0x00,

// I (73): w=11, h=18
0xCA,0x00,0x52,
0x00,0x00,0x00,0x01,0xF1,0xFF,0xFF,0xFF,0x07,0x01,
0x01,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x00,
0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x00,0x00,
0x00,

// J (74): w=15, h=22
0xCE,0x00,0x42,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,
0xFF,0xFF,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFC,0xFF,0xFF,
0x3F,0x00,0x00,0x00,0x00,
0x38,0x3C,0x24,0x20,0x20,0x38,0x1F,0x0F,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,

// K (75): w=19, h=18
0x52,0x0D,
0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0x7F,0x83,0xC1,
0x41,0x20,0x10,0x18,0x0D,0x07,0x03,0x01,0x01,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0x0F,0x03,0x0F,0x1F,
0x7F,0xFC,0xF8,0xF0,0xC0,0x80,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x00,

// L (76): w=15, h=18
0x4E,0x0D,
0x00,0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0x1F,0x03,
0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x80,0xF8,0xFF,0xFF,0x7F,0x03,0x00,0x00,
0x00,0x00,0x00,0xC0,0xC0,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x02,
0x02,0x02,0x03,0x03,0x00,

// M (77): w=25, h=18
0xD8,0x00,0x52,
0x00,0x00,0x00,0x01,0xE1,0xFF,0x0F,0x7F,0xFF,0xF8,
0x80,0x00,0x00,0x00,0x00,0xC0,0x60,0x18,0xEC,0xFF,
0xFF,0xFF,0x07,0x01,0x01,
0x00,0x00,0x80,0xFC,0x3F,0x01,0x00,0x00,0x07,0x7F,
0xFF,0x78,0x18,0x0C,0x03,0x01,0x80,0xF8,0xFF,0xFF,
0x1F,0x00,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x02,0x02,0x03,0x03,0x03,0x03,
0x02,0x02,0x00,0x00,0x00,

// N (78): w=22, h=18
0xD5,0x00,0x52,
0x00,0x00,0x00,0x01,0xE1,0xFF,0x1F,0x3F,0xFF,0xFC,
0xF0,0xC0,0x00,0x00,0x00,0x00,0x01,0xF9,0xFF,0x07,
0x01,0x01,
0x00,0x00,0x80,0xFC,0x7F,0x03,0x00,0x00,0x00,0x03,
0x07,0x1F,0x7F,0xFC,0xF0,0xE0,0xFF,0x0F,0x00,0x00,
0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,

// O (79): w=19, h=18
0x52,0x19,
0x00,0xC0,0xE0,0xF8,0xF8,0x1C,0x0E,0x06,0x03,0x01,
0x01,0x01,0x01,0x03,0x07,0xFE,0xFE,0xFC,0xF0,
0x3F,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xE0,0x7C,0x3F,0x1F,0x0F,0x03,
0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,0x02,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// P (80): w=17, h=18
0x50,0x0C,
0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,0x0F,0x01,
0x01,0x01,0x83,0xFF,0xFF,0xFE,0x3C,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0x3F,0x05,0x04,0x04,
0x06,0x06,0x03,0x03,0x01,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=21, h=23
0xD4,0x00,0x72,
0x00,0xC0,0xE0,0xF8,0xF8,0x1C,0x0E,0x06,0x03,0x01,
0x01,0x01,0x01,0x03,0x07,0xFE,0xFC,0xF8,0xF0,0x00,
0x00,
0x3F,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xE0,0xFC,0xFF,0x7F,0x1F,0x07,0x00,
0x00,
0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,0x06,
0x0F,0x17,0x27,0x23,0x21,0x40,0x40,0x40,0x40,0x40,
0x40,

// R (82): w=17, h=18
0x50,0x0E,
0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,0x07,0x01,
0x01,0x01,0x83,0xFF,0xFF,0x7E,0x3E,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0x1F,0x03,0x02,0x0E,
0x3E,0xFF,0xFF,0xF1,0xC0,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x00,0x00,0x00,
0x00,0x00,0x03,0x03,0x03,0x03,0x02,

// S (83): w=15, h=18
0x4E,0x12,
0x00,0x00,0x00,0xF8,0xFC,0xFE,0xE6,0xC3,0x81,0x01,
0x01,0x01,0x0B,0x0F,0x06,
0x80,0xC0,0x40,0x00,0x01,0x01,0x03,0x07,0x0F,0xFF,
0xFF,0xFE,0x7C,0x00,0x00,
0x01,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x03,0x01,
0x01,0x00,0x00,0x00,0x00,

// T (84): w=18, h=18
0xD1,0x00,0x72,
0x0E,0x0F,0x03,0x01,0x01,0x01,0xF1,0xFF,0xFF,0xFF,
0x0F,0x01,0x01,0x01,0x01,0x09,0x0F,0x03,
0x00,0x00,0x00,0x00,0x80,0xFC,0xFF,0xFF,0x3F,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=19, h=18
0xD2,0x00,0x81,
0x01,0xE1,0xFF,0xFF,0xFF,0x07,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x01,0xFF,0x0F,0x03,0x01,0x01,
0x7E,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x60,0x1F,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x03,0x03,0x02,0x02,0x02,0x02,0x02,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// V (86): w=19, h=18
0xD2,0x00,0x72,
0x01,0x03,0x3F,0xFF,0xFF,0xFF,0xC1,0x00,0x00,0x00,
0x00,0x00,0x80,0x60,0x31,0x0D,0x07,0x01,0x01,
0x00,0x00,0x00,0x07,0x7F,0xFF,0xFF,0xF8,0x60,0x30,
0x0C,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=23, h=18
0xD6,0x00,0x72,
0x01,0x0F,0xFF,0xFF,0xFF,0x01,0x00,0x00,0xC0,0x70,
0xFC,0xFF,0xFF,0xE0,0x00,0x00,0x00,0xC0,0x71,0x1D,
0x07,0x03,0x01,
0x00,0x00,0xFF,0xFF,0xFF,0x70,0x1C,0x07,0x01,0x00,
0x00,0xFF,0xFF,0xFF,0x70,0x1C,0x07,0x01,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// X (88): w=20, h=18
0xD3,0x00,0x42,
0x00,0x00,0x00,0x00,0x01,0x03,0x0F,0x3F,0xFF,0xFF,
0xF1,0x80,0xC0,0x60,0x30,0x0D,0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0x80,0xC0,0x20,0x18,0x0C,0x07,0x07,
0x1F,0xFF,0xFE,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x00,0x00,0x00,

// Y (89): w=17, h=18
0xD0,0x00,0x72,
0x01,0x03,0x0F,0x7F,0xFF,0xFF,0xE1,0x80,0x00,0x80,
0xE0,0x30,0x19,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xF9,0xFF,0xFF,0x7F,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=17, h=18
0x50,0x12,
0x00,0x00,0x00,0x00,0x07,0x03,0x01,0x81,0xC1,0xE1,
0xF1,0xFD,0x7F,0x1F,0x0F,0x07,0x01,
0x00,0x80,0xC0,0xE0,0xF8,0xFC,0x3E,0x1F,0x0F,0x03,
0x01,0x00,0x80,0x80,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,
0x02,0x02,0x03,0x03,0x00,0x00,0x00,

// bracketleft (91): w=10, h=22
0xC9,0x00,0x52,
0x00,0x00,0x00,0xE0,0xFF,0xFF,0x1F,0x01,0x01,0x01,
0x00,0x80,0xFC,0xFF,0x7F,0x03,0x00,0x00,0x00,0x00,
0x30,0x3F,0x3F,0x2F,0x20,0x20,0x00,0x00,0x00,0x00,

// backslash (92): w=8, h=22
0xC7,0x00,0x86,
0x01,0x0F,0x70,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x78,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x3C,0x20,

// bracketright (93): w=10, h=22
0x49,0x06,
0x00,0x00,0x00,0x00,0x01,0x81,0xFD,0xFF,0x7F,0x03,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,
0x20,0x20,0x20,0x3E,0x3F,0x3F,0x01,0x00,0x00,0x00,

// asciicircum (94): w=14, h=15
0x2D,0x14,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x38,0x1C,0x3F,
0xFC,0xC0,0x00,0x00,
0x40,0x60,0x38,0x1C,0x07,0x03,0x00,0x00,0x00,0x00,
0x03,0x1F,0x7C,0x60,

// underscore (95): w=11, h=1
0x8A,0x14,0x55,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,

// grave (96): w=5, h=4
0x84,0x00,0xC7,
0x01,0x03,0x07,0x0E,0x08,

// a (97): w=15, h=13
0x2E,0xB3,
0x80,0xE0,0xF0,0xF8,0x1C,0x06,0x02,0x01,0x81,0x41,
0xF3,0xFF,0xFF,0x7F,0x03,
0x0F,0x1F,0x1F,0x1F,0x1C,0x0C,0x06,0x03,0x01,0x1F,
0x1F,0x1F,0x1F,0x10,0x00,

// b (98): w=15, h=18
0x4E,0x13,
0x00,0x00,0x81,0xFF,0xFF,0xFF,0x1F,0x01,0x80,0xC0,
0xE0,0xE0,0xE0,0xE0,0xC0,
0x00,0xF8,0xFF,0xFF,0x3F,0x0B,0x06,0x03,0x01,0x80,
0xE0,0x7F,0x3F,0x1F,0x07,
0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// c (99): w=13, h=13
0x2C,0xB2,
0xC0,0xF0,0xF8,0xFC,0x1E,0x06,0x03,0x01,0x01,0x01,
0x0F,0x0F,0x02,
0x07,0x0F,0x1F,0x1F,0x18,0x10,0x10,0x10,0x10,0x10,
0x08,0x00,0x00,

// d (100): w=16, h=18
0x4F,0x12,
0x00,0x00,0x00,0x00,0x80,0xC0,0x40,0x20,0x20,0x20,
0x61,0xF1,0xFF,0xFF,0x7F,0x03,
0xF0,0xFC,0xFE,0xFF,0x83,0x80,0xC0,0x60,0x30,0xE8,
0xFF,0xFF,0xFF,0x07,0x00,0x00,
0x01,0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x02,0x03,
0x03,0x03,0x03,0x02,0x00,0x00,

// e (101): w=12, h=13
0x2B,0xB4,
0xC0,0xF0,0xF8,0xFC,0x8E,0x82,0xC1,0xC1,0x63,0x7F,
0x3F,0x1E,
0x07,0x0F,0x1F,0x1F,0x18,0x10,0x10,0x10,0x10,0x08,
0x08,0x0C,

// f (102): w=14, h=23
0xCD,0x00,0x50,
0x00,0x00,0x40,0xC0,0xF0,0xFC,0xFE,0x7F,0x41,0x40,
0x40,0x00,0x0F,0x03,
0x00,0x00,0xF0,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0xE0,0xFF,0xFF,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// g (103): w=15, h=18
0x4E,0xAE,
0x00,0xC0,0xE0,0xF8,0xFC,0x0E,0x02,0x01,0x01,0xC1,
0xE1,0xFF,0xFF,0xFF,0x07,
0xC0,0x8F,0x1F,0x1F,0x1F,0x0C,0x0C,0x06,0xC3,0xFC,
0xFF,0x7F,0x0F,0x00,0x00,
0x00,0x03,0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// h (104): w=14, h=18
0x4D,0x14,
0x00,0x00,0xC1,0xFF,0xFF,0xFF,0x0F,0x80,0xC0,0xC0,
0xE0,0xE0,0xE0,0xC0,
0x00,0xF8,0xFF,0xFF,0x3F,0x0D,0x06,0x01,0x01,0xF0,
0xFF,0xFF,0x7F,0x03,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x02,0x03,
0x03,0x03,0x02,0x02,

// i (105): w=7, h=18
0x46,0x13,
0x20,0x20,0xE0,0xE7,0xE7,0xE7,0x03,
0x80,0xFC,0xFF,0xFF,0x1F,0x00,0x00,
0x03,0x03,0x03,0x03,0x02,0x02,0x00,

// j (106): w=14, h=23
0xCD,0x00,0x32,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0xE0,
0xE7,0xE7,0x27,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFF,0xFF,
0xFF,0x07,0x00,0x00,
0x70,0x78,0x40,0x40,0x40,0x60,0x3E,0x1F,0x0F,0x07,
0x00,0x00,0x00,0x00,

// k (107): w=14, h=18
0x4D,0x14,
0x00,0x00,0xC1,0xFF,0xFF,0xFF,0x1F,0x01,0x00,0x00,
0xE0,0xE0,0xE0,0x60,
0x00,0xF8,0xFF,0xFF,0x3F,0x05,0x3C,0x7E,0xFE,0xF3,
0xC3,0x81,0x00,0x00,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x01,0x03,
0x03,0x03,0x03,0x02,

// l (108): w=7, h=18
0x46,0x13,
0x00,0x00,0xE1,0xFF,0xFF,0xFF,0x07,
0x80,0xFC,0xFF,0xFF,0x1F,0x00,0x00,
0x03,0x03,0x03,0x03,0x02,0x00,0x00,

// m (109): w=22, h=13
0x35,0xB4,
0x01,0xC1,0xFF,0xFF,0xFF,0x67,0x18,0x0C,0x06,0x86,
0xFF,0xFF,0xFF,0x6E,0x30,0x0C,0x06,0x06,0xFF,0xFF,
0xFF,0x1E,
0x18,0x1F,0x1F,0x1F,0x00,0x00,0x00,0x00,0x10,0x1F,
0x1F,0x1F,0x01,0x00,0x00,0x00,0x10,0x1F,0x1F,0x1F,
0x13,0x10,

// n (110): w=14, h=13
0x2D,0xB4,
0x01,0xC1,0xFF,0xFF,0xFF,0x67,0x10,0x08,0x06,0x86,
0xFF,0xFF,0xFF,0x1E,
0x18,0x1F,0x1F,0x1F,0x01,0x00,0x00,0x00,0x10,0x1F,
0x1F,0x1F,0x13,0x10,

// o (111): w=14, h=13
0x2D,0xB3,
0xC0,0xF0,0xF8,0xFC,0x1E,0x06,0x03,0x01,0x01,0x01,
0xFF,0xFE,0xFE,0x78,
0x07,0x0F,0x1F,0x1F,0x18,0x10,0x10,0x18,0x0C,0x0F,
0x07,0x03,0x01,0x00,

// p (112): w=16, h=18
0x4F,0xAD,
0x00,0x01,0xC1,0xFF,0xFF,0xFF,0x4F,0x30,0x08,0x0C,
0x06,0x07,0xFF,0xFF,0xFF,0x3E,
0x00,0xF8,0xFF,0xFF,0x3F,0x19,0x10,0x10,0x10,0x08,
0x0C,0x07,0x03,0x01,0x00,0x00,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=15, h=18
0x4E,0xB3,
0x80,0xE0,0xF0,0xF8,0x1C,0x06,0x02,0x01,0x81,0x41,
0xF3,0xFF,0xFF,0x7F,0x03,
0x0F,0x1F,0x1F,0x1F,0x1C,0x0C,0x06,0x03,0xE1,0xFE,
0xFF,0xFF,0x0F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,
0x03,0x01,0x00,0x00,0x00,

// r (114): w=13, h=13
0xAC,0x05,0x62,
0x00,0xC1,0xFF,0xFF,0xFF,0x7F,0x30,0x08,0x0C,0x06,
0x07,0x07,0x01,
0x18,0x1F,0x1F,0x1F,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// s (115): w=12, h=13
0x2B,0xAD,
0x00,0x00,0x08,0x3E,0x7E,0xFF,0xF1,0xE1,0xC1,0x8B,
0x0F,0x02,
0x0C,0x1E,0x18,0x10,0x10,0x10,0x19,0x1F,0x0F,0x07,
0x00,0x00,

// t (116): w=9, h=17
0x48,0x32,
0x10,0x10,0xFC,0xFE,0xFF,0x3F,0x10,0x10,0x10,
0x70,0xFF,0xFF,0xFF,0x07,0x00,0x80,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// u (117): w=14, h=13
0x2D,0xB9,
0x01,0xF9,0xFF,0xFF,0x3F,0x01,0x00,0x00,0xC1,0xF1,
0xFF,0xFF,0x7F,0x03,
0x0F,0x1F,0x1F,0x1F,0x0C,0x0C,0x06,0x03,0x1C,0x1F,
0x1F,0x1F,0x10,0x10,

// v (118): w=15, h=13
0x2E,0xB2,
0x01,0x03,0x0F,0xFF,0xFF,0xFC,0xE0,0x00,0x00,0x80,
0xE1,0x71,0x1F,0x0F,0x07,
0x00,0x00,0x00,0x00,0x1F,0x1F,0x0F,0x06,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,

// w (119): w=20, h=13
0x33,0xB3,
0x01,0x03,0x1F,0xFF,0xFF,0xF8,0x00,0x80,0x60,0x1C,
0xFF,0xFE,0xF0,0x00,0x80,0xC0,0x31,0x1F,0x0F,0x03,
0x00,0x00,0x00,0x1F,0x1F,0x07,0x03,0x01,0x00,0x00,
0x01,0x1F,0x0F,0x06,0x01,0x00,0x00,0x00,0x00,0x00,

// x (120): w=13, h=13
0x2C,0xAD,
0x00,0x00,0x01,0x07,0x9F,0xFF,0xFE,0xF8,0xE0,0x10,
0x1F,0x0F,0x07,
0x18,0x1C,0x1E,0x03,0x01,0x00,0x01,0x0F,0x1F,0x1F,
0x1C,0x10,0x00,

// y (121): w=17, h=18
0x50,0xA6,
0x00,0x00,0x01,0x01,0x07,0x3F,0xFF,0xFF,0xF8,0x00,
0x00,0x80,0xC0,0x71,0x3F,0x0F,0x07,
0x00,0x00,0x00,0x00,0x80,0xC0,0x67,0x3F,0x1F,0x0E,
0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x02,0x02,0x02,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=14, h=13
0x2D,0xAD,
0x00,0x00,0x04,0x07,0x83,0xC1,0xE1,0xF1,0x79,0x3F,
0x1F,0x0F,0x07,0x01,
0x10,0x1C,0x1E,0x1F,0x1F,0x17,0x11,0x10,0x10,0x10,
0x18,0x1C,0x04,0x00,

// braceleft (123): w=9, h=22
0x48,0x12,
0x00,0x00,0x00,0xF8,0xFE,0xFF,0x7F,0x01,0x01,
0x08,0x88,0xFC,0xF7,0xF3,0x01,0x00,0x00,0x00,
0x1E,0x1F,0x3F,0x37,0x20,0x00,0x00,0x00,0x00,

// bar (124): w=6, h=22
0x45,0x12,
0x00,0x00,0x00,0xF8,0xFF,0x07,
0x00,0xC0,0xFF,0x3F,0x00,0x00,
0x38,0x3F,0x07,0x00,0x00,0x00,

// braceright (125): w=9, h=22
0x48,0x0D,
0x00,0x00,0x00,0x00,0xC1,0xF3,0xFF,0x7E,0x1C,
0x00,0x00,0x80,0xE0,0xF1,0xFB,0x1F,0x08,0x08,
0x20,0x20,0x3F,0x3F,0x1F,0x0F,0x00,0x00,0x00,

// asciitilde (126): w=15, h=6
0x8E,0x08,0x64,
0x30,0x0C,0x02,0x01,0x01,0x03,0x06,0x1E,0x18,0x30,
0x20,0x20,0x10,0x0C,0x03

};
// 3816 bytes
// 4006 bytes with FAST_FONT_INDEX