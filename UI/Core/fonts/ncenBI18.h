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

// ncenBI18 = "New Century Schoolbook Bold Italic"

const char font_ncenBI18[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xDB,0x00,
0xE4,0x00,
0x0D,0x01,
0x36,0x01,
0x74,0x01,
0xB5,0x01,
0xB9,0x01,
0xD3,0x01,
0xED,0x01,
0x05,0x02,
0x1F,0x02,
0x27,0x02,
0x30,0x02,
0x38,0x02,
0x4F,0x02,
0x78,0x02,
0x98,0x02,
0xC1,0x02,
0xEA,0x02,
0x13,0x03,
0x3C,0x03,
0x65,0x03,
0x8E,0x03,
0xB7,0x03,
0xE0,0x03,
0xF0,0x03,
0x00,0x04,
0x1C,0x04,
0x2B,0x04,
0x47,0x04,
0x67,0x04,
0x9F,0x04,
0xDD,0x04,
0x15,0x05,
0x4A,0x05,
0x88,0x05,
0xBD,0x05,
0xF2,0x05,
0x2A,0x06,
0x6E,0x06,
0x91,0x06,
0xC6,0x06,
0x04,0x07,
0x39,0x07,
0x86,0x07,
0xC7,0x07,
0x02,0x08,
0x3D,0x08,
0x78,0x08,
0xB3,0x08,
0xE2,0x08,
0x17,0x09,
0x52,0x09,
0x90,0x09,
0xDD,0x09,
0x21,0x0A,
0x5C,0x0A,
0x91,0x0A,
0xAE,0x0A,
0xCE,0x0A,
0xEB,0x0A,
0x07,0x0B,
0x19,0x0B,
0x21,0x0B,
0x41,0x0B,
0x6A,0x0B,
0x84,0x0B,
0xB3,0x0B,
0xCD,0x0B,
0xFA,0x0B,
0x2A,0x0C,
0x59,0x0C,
0x70,0x0C,
0x9A,0x0C,
0xC9,0x0C,
0xE0,0x0C,
0x10,0x0D,
0x30,0x0D,
0x4C,0x0D,
0x82,0x0D,
0xAE,0x0D,
0xC8,0x0D,
0xE0,0x0D,
0xF4,0x0D,
0x14,0x0E,
0x2E,0x0E,
0x56,0x0E,
0x76,0x0E,
0xA6,0x0E,
0xC2,0x0E,
0xD9,0x0E,
0xE2,0x0E,
0xF9,0x0E,

// space (32): w=1, h=1
0x80,0x11,0x4B,
0x00,

// exclam (33): w=7, h=18
0x46,0x09,
0x00,0x00,0xFE,0xFF,0xFF,0x3F,0x0E,
0x80,0xC0,0xDF,0xDF,0x81,0x00,0x00,
0x01,0x03,0x03,0x03,0x01,0x00,0x00,

// quotedbl (34): w=7, h=6
0x06,0x0F,
0x3F,0x1F,0x07,0x00,0x3F,0x1F,0x07,

// numbersign (35): w=13, h=18
0x4C,0x09,
0x00,0x60,0x60,0xE0,0xFF,0x7F,0x60,0x60,0xE0,0xFF,
0x7F,0x60,0x60,
0x18,0x18,0xF8,0xFF,0x1F,0x18,0x18,0xF8,0xFF,0x1F,
0x18,0x18,0x00,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x00,
0x00,0x00,0x00,

// dollar (36): w=13, h=20
0x4C,0x09,
0x00,0xF0,0xFC,0xFE,0xE6,0xC3,0xF1,0x8F,0x01,0x19,
0x3F,0x3E,0x1C,
0xE0,0xF0,0xF1,0x63,0x03,0xC7,0x3F,0x0F,0x9F,0xFF,
0xFE,0x3C,0x00,
0x00,0x01,0x03,0x02,0x1E,0x03,0x02,0x03,0x01,0x01,
0x00,0x00,0x00,

// percent (37): w=20, h=19
0x53,0x09,
0xE0,0xF8,0xFE,0x1E,0x07,0x03,0x81,0x61,0x1E,0x04,
0xC4,0x72,0x1E,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x03,0x02,0x02,0x01,0xC0,0x70,0x1C,0x07,
0x01,0xE0,0xF8,0xFE,0x1E,0x07,0x03,0x81,0x61,0x1E,
0x00,0x00,0x00,0x00,0x00,0x07,0x01,0x00,0x00,0x00,
0x00,0x01,0x03,0x03,0x02,0x02,0x01,0x00,0x00,0x00,

// ampersand (38): w=21, h=18
0x54,0x08,
0x00,0x00,0x00,0x00,0x00,0xB8,0xFE,0xFE,0xFF,0xE3,
0x41,0x61,0x33,0x3F,0x0E,0x00,0x00,0x00,0x00,0x00,
0x00,
0xF0,0xFC,0xFE,0xFF,0x83,0x01,0x01,0x07,0x1F,0x7F,
0xFF,0xFC,0xF0,0xC0,0xC0,0x32,0x1E,0x0E,0x06,0x82,
0x02,
0x00,0x01,0x01,0x03,0x03,0x03,0x02,0x02,0x02,0x01,
0x01,0x01,0x03,0x03,0x03,0x03,0x02,0x02,0x01,0x00,
0x00,

// quotesingle (39): w=2, h=6
0x01,0x10,
0x3F,0x3F,

// parenleft (40): w=8, h=21
0x47,0x09,
0x00,0xC0,0xF0,0x78,0x1C,0x06,0x02,0x01,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x07,0x0E,0x08,0x10,0x00,0x00,

// parenright (41): w=8, h=21
0x47,0x09,
0x00,0x00,0x01,0x02,0x0E,0xFC,0xF8,0xE0,
0x00,0x00,0x00,0x00,0xC0,0xFF,0x7F,0x1F,
0x10,0x08,0x0C,0x07,0x03,0x01,0x00,0x00,

// asterisk (42): w=11, h=10
0x2A,0x09,
0xE0,0xEE,0x6E,0x2C,0xB0,0xFF,0x37,0xD3,0xD8,0xDC,
0x1C,
0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x01,0x01,
0x00,

// plus (43): w=12, h=12
0x2B,0xB0,
0x60,0x60,0x60,0x60,0x60,0xFF,0xFF,0x60,0x60,0x60,
0x60,0x60,
0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=5, h=8
0x84,0x0E,0x47,
0x86,0x4F,0x2F,0x1F,0x0E,

// hyphen (45): w=6, h=2
0x85,0x0A,0x46,
0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=5, h=4
0x84,0x0E,0x47,
0x06,0x0F,0x0F,0x0F,0x06,

// slash (47): w=7, h=18
0x46,0x09,
0x00,0x00,0x00,0xC0,0xF8,0x3F,0x07,
0x80,0xF0,0x7E,0x0F,0x01,0x00,0x00,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=13, h=18
0x4C,0x09,
0x80,0xF0,0xFC,0xFE,0x7E,0x0F,0x03,0x01,0x03,0xFF,
0xFE,0xFC,0xF0,
0x3F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xC0,0xF8,0xFF,
0xFF,0x3F,0x07,
0x00,0x01,0x01,0x03,0x03,0x02,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,

// one (49): w=10, h=18
0x49,0x11,
0x00,0x00,0x04,0x04,0xC4,0xFE,0xFE,0xFF,0x3F,0x00,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0x0F,0x00,0x00,
0x02,0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x02,

// two (50): w=13, h=18
0x4C,0x09,
0x00,0x00,0x78,0xFC,0xF6,0x62,0x03,0x03,0x07,0xFF,
0xFE,0xFE,0x78,
0x00,0x80,0xC0,0xE0,0xB0,0x98,0x8C,0x8E,0x87,0x83,
0xC3,0x71,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x00,0x00,

// three (51): w=13, h=18
0x4C,0x09,
0x00,0x00,0x0C,0x1E,0x1E,0x0F,0x01,0x81,0xC3,0xFF,
0xFE,0x7E,0x3C,
0xE0,0xF0,0xF0,0x60,0x00,0x01,0x01,0xC3,0xFF,0xFE,
0xFE,0x38,0x00,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,

// four (52): w=13, h=18
0x4C,0x09,
0x00,0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0xF8,0xFC,
0xFE,0x7F,0x07,
0x38,0x2C,0x26,0x23,0x21,0x20,0xF0,0xFF,0xFF,0xFF,
0x2F,0x20,0x20,
0x00,0x00,0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x03,
0x02,0x02,0x00,

// five (53): w=13, h=18
0x4C,0x09,
0x00,0x00,0xE0,0xFF,0x9F,0xC7,0xC7,0xC7,0xC7,0x87,
0x87,0x03,0x01,
0xE0,0xF0,0xF1,0x60,0x00,0x00,0x00,0xC1,0xFF,0xFF,
0xFF,0x3F,0x00,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,

// six (54): w=13, h=18
0x4C,0x09,
0x80,0xF0,0xFC,0xFE,0x7E,0x0F,0x83,0x81,0x81,0x0D,
0x1F,0x1E,0x0C,
0x3F,0xFF,0xFF,0xFF,0x02,0x01,0x01,0x81,0xFF,0xFF,
0xFF,0x3E,0x00,
0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x03,0x01,0x01,
0x00,0x00,0x00,

// seven (55): w=13, h=18
0x4C,0x09,
0x38,0x0F,0x07,0x07,0x07,0x07,0x07,0x87,0xE7,0x7F,
0x1F,0x07,0x03,
0x00,0x00,0x80,0xE0,0xF8,0xFC,0xFF,0x07,0x01,0x00,
0x00,0x00,0x00,
0x00,0x00,0x01,0x03,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,

// eight (56): w=13, h=18
0x4C,0x09,
0x00,0x00,0x78,0xFE,0xFE,0xE3,0xC1,0x81,0x81,0xC3,
0x7F,0x7E,0x1C,
0xF0,0xFC,0xFC,0x07,0x03,0x03,0x07,0x0F,0xFF,0xFF,
0xFE,0x78,0x00,
0x01,0x01,0x03,0x03,0x02,0x02,0x02,0x03,0x03,0x01,
0x01,0x00,0x00,

// nine (57): w=13, h=18
0x4C,0x09,
0x00,0xF0,0xFC,0xFE,0xFE,0x07,0x01,0x01,0x03,0xFF,
0xFE,0xFE,0xF8,
0xC0,0xE1,0xE3,0xC3,0x07,0x06,0x06,0xC2,0xF9,0xFF,
0xFF,0x3F,0x07,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,

// colon (58): w=7, h=12
0x26,0xCA,
0x00,0x00,0x06,0x0F,0x0F,0x0F,0x06,
0x06,0x0F,0x0F,0x0F,0x06,0x00,0x00,

// semicolon (59): w=7, h=16
0x26,0xCA,
0x00,0x00,0x06,0x0F,0x0F,0x0F,0x06,
0x86,0x4F,0x2F,0x1F,0x0E,0x00,0x00,

// less (60): w=13, h=15
0x2C,0x70,
0xC0,0xC0,0xE0,0x60,0x70,0x30,0x38,0x18,0x1C,0x0C,
0x0E,0x06,0x07,
0x01,0x01,0x03,0x03,0x07,0x06,0x0E,0x0C,0x1C,0x18,
0x38,0x30,0x70,

// equal (61): w=12, h=6
0x8B,0x08,0x57,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x33,0x33,

// greater (62): w=13, h=15
0x2C,0x70,
0x07,0x06,0x0E,0x0C,0x1C,0x18,0x38,0x30,0x70,0x60,
0xE0,0xC0,0xC0,
0x70,0x30,0x38,0x18,0x1C,0x0C,0x0E,0x06,0x07,0x03,
0x03,0x01,0x01,

// question (63): w=10, h=18
0x49,0x0F,
0x0C,0x82,0xC1,0xC1,0xE1,0xF3,0xFF,0x7E,0x3E,0x1C,
0x8F,0xDF,0xD7,0xD3,0x91,0x08,0x00,0x00,0x00,0x00,
0x01,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// at (64): w=18, h=18
0x51,0x10,
0xC0,0xF0,0x38,0x0C,0x86,0xE2,0xE3,0x71,0x11,0x11,
0x21,0xF1,0xF1,0xF1,0x03,0x0E,0xFC,0xF0,
0x7F,0xFF,0x80,0x00,0x1F,0x3F,0x3F,0x20,0x20,0x10,
0x1E,0x3F,0x3F,0xA1,0xB0,0x1C,0x0F,0x03,
0x00,0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x02,0x02,
0x02,0x03,0x01,0x01,0x00,0x00,0x00,0x00,

// A (65): w=20, h=18
0x53,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x70,
0x38,0xFE,0xFF,0xFC,0xE0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xE0,0x70,0x1C,0x16,0x13,0x10,0x10,
0x10,0x13,0x3F,0xFF,0xFF,0xFF,0xF8,0xC0,0x00,0x00,
0x02,0x03,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,

// B (66): w=18, h=18
0x51,0x09,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,0x01,0x83,0xFF,0xFF,0xFE,0x7E,0x3C,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x01,0x01,
0x01,0x01,0x83,0xFF,0xFE,0xFE,0xFC,0x78,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,
0x02,0x03,0x03,0x03,0x01,0x01,0x00,0x00,

// C (67): w=17, h=18
0x50,0x09,
0x80,0xE0,0xF8,0xFC,0xFE,0x3E,0x0E,0x03,0x03,0x01,
0x01,0x01,0x01,0x03,0x06,0x3E,0x07,
0x1F,0x7F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0xC0,0x60,0x00,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,
0x02,0x03,0x01,0x01,0x00,0x00,0x00,

// D (68): w=20, h=18
0x53,0x09,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,0x01,0x01,0x03,0x0F,0xFE,0xFE,0xFC,0xF8,0xE0,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,0x00,
0x00,0x00,0x00,0xC0,0xF0,0xFF,0xFF,0x7F,0x1F,0x07,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,
0x02,0x03,0x03,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// E (69): w=17, h=18
0x50,0x09,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,0x01,0x81,0xE1,0x03,0x1F,0x07,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x01,0x01,
0x01,0x03,0x1F,0x81,0xC0,0x70,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,
0x02,0x02,0x03,0x03,0x03,0x00,0x00,

// F (70): w=17, h=18
0x50,0x08,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,0x01,0x81,0xE1,0x03,0x1F,0x07,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x01,0x01,
0x01,0x03,0x1F,0x01,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=18, h=18
0x51,0x09,
0x80,0xE0,0xF8,0xFC,0xFE,0x3E,0x0E,0x03,0x03,0x01,
0x01,0x01,0x01,0x01,0x03,0x06,0x3E,0x07,
0x1F,0x7F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x00,0x04,0xC4,0xFC,0xFC,0xFC,0x3C,0x04,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,
0x02,0x03,0x01,0x01,0x01,0x03,0x00,0x00,

// H (72): w=22, h=18
0x55,0x09,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,
0x01,0x01,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x01,0x01,
0x01,0x01,0x01,0xF1,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,
0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x00,
0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,
0x00,0x00,

// I (73): w=11, h=18
0x4A,0x09,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,0x00,
0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x00,
0x00,

// J (74): w=17, h=18
0x50,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC1,
0xFF,0xFF,0xFF,0xFF,0x3F,0x01,0x01,
0xE0,0xF0,0x38,0x78,0x78,0x30,0x00,0x00,0xF0,0xFF,
0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x03,0x03,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// K (75): w=20, h=18
0x53,0x08,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x81,0xC0,0x60,0x30,0x19,0x0F,0x07,0x03,0x01,0x01,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x02,0x07,
0x1F,0x7F,0xFF,0xFC,0xF8,0xE0,0xC0,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x00,
0x00,0x02,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x00,

// L (76): w=17, h=18
0x50,0x09,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xC0,0x70,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,
0x02,0x02,0x03,0x03,0x03,0x03,0x00,

// M (77): w=25, h=18
0x58,0x09,
0x00,0x00,0x01,0x81,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,
0xE0,0x00,0x00,0x00,0x80,0xE0,0x38,0xCE,0xFF,0xFF,
0xFF,0xFF,0x3F,0x01,0x01,
0x00,0x00,0xE0,0xFF,0x03,0x00,0x03,0x7F,0xFF,0xFF,
0xFF,0xF0,0x38,0x0E,0x03,0x00,0xF0,0xFF,0xFF,0xFF,
0xFF,0x0F,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x03,0x03,
0x03,0x00,0x00,0x00,0x02,0x02,0x03,0x03,0x03,0x03,
0x03,0x02,0x02,0x00,0x00,

// N (78): w=21, h=18
0x54,0x09,
0x00,0x00,0x01,0x81,0xFF,0x3F,0x7F,0xFE,0xFC,0xF8,
0xF0,0xC0,0x80,0x00,0x00,0x01,0x81,0xFF,0x0F,0x01,
0x01,
0x00,0x00,0xE0,0xFF,0x07,0x00,0x00,0x00,0x03,0x07,
0x0F,0x3F,0x7F,0xFF,0xFC,0xF8,0x1F,0x01,0x00,0x00,
0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,
0x00,

// O (79): w=19, h=18
0x52,0x09,
0x80,0xE0,0xF8,0xFC,0xFE,0x3E,0x0E,0x03,0x03,0x01,
0x01,0x01,0x03,0x0F,0xFE,0xFE,0xFC,0xF8,0xE0,
0x1F,0x7F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xF0,0xFF,0xFF,0x7F,0x1F,0x07,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,
0x03,0x03,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// P (80): w=19, h=18
0x52,0x08,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,0x01,0x01,0x83,0xFF,0xFF,0xFE,0xFE,0x7C,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x02,0x02,
0x02,0x02,0x03,0x03,0x03,0x01,0x01,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=19, h=23
0x52,0x09,
0x80,0xE0,0xF8,0xFC,0xFE,0x3E,0x0E,0x03,0x03,0x01,
0x01,0x01,0x03,0x0F,0xFE,0xFE,0xFC,0xF8,0xE0,
0x1F,0x7F,0xFF,0xFF,0xFF,0xE0,0x10,0x18,0x38,0xF8,
0xF0,0x00,0x80,0xF0,0xFF,0xFF,0x7F,0x1F,0x07,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x03,
0x0F,0x3F,0x7F,0x7D,0x71,0x60,0x20,0x10,0x00,

// R (82): w=19, h=18
0x52,0x09,
0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,
0x01,0x01,0x01,0x83,0xFF,0xFF,0xFE,0x7E,0x3C,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0x01,0x01,
0x03,0x7F,0xFF,0xFF,0xFC,0xF0,0x80,0x00,0xC0,
0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x00,
0x00,0x00,0x01,0x03,0x03,0x03,0x03,0x01,0x00,

// S (83): w=15, h=18
0x4E,0x09,
0x00,0x00,0xF8,0xFC,0xFE,0xE2,0xC3,0xC1,0x81,0x81,
0x81,0x03,0x06,0x3E,0x07,
0x80,0xF0,0x80,0x03,0x03,0x07,0x07,0x07,0x0F,0x0F,
0x1F,0xFF,0xFF,0x7C,0x00,
0x03,0x01,0x01,0x03,0x02,0x02,0x02,0x02,0x02,0x03,
0x01,0x01,0x00,0x00,0x00,

// T (84): w=17, h=18
0x50,0x09,
0x3C,0x0F,0x07,0x03,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,
0x3F,0x01,0x01,0x03,0x0F,0x3F,0x07,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,
0x02,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=19, h=18
0x52,0x0E,
0x01,0xE1,0xFF,0xFF,0xFF,0xFF,0x1F,0x01,0x01,0x00,
0x00,0x00,0x00,0x01,0x81,0xFF,0x1F,0x01,0x01,
0xF8,0xFF,0xFF,0xFF,0xFF,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xF0,0x7F,0x03,0x00,0x00,0x00,
0x00,0x01,0x01,0x03,0x03,0x03,0x02,0x02,0x02,0x02,
0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// V (86): w=20, h=18
0x53,0x07,
0x01,0x01,0x0F,0x7F,0xFF,0xFF,0xFF,0xF1,0x81,0x00,
0x00,0x00,0x00,0x80,0xE1,0x39,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x03,0x1F,0xFF,0xFF,0xFF,0xFC,
0xE0,0x38,0x0E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=25, h=18
0x58,0x08,
0x01,0x01,0x3F,0xFF,0xFF,0xFF,0xFF,0xC1,0x01,0x00,
0xC0,0x78,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0xC1,
0x79,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x0F,0x7F,0xFF,0xFF,0xFF,0x30,0x0E,
0x03,0x00,0x0F,0x7F,0xFF,0xFF,0xFF,0x30,0x0E,0x03,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// X (88): w=22, h=18
0x55,0x02,
0x00,0x00,0x00,0x01,0x01,0x03,0x0F,0x3F,0xFF,0xFF,
0xFD,0xF1,0xC0,0xC0,0x60,0x31,0x19,0x0F,0x07,0x03,
0x01,0x01,
0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x18,0x0C,0x07,
0x0F,0x3F,0xFF,0xFF,0xFC,0xF0,0xC0,0x00,0x00,0x00,
0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x02,0x00,0x00,0x00,0x00,
0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x02,
0x00,0x00,

// Y (89): w=19, h=18
0x52,0x07,
0x01,0x01,0x0F,0x7F,0xFF,0xFF,0xFF,0xF1,0x81,0x00,
0x00,0xC0,0x61,0x39,0x0F,0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xE3,0xFF,0xFF,0xFF,0xFF,0x0E,
0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x02,
0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=17, h=18
0x50,0x09,
0x00,0x00,0x38,0x0F,0x07,0x03,0x01,0x81,0xC1,0xF1,
0xF9,0xFD,0x7F,0x3F,0x1F,0x0F,0x07,
0x80,0xC0,0xE0,0xF0,0xFC,0xFE,0x7F,0x3F,0x0F,0x07,
0x03,0x01,0x00,0x80,0xC0,0x70,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x02,
0x02,0x02,0x03,0x03,0x03,0x00,0x00,

// bracketleft (91): w=9, h=21
0x48,0x08,
0x00,0x00,0xE0,0xFF,0xFF,0x1F,0x01,0x01,0x01,
0x80,0xFC,0xFF,0x7F,0x03,0x00,0x00,0x00,0x00,
0x1F,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00,0x00,

// backslash (92): w=10, h=18
0x49,0x09,
0x03,0x0F,0x3C,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x0F,0x3C,0xF0,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,

// bracketright (93): w=9, h=21
0x48,0x04,
0x00,0x00,0x00,0x01,0x01,0xE1,0xFF,0xFF,0x1F,
0x00,0x00,0x00,0x80,0xFC,0xFF,0x7F,0x03,0x00,
0x10,0x10,0x10,0x1F,0x1F,0x1F,0x00,0x00,0x00,

// asciicircum (94): w=13, h=11
0x2C,0x0F,
0x00,0x00,0xC0,0xF0,0x7C,0x1F,0x07,0x1F,0x7C,0xF0,
0xC0,0x00,0x00,
0x04,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x01,
0x07,0x07,0x04,

// underscore (95): w=15, h=2
0x8E,0x14,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,

// grave (96): w=6, h=5
0x05,0x09,
0x07,0x07,0x0E,0x0C,0x18,0x10,

// a (97): w=15, h=12
0x2E,0xC9,
0xF0,0xFC,0xFE,0xFE,0x0F,0x03,0x01,0x01,0x01,0xF2,
0xFF,0xFF,0xFF,0x0F,0x00,
0x01,0x07,0x07,0x0F,0x0C,0x08,0x08,0x04,0x07,0x0F,
0x0F,0x0F,0x08,0x04,0x02,

// b (98): w=13, h=18
0x4C,0x0A,
0x00,0x01,0xF1,0xFF,0xFF,0xFF,0x8F,0x40,0xC0,0xC0,
0x80,0x80,0x00,
0x70,0xFF,0xFF,0xFF,0x03,0x00,0x00,0x00,0xC0,0xFF,
0xFF,0xFF,0x3E,
0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x03,0x03,0x01,
0x01,0x00,0x00,

// c (99): w=12, h=12
0x2B,0xCF,
0xF0,0xFC,0xFE,0xFE,0x0F,0x03,0x01,0x01,0x07,0x0F,
0x0F,0x06,
0x01,0x07,0x07,0x0F,0x0C,0x08,0x08,0x08,0x04,0x04,
0x02,0x00,

// d (100): w=15, h=18
0x4E,0x09,
0x00,0x00,0x80,0x80,0xC0,0xC0,0x40,0x40,0xC0,0x81,
0xF1,0xFF,0xFF,0xFF,0x0F,
0x7C,0xFF,0xFF,0xFF,0x03,0x00,0x00,0x00,0xC0,0xFF,
0xFF,0xFF,0x3F,0x01,0x80,
0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x01,0x01,0x03,
0x03,0x03,0x02,0x01,0x00,

// e (101): w=12, h=12
0x2B,0xCA,
0xF0,0xFC,0xFE,0xFE,0x4F,0x43,0x41,0x61,0x33,0x3F,
0x3E,0x1E,
0x01,0x07,0x07,0x0F,0x0C,0x08,0x08,0x08,0x04,0x04,
0x02,0x00,

// f (102): w=14, h=23
0xCD,0x00,0x32,
0x00,0x00,0x40,0xC0,0xF8,0xFE,0xFE,0x7F,0x47,0x41,
0x47,0x0F,0x0F,0x06,
0x00,0x80,0xF8,0xFF,0xFF,0x7F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x78,0x7F,0x3F,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// g (103): w=15, h=20
0xCE,0x03,0x27,
0x00,0x00,0x00,0xC0,0xF0,0xF0,0xF8,0x18,0x08,0x08,
0x18,0xFC,0xFE,0xF3,0xE3,
0x00,0x00,0xB0,0xF9,0x7B,0x6F,0x67,0x66,0x64,0xE4,
0xE6,0xC7,0xC3,0x83,0x01,
0x07,0x07,0x0F,0x0C,0x08,0x08,0x08,0x08,0x08,0x0C,
0x0F,0x07,0x07,0x03,0x00,

// h (104): w=15, h=18
0x4E,0x09,
0x00,0x01,0xF1,0xFF,0xFF,0xFF,0x0F,0x00,0x80,0xC0,
0xC0,0xC0,0xC0,0x80,0x00,
0xC0,0xFE,0xFF,0xFF,0x3F,0x07,0x02,0x01,0xC0,0xFC,
0xFF,0xFF,0x3F,0x03,0x80,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x01,0x03,
0x03,0x03,0x02,0x01,0x00,

// i (105): w=7, h=17
0x46,0x29,
0x20,0x20,0xE0,0xE0,0xE7,0xE7,0x07,
0xE0,0xFE,0xFF,0xFF,0x1F,0x81,0x40,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// j (106): w=13, h=22
0xCC,0x01,0x06,
0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0xE0,0xE0,
0xE7,0xE7,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,
0x1F,0x01,0x00,
0x1C,0x3E,0x3E,0x2C,0x30,0x3E,0x1F,0x1F,0x0F,0x01,
0x00,0x00,0x00,

// k (107): w=15, h=18
0x4E,0x09,
0x00,0x01,0xE1,0xFF,0xFF,0xFF,0x1F,0x80,0x40,0x40,
0xC0,0xC0,0xC0,0x80,0x00,
0xC0,0xFC,0xFF,0xFF,0x3F,0x03,0x09,0x18,0xF8,0xF4,
0xF7,0xC7,0x07,0x03,0x80,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x01,0x03,
0x03,0x03,0x02,0x01,0x00,

// l (108): w=7, h=18
0x46,0x09,
0x00,0x01,0xF1,0xFF,0xFF,0xFF,0x0F,
0xC0,0xFE,0xFF,0xFF,0x3F,0x01,0x80,
0x01,0x03,0x03,0x03,0x02,0x01,0x00,

// m (109): w=23, h=12
0x36,0xC9,
0x01,0xF1,0xFF,0xFF,0xFF,0x1F,0x08,0x04,0x02,0xF3,
0xFF,0xFF,0xFF,0x1E,0x08,0x04,0x02,0xF3,0xFF,0xFF,
0xFF,0x0E,0x00,
0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x0F,0x0F,
0x0F,0x0F,0x00,0x00,0x00,0x00,0x07,0x0F,0x0F,0x0F,
0x08,0x04,0x02,

// n (110): w=15, h=12
0x2E,0xC9,
0x01,0xF1,0xFF,0xFF,0xFF,0x1F,0x08,0x04,0x02,0xF2,
0xFF,0xFF,0xFF,0x0E,0x00,
0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x07,0x0F,
0x0F,0x0F,0x08,0x04,0x02,

// o (111): w=13, h=12
0x2C,0xCA,
0xF0,0xFC,0xFE,0xFE,0x0F,0x03,0x01,0x01,0x03,0xFF,
0xFE,0xFE,0xF8,
0x01,0x07,0x07,0x0F,0x0C,0x08,0x08,0x0C,0x0F,0x07,
0x07,0x03,0x00,

// p (112): w=17, h=17
0xD0,0x06,0x17,
0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,0x1F,0x02,
0x01,0x01,0x03,0xFF,0xFE,0xFE,0xF8,
0x00,0x00,0xE0,0xFE,0xFF,0xFF,0x1F,0x07,0x0C,0x08,
0x08,0x0C,0x0F,0x07,0x07,0x03,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=14, h=17
0x4D,0xCA,
0xF0,0xFC,0xFE,0xFE,0x0F,0x03,0x01,0x01,0x03,0xFE,
0xFC,0xFE,0xFF,0x0F,
0x01,0x07,0x07,0x0F,0x0C,0x08,0x08,0xE4,0xFF,0xFF,
0xFF,0x1F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,

// r (114): w=12, h=12
0x2B,0xC9,
0x01,0xF1,0xFF,0xFF,0xFF,0x0F,0x04,0x02,0x07,0x0F,
0x0F,0x06,
0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// s (115): w=11, h=12
0x2A,0xCA,
0x00,0x1C,0x3E,0x3E,0x7B,0x71,0xF1,0xE7,0xCF,0x8F,
0x06,
0x06,0x0F,0x0F,0x0E,0x08,0x08,0x0C,0x07,0x07,0x03,
0x00,

// t (116): w=9, h=16
0x28,0x49,
0x10,0x10,0xF0,0xFF,0xFF,0xFF,0x1F,0x10,0x10,
0x70,0xFF,0xFF,0xFF,0x8F,0x80,0x40,0x20,0x00,

// u (117): w=15, h=12
0x2E,0xC9,
0x01,0xF1,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x80,0xF0,
0xFF,0xFF,0xFF,0x0F,0x00,
0x07,0x0F,0x0F,0x0F,0x0C,0x04,0x02,0x01,0x07,0x0F,
0x0F,0x0F,0x08,0x04,0x02,

// v (118): w=12, h=12
0x2B,0xC9,
0xC1,0xF9,0xFF,0xFF,0x3F,0x07,0x00,0x00,0x00,0x03,
0xC7,0x3E,
0x03,0x07,0x0F,0x0F,0x0C,0x08,0x08,0x04,0x04,0x03,
0x00,0x00,

// w (119): w=19, h=12
0x32,0xC9,
0xC1,0xF9,0xFF,0xFF,0x3F,0x07,0x00,0x00,0xC0,0xF8,
0xFF,0xFF,0x3F,0x07,0x00,0x00,0x03,0x87,0x7E,
0x03,0x07,0x0F,0x0F,0x0C,0x08,0x08,0x04,0x03,0x07,
0x0F,0x0F,0x0C,0x08,0x08,0x04,0x02,0x01,0x00,

// x (120): w=15, h=12
0x2E,0xC3,
0x00,0x04,0x02,0x03,0x0F,0xBF,0xFF,0xFC,0xF0,0x98,
0x0C,0x06,0x07,0x07,0x03,
0x0C,0x0E,0x0E,0x06,0x03,0x01,0x01,0x07,0x0F,0x0F,
0x0E,0x0C,0x04,0x02,0x00,

// y (121): w=15, h=17
0xCE,0x06,0x16,
0x00,0x00,0x04,0x02,0x07,0x3F,0xFF,0xFE,0xF8,0xC0,
0x00,0xC0,0x73,0x1F,0x06,
0xC0,0xE0,0xE0,0xC0,0x80,0xC0,0x61,0x3F,0x1F,0x0F,
0x07,0x01,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// z (122): w=13, h=12
0x2C,0xC9,
0x00,0x0C,0x06,0x87,0x87,0xC7,0x47,0x2E,0x3E,0x1E,
0x0E,0x07,0x03,
0x0C,0x0E,0x07,0x07,0x07,0x0F,0x0F,0x0E,0x0E,0x0E,
0x06,0x03,0x00,

// braceleft (123): w=7, h=21
0x46,0x09,
0x00,0x00,0xE0,0xFE,0x7F,0x01,0x01,
0x82,0xFE,0xFD,0x00,0x00,0x00,0x00,
0x0F,0x1F,0x11,0x10,0x00,0x00,0x00,

// bar (124): w=2, h=18
0xC1,0x00,0xAC,
0xFF,0xFF,
0xFF,0xFF,
0x03,0x03,

// braceright (125): w=7, h=21
0x46,0x04,
0x00,0x00,0x00,0x01,0xF1,0xFF,0x1E,
0x00,0x00,0xC0,0xF8,0x7D,0x03,0x02,
0x10,0x10,0x1F,0x0F,0x00,0x00,0x00,

// asciitilde (126): w=13, h=4
0x8C,0x08,0x46,
0x0C,0x0E,0x03,0x03,0x03,0x07,0x06,0x0E,0x0C,0x0C,
0x0C,0x07,0x03

};
// 3659 bytes
// 3849 bytes with FAST_FONT_INDEX