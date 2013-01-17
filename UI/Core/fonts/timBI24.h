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

// timBI24 = "Times Bold Italic"

const char font_timBI24[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xE4,0x00,
0x01,0x01,
0x36,0x01,
0x78,0x01,
0xC5,0x01,
0x09,0x02,
0x16,0x02,
0x40,0x02,
0x6B,0x02,
0x87,0x02,
0xBC,0x02,
0xCB,0x02,
0xD7,0x02,
0xDF,0x02,
0xFC,0x02,
0x2E,0x03,
0x5A,0x03,
0x8F,0x03,
0xBE,0x03,
0xF3,0x03,
0x22,0x04,
0x54,0x04,
0x83,0x04,
0xB5,0x04,
0xE7,0x04,
0xFA,0x04,
0x18,0x05,
0x4D,0x05,
0x6E,0x05,
0xA3,0x05,
0xC9,0x05,
0x3B,0x06,
0x7C,0x06,
0xC0,0x06,
0x01,0x07,
0x4B,0x07,
0x8F,0x07,
0xD3,0x07,
0x1A,0x08,
0x6D,0x08,
0x9C,0x08,
0xE6,0x08,
0x30,0x09,
0x6E,0x09,
0xCD,0x09,
0x1D,0x0A,
0x61,0x0A,
0xA2,0x0A,
0xFC,0x0A,
0x3D,0x0B,
0x72,0x0B,
0xAD,0x0B,
0xF4,0x0B,
0x35,0x0C,
0x8B,0x0C,
0xD5,0x0C,
0x10,0x0D,
0x4E,0x0D,
0x85,0x0D,
0xB5,0x0D,
0xEC,0x0D,
0x0C,0x0E,
0x20,0x0E,
0x29,0x0E,
0x48,0x0E,
0x74,0x0E,
0x91,0x0E,
0xC6,0x0E,
0xE1,0x0E,
0x34,0x0F,
0x6D,0x0F,
0x9F,0x0F,
0xB9,0x0F,
0xF4,0x0F,
0x26,0x10,
0x43,0x10,
0x74,0x10,
0x95,0x10,
0xB6,0x10,
0xF2,0x10,
0x22,0x11,
0x41,0x11,
0x5A,0x11,
0x77,0x11,
0x98,0x11,
0xB7,0x11,
0xE4,0x11,
0x07,0x12,
0x3A,0x12,
0x67,0x12,
0x99,0x12,
0xA4,0x12,
0xD7,0x12,

// space (32): w=1, h=1
0x80,0x16,0x4C,
0x00,

// exclam (33): w=10, h=23
0x49,0x15,
0x00,0x00,0x00,0x00,0xF8,0xFE,0xFF,0xFF,0x7F,0x1E,
0x00,0x00,0x00,0xE0,0xFF,0x1F,0x07,0x01,0x00,0x00,
0x38,0x7C,0x7C,0x7C,0x38,0x00,0x00,0x00,0x00,0x00,

// quotedbl (34): w=13, h=11
0xAC,0x00,0x96,
0xFE,0xFF,0xFF,0x3F,0x0E,0x00,0x00,0x00,0xFE,0xFF,
0xFF,0x3F,0x0E,
0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x03,
0x00,0x00,0x00,

// numbersign (35): w=17, h=23
0x50,0x08,
0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0xFF,0x00,0x00,
0x00,0xFE,0xFF,0xFF,0x00,0x00,0x00,
0xC0,0xC3,0xC3,0xC3,0xFF,0xFF,0xFF,0xC3,0xC3,0xC3,
0xFF,0xFF,0xFF,0xC3,0xC3,0xC3,0x03,
0x00,0x00,0x00,0x7F,0x7F,0x3F,0x00,0x00,0x00,0x7F,
0x7F,0x3F,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=16, h=27
0x6F,0x08,
0x00,0x00,0x00,0xF0,0xFC,0xFE,0xC6,0x03,0xC3,0xFB,
0x7F,0x07,0x06,0x0E,0x7C,0x1C,
0x00,0x00,0x00,0x03,0x07,0x0F,0x9F,0xFF,0x7F,0xFF,
0xF8,0xF0,0xE0,0x80,0x00,0x00,
0x1C,0x1F,0x38,0x60,0xC0,0xFC,0x5F,0x43,0x40,0x60,
0x3F,0x1F,0x0F,0x03,0x00,0x00,
0x00,0x00,0x00,0x1E,0x1F,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// percent (37): w=25, h=23
0x58,0x0F,
0xE0,0xF8,0xFC,0xFE,0x7E,0x0F,0x07,0x03,0x03,0xC3,
0x7E,0x06,0x04,0x04,0xC6,0xE6,0x3A,0x1F,0x07,0x01,
0x00,0x00,0x00,0x00,0x00,
0x07,0x0F,0x1F,0x1F,0x18,0x10,0x18,0x0C,0x06,0x83,
0xE0,0x70,0x1C,0x0F,0x83,0xE0,0xF0,0xF8,0xF8,0x3C,
0x1C,0x0C,0x0C,0x0C,0xF8,
0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x38,0x0E,0x07,
0x01,0x00,0x00,0x00,0x1F,0x3F,0xFF,0xFF,0xE1,0xC0,
0xE0,0x30,0x18,0x0F,0x01,

// ampersand (38): w=22, h=23
0x55,0x16,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFC,0xFE,
0x1E,0x07,0x01,0x81,0xE3,0xFF,0x7E,0x1C,0x00,0x00,
0x00,0x00,
0x00,0xC0,0xE0,0xF0,0x70,0x38,0x18,0x0F,0x0F,0x7F,
0xFF,0xFE,0xE3,0x81,0x01,0x08,0xC8,0xF8,0x78,0x18,
0x08,0x08,
0x07,0x1F,0x3F,0x3F,0x7C,0x78,0x70,0x70,0x70,0x30,
0x33,0x1F,0x1F,0x1F,0x3E,0x7F,0x79,0x70,0x60,0x60,
0x30,0x00,

// quotesingle (39): w=5, h=11
0xA4,0x00,0x85,
0xFE,0xFF,0xFF,0x7F,0x1E,
0x07,0x03,0x00,0x00,0x00,

// parenleft (40): w=10, h=29
0x69,0x18,
0x00,0x00,0x80,0xC0,0xF0,0x78,0x1C,0x0E,0x07,0x03,
0xF8,0xFE,0xFF,0x3F,0x03,0x00,0x00,0x00,0x00,0x00,
0x1F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x0F,0x1C,0x00,0x00,0x00,0x00,0x00,

// parenright (41): w=10, h=29
0xE9,0x00,0x28,
0x00,0x00,0x00,0x00,0x00,0x03,0x3E,0xF8,0xE0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0xE0,0xF8,0x7F,0x3F,0x0F,0x03,
0x18,0x1C,0x0E,0x07,0x03,0x01,0x00,0x00,0x00,0x00,

// asterisk (42): w=13, h=14
0x2C,0x16,
0x18,0x38,0x38,0x30,0xE0,0xCE,0xFF,0xCF,0xE0,0x30,
0x38,0x38,0x18,
0x06,0x07,0x07,0x03,0x01,0x3D,0x3F,0x1C,0x01,0x03,
0x07,0x07,0x06,

// plus (43): w=17, h=17
0x50,0xCF,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0xFF,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// comma (44): w=6, h=10
0xA5,0x13,0x38,
0x00,0x0E,0x9F,0xFF,0x7F,0x1E,
0x02,0x03,0x01,0x00,0x00,0x00,

// hyphen (45): w=9, h=4
0x88,0x0E,0x56,
0x0E,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x07,

// period (46): w=5, h=5
0x84,0x12,0x39,
0x0E,0x1F,0x1F,0x1F,0x0E,

// slash (47): w=9, h=23
0x48,0x08,
0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0x3F,0x07,
0x00,0x00,0xC0,0xF8,0x7E,0x0F,0x01,0x00,0x00,
0x70,0x7E,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=16, h=23
0x4F,0x0D,
0x00,0x80,0xE0,0xF0,0xFC,0xFC,0x7E,0x0F,0x03,0x01,
0x01,0xE3,0xFE,0xFE,0xF8,0xE0,
0xFC,0xFF,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,0xC0,
0xFC,0xFF,0xFF,0xFF,0x1F,0x03,
0x0F,0x3F,0x3F,0x63,0x40,0x40,0x60,0x78,0x3F,0x1F,
0x1F,0x07,0x03,0x00,0x00,0x00,

// one (49): w=14, h=23
0x4D,0x0A,
0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x82,0xFE,0xFE,
0xFF,0xFF,0x1F,0x01,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0xFF,
0x1F,0x01,0x00,0x00,
0x40,0x40,0x40,0x60,0x7C,0x7F,0x7F,0x7F,0x6F,0x41,
0x40,0x40,0x00,0x00,

// two (50): w=17, h=23
0x50,0x02,
0x00,0x00,0x00,0x00,0x00,0x30,0x18,0x0E,0x06,0x07,
0x07,0x0F,0x1F,0xFF,0xFE,0xFE,0xF8,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,
0x70,0x3C,0x1F,0x0F,0x07,0x03,0x00,
0x40,0x60,0x70,0x78,0x7C,0x7E,0x7F,0x7B,0x79,0x78,
0x78,0x78,0x78,0x7C,0x1C,0x06,0x00,

// three (51): w=15, h=23
0x4E,0x09,
0x00,0x00,0x00,0x00,0x30,0x18,0x0E,0x06,0x07,0x07,
0x8F,0xFF,0xFE,0xFC,0x78,
0x00,0x00,0x00,0x00,0x04,0x04,0x0E,0x1E,0x7F,0xFF,
0xFB,0xF1,0xC1,0x00,0x00,
0x30,0x78,0x78,0x70,0x60,0x60,0x60,0x30,0x3C,0x1F,
0x1F,0x0F,0x03,0x00,0x00,

// four (52): w=17, h=23
0x50,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,
0x60,0x30,0xD8,0xFC,0xFE,0xFF,0x1F,
0x80,0xC0,0xE0,0xB0,0x98,0x8C,0x86,0x83,0x81,0x80,
0xF0,0xFF,0xFF,0xFF,0x9F,0x81,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x63,0x7B,0x7F,
0x7F,0x7F,0x1F,0x03,0x03,0x00,0x00,

// five (53): w=15, h=23
0x4E,0x09,
0x00,0x00,0x00,0xC0,0xF8,0xFF,0x8F,0x8F,0x8F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x03,
0x00,0x00,0x02,0x03,0x03,0x07,0x07,0x0F,0x1F,0x7F,
0xFF,0xFE,0xF8,0x00,0x00,
0x30,0x78,0x78,0x70,0x60,0x60,0x60,0x20,0x30,0x1C,
0x1F,0x0F,0x03,0x00,0x00,

// six (54): w=16, h=23
0x4F,0x0D,
0x00,0x00,0x00,0xC0,0xE0,0xF0,0xF0,0xF8,0x3C,0x1C,
0x0E,0x06,0x06,0x03,0x03,0x01,
0xF0,0xFE,0xFF,0xFF,0xFF,0x0F,0x03,0x01,0x01,0xC3,
0xFF,0xFF,0xFE,0xF8,0x00,0x00,
0x07,0x1F,0x3F,0x7F,0x60,0x40,0x40,0x60,0x7C,0x3F,
0x3F,0x1F,0x07,0x01,0x00,0x00,

// seven (55): w=15, h=23
0x4E,0x13,
0x38,0x1E,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xCF,
0xFF,0x7F,0x1F,0x0F,0x03,
0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0x7E,0x1F,0x07,
0x01,0x00,0x00,0x00,0x00,
0x40,0x70,0x7C,0x3F,0x0F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// eight (56): w=16, h=23
0x4F,0x08,
0x00,0x00,0x00,0xF0,0xFC,0xFC,0xFE,0xC6,0x03,0x03,
0x01,0x03,0x87,0xFE,0xFC,0xF8,
0x00,0xC0,0xC0,0xE0,0x73,0x37,0x1F,0x1F,0x3F,0x7E,
0xFC,0xF6,0xE3,0xC3,0x01,0x00,
0x07,0x1F,0x3F,0x7F,0x70,0x60,0x40,0x40,0x60,0x60,
0x79,0x3F,0x3F,0x1F,0x07,0x00,

// nine (57): w=16, h=23
0x4F,0x08,
0x00,0x00,0xC0,0xF0,0xFC,0xFE,0xFE,0x1F,0x03,0x01,
0x01,0x83,0xFF,0xFE,0xFC,0xF0,
0x00,0x00,0x0F,0x3F,0x7F,0x7F,0x61,0x40,0xC0,0xE0,
0xF8,0xFF,0xFF,0x7F,0x3F,0x07,
0x40,0x60,0x60,0x30,0x30,0x38,0x1C,0x1E,0x0F,0x07,
0x07,0x03,0x01,0x00,0x00,0x00,

// colon (58): w=8, h=15
0xA7,0x08,0x66,
0x00,0x00,0x00,0x0E,0x1F,0x1F,0x1F,0x0E,
0x38,0x7C,0x7C,0x7C,0x38,0x00,0x00,0x00,

// semicolon (59): w=9, h=21
0xC8,0x08,0x56,
0x00,0x00,0x00,0x00,0x0E,0x1F,0x1F,0x1F,0x0E,
0x00,0x70,0xF8,0xF8,0xF8,0xF0,0x00,0x00,0x00,
0x10,0x18,0x0C,0x07,0x03,0x00,0x00,0x00,0x00,

// less (60): w=17, h=17
0x50,0xCF,
0x80,0x80,0xC0,0xC0,0xE0,0xE0,0xF0,0x70,0x78,0x38,
0x38,0x1C,0x1C,0x1E,0x0E,0x0F,0x07,
0x03,0x03,0x07,0x07,0x0E,0x0E,0x1E,0x1C,0x3C,0x38,
0x38,0x70,0x70,0xF0,0xE0,0xE0,0xC0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=15, h=9
0xAE,0x0A,0x67,
0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,
0xC7,0xC7,0xC7,0xC7,0xC7,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// greater (62): w=17, h=17
0x50,0xCF,
0x07,0x0F,0x0E,0x1E,0x1C,0x1C,0x38,0x38,0x78,0x70,
0xF0,0xE0,0xE0,0xC0,0xC0,0x80,0x80,
0xC0,0xE0,0xE0,0xF0,0x70,0x70,0x38,0x38,0x3C,0x1C,
0x1E,0x0E,0x0E,0x07,0x07,0x03,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=12, h=23
0x4B,0x1B,
0x00,0x18,0x3E,0x3E,0x1B,0x01,0x01,0xC3,0xFF,0xFE,
0xFE,0x3C,
0x00,0x00,0x00,0xE0,0x38,0x0E,0x0F,0x07,0x03,0x01,
0x00,0x00,
0x38,0x7C,0x7C,0x7C,0x38,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// at (64): w=28, h=28
0x7B,0x08,
0x00,0x00,0x00,0xC0,0xE0,0xF0,0x78,0x1C,0x0C,0x0E,
0x06,0x03,0x03,0x03,0x83,0x81,0x81,0x01,0x01,0x83,
0x83,0x86,0x06,0x0C,0x18,0x70,0xE0,0x80,
0xF0,0xFC,0xFF,0xFF,0x0F,0x01,0x00,0x00,0xE0,0xF8,
0xFC,0xFE,0x1F,0x07,0x03,0x01,0x01,0xC3,0xFE,0xFF,
0x7F,0x07,0x00,0x00,0x00,0x00,0xC1,0x7F,
0x07,0x1F,0x7F,0xFF,0xF0,0xC0,0x00,0x00,0x07,0x1F,
0x3F,0x3F,0x3C,0x38,0x18,0x0C,0x1E,0x3F,0x3F,0x3B,
0x30,0x10,0x18,0x0C,0x06,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x06,0x06,0x04,
0x0C,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0C,
0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=21, h=23
0x54,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0x70,0xF8,0xFE,0xFF,0xFC,0x00,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xB8,0x9C,0x87,
0x81,0x80,0x8F,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,
0x00,
0x40,0x60,0x70,0x7C,0x4F,0x43,0x01,0x01,0x01,0x01,
0x01,0x41,0x41,0x67,0x7F,0x7F,0x7F,0x7F,0x70,0x40,
0x40,

// B (66): w=22, h=23
0x55,0x02,
0x00,0x00,0x00,0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,
0xFF,0x3F,0x01,0x01,0x01,0x03,0x03,0x87,0xFF,0xFE,
0xFE,0xFC,
0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0xFF,0x3F,
0x0F,0x0C,0x0C,0x0C,0x1C,0x3E,0xFF,0xFB,0xF3,0xF3,
0xC1,0x00,
0x40,0x40,0x60,0x7C,0x7F,0x7F,0x7F,0x7F,0x43,0x40,
0x40,0x40,0x60,0x60,0x70,0x38,0x3F,0x1F,0x1F,0x0F,
0x03,0x00,

// C (67): w=21, h=23
0x54,0x13,
0x00,0x00,0xC0,0xE0,0xF0,0xF8,0xFC,0x7C,0x1E,0x0E,
0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x07,0xFE,0x3E,
0x07,
0xF8,0xFF,0xFF,0xFF,0xFF,0x07,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,
0x03,0x0F,0x1F,0x1F,0x3F,0x3C,0x70,0x70,0x60,0x60,
0x60,0x60,0x20,0x30,0x10,0x18,0x08,0x04,0x00,0x00,
0x00,

// D (68): w=24, h=23
0x57,0x02,
0x00,0x00,0x00,0x00,0x01,0x81,0xF3,0xFF,0xFF,0xFF,
0xFF,0x0F,0x01,0x01,0x01,0x01,0x03,0x07,0x1E,0xFE,
0xFC,0xF8,0xF0,0xC0,
0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xFF,
0xFF,0xFF,0x7F,0x1F,
0x40,0x60,0x78,0x7F,0x7F,0x7F,0x7F,0x6F,0x40,0x40,
0x40,0x60,0x60,0x70,0x30,0x38,0x1E,0x1F,0x0F,0x07,
0x03,0x01,0x00,0x00,

// E (69): w=22, h=23
0x55,0x03,
0x00,0x00,0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,
0xFF,0x1F,0x03,0x01,0x01,0x01,0x81,0x01,0x03,0x7F,
0x3F,0x07,
0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0xFF,0x1F,
0x0B,0x08,0x08,0x1C,0xFC,0x7E,0x0F,0x00,0x00,0x00,
0x00,0x00,
0x40,0x40,0x70,0x7E,0x7F,0x7F,0x7F,0x7F,0x41,0x40,
0x40,0x40,0x40,0x40,0x60,0x60,0x70,0x78,0x7C,0x0E,
0x00,0x00,

// F (70): w=22, h=23
0x55,0x08,
0x00,0x00,0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,
0xFF,0x3F,0x03,0x01,0x01,0x01,0x81,0x01,0x03,0x7F,
0x3F,0x07,
0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0xFF,0x1F,
0x0B,0x08,0x08,0x1C,0xFC,0x7E,0x0F,0x00,0x00,0x00,
0x00,0x00,
0x40,0x40,0x70,0x7E,0x7F,0x7F,0x7F,0x7F,0x41,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// G (71): w=23, h=23
0x56,0x0E,
0x00,0x00,0xC0,0xE0,0xF0,0xF8,0xFC,0x7C,0x1E,0x0E,
0x07,0x07,0x03,0x03,0x01,0x01,0x03,0x03,0x07,0x1E,
0x7E,0x0F,0x00,
0xF8,0xFF,0xFF,0xFF,0xFF,0x07,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x10,0x10,0xF0,0xF0,0xF0,0xF0,
0x70,0x10,0x10,
0x01,0x07,0x1F,0x1F,0x3F,0x3E,0x78,0x70,0x60,0x60,
0x60,0x60,0x60,0x70,0x78,0x7F,0x3F,0x3F,0x0F,0x03,
0x00,0x00,0x00,

// H (72): w=27, h=23
0x5A,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0x81,0xFF,0xFF,0xFF,
0xFF,0x1F,0x03,0x01,0x01,0x00,0x00,0x01,0x81,0xFF,
0xFF,0xFF,0xFF,0x1F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x80,0xF0,0xFF,0xFF,0xFF,0x1F,
0x0D,0x0C,0x0C,0x0C,0x0C,0x0C,0x8C,0xFC,0xFF,0xFF,
0xFF,0x1F,0x01,0x00,0x00,0x00,0x00,
0x40,0x40,0x60,0x78,0x7F,0x7F,0x7F,0x7F,0x43,0x40,
0x00,0x00,0x00,0x40,0x60,0x78,0x7F,0x7F,0x7F,0x7F,
0x43,0x40,0x00,0x00,0x00,0x00,0x00,

// I (73): w=15, h=23
0x4E,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0xC1,0xFF,0xFF,0xFF,
0xFF,0x3F,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0xFF,0x3F,
0x03,0x00,0x00,0x00,0x00,
0x40,0x40,0x60,0x7C,0x7F,0x7F,0x7F,0x7F,0x43,0x40,
0x00,0x00,0x00,0x00,0x00,

// J (74): w=18, h=26
0x71,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x81,
0xFF,0xFF,0xFF,0xFF,0x7F,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,
0xFF,0xFF,0x7F,0x07,0x00,0x00,0x00,0x00,
0xE0,0xF0,0xF0,0x60,0x00,0x00,0xE0,0xFF,0xFF,0xFF,
0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// K (75): w=24, h=23
0x57,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,
0x7F,0x0F,0x03,0x01,0x81,0xC0,0x60,0x31,0x19,0x0F,
0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0xFF,0x1F,
0x0C,0xFE,0xFE,0xFF,0xF9,0xE0,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x40,0x40,0x70,0x7E,0x7F,0x7F,0x7F,0x67,0x40,0x40,
0x00,0x00,0x43,0x4F,0x7F,0x7F,0x7F,0x7E,0x78,0x60,
0x40,0x00,0x00,0x00,

// L (76): w=20, h=23
0x53,0x03,
0x00,0x00,0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0xFF,
0xFF,0x1F,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0xFF,0x1F,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x40,0x70,0x7E,0x7F,0x7F,0x7F,0x7F,0x41,0x40,
0x40,0x40,0x40,0x40,0x60,0x60,0x70,0x78,0x7C,0x0E,

// M (77): w=31, h=23
0x5E,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0xE1,0xFF,0x7F,0xFF,
0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0xE0,0x70,0x9C,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0xF0,0xFE,0x0F,0x00,0x00,0xFF,
0xFF,0xFF,0xFF,0xE0,0x80,0xE0,0x70,0x1C,0x0E,0x03,
0xC1,0xFC,0xFF,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,0x00,
0x40,0x60,0x78,0x7F,0x6F,0x40,0x40,0x00,0x00,0x01,
0x7F,0x7F,0x1F,0x0F,0x03,0x01,0x40,0x40,0x60,0x7C,
0x7F,0x7F,0x7F,0x7F,0x43,0x40,0x00,0x00,0x00,0x00,0x00,

// N (78): w=26, h=23
0x59,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0xE3,0xFF,0x1F,0x7F,
0xFF,0xFE,0xF8,0xE0,0x80,0x00,0x00,0x00,0x00,0x01,
0x83,0xFF,0x7F,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0xF0,0xFE,0x0F,0x00,0x00,0x00,
0x03,0x0F,0x3F,0xFF,0xFF,0xFE,0xF0,0xC0,0x80,0xF8,
0x3F,0x07,0x00,0x00,0x00,0x00,
0x40,0x60,0x78,0x7F,0x7F,0x60,0x40,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0x1F,0x7F,0x7F,0x7F,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,

// O (79): w=22, h=23
0x55,0x0E,
0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0x7C,0x1E,0x0E,
0x06,0x03,0x03,0x03,0x03,0x03,0x07,0xFE,0xFE,0xFC,
0xF8,0xE0,
0xF0,0xFC,0xFF,0xFF,0xFF,0x1F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0xFF,0xFF,0xFF,
0x1F,0x07,
0x03,0x0F,0x1F,0x3F,0x3F,0x70,0x60,0x60,0x60,0x60,
0x60,0x30,0x38,0x3C,0x1F,0x0F,0x07,0x03,0x01,0x00,
0x00,0x00,

// P (80): w=21, h=23
0x54,0x02,
0x00,0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0xFF,0xFF,
0xFF,0x0F,0x03,0x03,0x03,0x87,0xFF,0xFF,0xFE,0xFE,
0x7C,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,
0x08,0x08,0x0C,0x0C,0x0E,0x0F,0x07,0x07,0x03,0x01,
0x00,
0x40,0x40,0x60,0x7C,0x7F,0x7F,0x7F,0x7F,0x61,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// Q (81): w=22, h=30
0x75,0x0F,
0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0x7C,0x1E,0x0E,
0x06,0x03,0x03,0x03,0x03,0x03,0x07,0xFE,0xFE,0xFC,
0xF8,0xE0,
0xF0,0xFC,0xFF,0xFF,0xFF,0x1F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0xFF,0xFF,0xFF,
0x1F,0x07,
0x03,0x0F,0x1F,0x3F,0x3F,0x70,0xE0,0xE0,0x60,0x60,
0x60,0x30,0x38,0x3C,0x1F,0x0F,0x07,0x03,0x01,0x00,
0x00,0x00,
0x20,0x30,0x18,0x1C,0x0E,0x0F,0x0F,0x1E,0x1E,0x1C,
0x1C,0x3C,0x3C,0x38,0x38,0x38,0x18,0x1C,0x0C,0x04,
0x02,0x00,

// R (82): w=21, h=23
0x54,0x04,
0x00,0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0xFF,0xFF,
0xFF,0x0F,0x03,0x03,0x03,0x87,0xFF,0xFF,0xFE,0xFE,
0x7C,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,
0x38,0xF8,0xFC,0xFC,0xFE,0xEF,0x87,0x07,0x03,0x01,
0x00,
0x40,0x40,0x60,0x7C,0x7F,0x7F,0x7F,0x7F,0x41,0x40,
0x00,0x00,0x03,0x1F,0x7F,0x7F,0x7F,0x7C,0x70,0x40,
0x40,

// S (83): w=17, h=23
0x50,0x0E,
0x00,0x00,0xF0,0xFC,0xFE,0xFE,0xEF,0x87,0x03,0x03,
0x03,0x03,0x07,0x0E,0x7C,0x3E,0x07,
0x00,0x00,0x00,0x03,0x07,0x0F,0x1F,0x1F,0x3F,0x7F,
0xFE,0xFC,0xF8,0xF0,0xC0,0x00,0x00,
0x7F,0x7E,0x38,0x70,0x60,0x60,0x60,0x60,0x60,0x70,
0x78,0x3F,0x3F,0x1F,0x07,0x00,0x00,

// T (84): w=19, h=23
0x52,0x13,
0x00,0x78,0x3F,0x0F,0x03,0x03,0x01,0xF1,0xFF,0xFF,
0xFF,0xFF,0x0F,0x01,0x01,0x03,0x7F,0x1F,0x07,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0x7F,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x40,0x60,0x78,0x7F,0x7F,0x7F,0x7F,0x67,0x40,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=23, h=23
0x56,0x13,
0x00,0x01,0xE1,0xFF,0xFF,0xFF,0xFF,0x3F,0x07,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xF3,0x7F,
0x0F,0x03,0x01,
0xE0,0xFE,0xFF,0xFF,0xFF,0x1F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0x1F,0x03,0x00,
0x00,0x00,0x00,
0x07,0x1F,0x3F,0x3F,0x7F,0x78,0x70,0x60,0x60,0x60,
0x60,0x30,0x38,0x1C,0x0F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// V (86): w=21, h=23
0x54,0x13,
0x01,0x01,0x0F,0xFF,0xFF,0xFF,0xFF,0xFB,0x01,0x01,
0x00,0x00,0x00,0x00,0x80,0xE1,0x79,0x1F,0x0F,0x03,
0x01,
0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xF8,0x80,
0xC0,0x70,0x3C,0x0E,0x03,0x01,0x00,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0x01,0x7F,0x7F,0x3F,0x0F,0x07,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// W (87): w=28, h=23
0x5B,0x13,
0x01,0x01,0x1F,0xFF,0xFF,0xFF,0xFF,0xC3,0x01,0x00,
0x00,0x01,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xC1,0xF1,0x1F,0x07,0x03,0x01,
0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0x80,0xF0,
0x3C,0x0F,0x03,0x00,0x3F,0xFF,0xFF,0xFF,0xF8,0xE0,
0x38,0x0E,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0x7F,0x3F,0x0F,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x3F,0x7F,0x1F,0x07,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// X (88): w=24, h=23
0x57,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x1F,0xFF,0xFF,
0xFF,0xFF,0xE1,0x01,0x80,0xC0,0x60,0x31,0x19,0x0F,
0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x7F,
0x7F,0xFF,0xFF,0xFF,0xF1,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x40,0x60,0x70,0x78,0x6C,0x46,0x03,0x01,0x00,0x00,
0x40,0x43,0x7F,0x7F,0x7F,0x7F,0x7C,0x60,0x60,0x40,
0x00,0x00,0x00,0x00,

// Y (89): w=19, h=23
0x52,0x13,
0x01,0x03,0x0F,0x7F,0xFF,0xFF,0xFF,0xE1,0x01,0x00,
0x00,0x80,0xC1,0x71,0x3F,0x0F,0x07,0x03,0x01,
0x00,0x00,0x00,0x00,0xC7,0xFF,0xFF,0xFF,0xFF,0x3C,
0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x40,0x60,0x7C,0x7F,0x7F,0x7F,0x7F,0x43,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=20, h=23
0x53,0x03,
0x00,0x00,0x00,0x38,0x1F,0x0F,0x07,0x03,0x03,0x03,
0xC1,0xE1,0xF1,0xFD,0xFF,0x7F,0x3F,0x0F,0x07,0x01,
0x00,0x00,0x00,0x00,0x80,0xC0,0xF0,0xF8,0xFE,0xFF,
0x7F,0x1F,0x0F,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x60,0x70,0x7C,0x7E,0x7F,0x7F,0x5F,0x47,0x43,0x40,
0x40,0x60,0x60,0x60,0x70,0x78,0x7C,0x0E,0x00,0x00,

// bracketleft (91): w=13, h=28
0xEC,0x00,0x52,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0x0F,0x03,
0x01,0x01,0x01,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x01,0x00,0x00,
0x00,0x00,0x00,
0x00,0xF0,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x0E,0x0F,0x0F,0x0F,0x08,0x08,0x08,0x00,0x00,0x00,
0x00,0x00,0x00,

// backslash (92): w=15, h=23
0xCE,0x00,0x40,
0x01,0x07,0x1F,0x7F,0xFC,0xF0,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x3F,0xFC,0xF0,
0xC0,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x0F,0x3F,0x7E,0x78,0x60,

// bracketright (93): w=13, h=28
0xEC,0x00,0x16,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xE1,0xFF,
0xFF,0x7F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFE,0xFF,0x7F,
0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xFC,0xFF,0xFF,0x0F,0x00,
0x00,0x00,0x00,
0x08,0x08,0x08,0x0C,0x0F,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,

// asciicircum (94): w=15, h=13
0x2E,0x16,
0x00,0x00,0xC0,0xF0,0xFC,0x7F,0x1F,0x07,0x1F,0x7F,
0xFC,0xF0,0xC0,0x00,0x00,
0x1C,0x1F,0x1F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x01,0x07,0x1F,0x1F,0x1C,

// underscore (95): w=17, h=1
0x90,0x1A,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=7, h=6
0x06,0x16,
0x07,0x07,0x0F,0x0E,0x1C,0x38,0x30,

// a (97): w=14, h=15
0xAD,0x08,0x47,
0xC0,0xF0,0xF8,0xFC,0x7E,0x0E,0x07,0x03,0x03,0xE6,
0xFC,0xFF,0xFF,0x0F,
0x0F,0x3F,0x3F,0x7F,0x70,0x70,0x30,0x18,0x0F,0x7F,
0x7F,0x37,0x18,0x0C,

// b (98): w=14, h=23
0x4D,0x0F,
0x00,0x00,0x02,0xE2,0xFF,0xFF,0x7F,0x07,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0xF0,0xFF,0xFF,0xFF,0x0F,0x06,0x03,0x03,0x07,
0xFF,0xFE,0xFE,0xF8,
0x3F,0x7F,0x7F,0x7F,0x60,0x60,0x60,0x30,0x3C,0x1F,
0x0F,0x07,0x03,0x00,

// c (99): w=13, h=15
0xAC,0x08,0x55,
0x80,0xE0,0xF8,0xFC,0x7C,0x1E,0x06,0x03,0x03,0x0F,
0x1F,0x1F,0x0E,
0x0F,0x3F,0x3F,0x7F,0x70,0x60,0x60,0x20,0x30,0x18,
0x0C,0x00,0x00,

// d (100): w=17, h=23
0x50,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0xE2,0xFE,0xFF,0xFF,0x0F,
0xC0,0xF0,0xF8,0xFC,0x7E,0x1E,0x07,0x07,0x03,0x03,
0xE6,0xFF,0xFF,0xFF,0x1F,0x00,0x00,
0x0F,0x3F,0x3F,0x7F,0x70,0x70,0x70,0x30,0x18,0x3E,
0x7F,0x7F,0x37,0x18,0x08,0x00,0x00,

// e (101): w=12, h=15
0xAB,0x08,0x56,
0x80,0xE0,0xF8,0xFC,0x3E,0x8E,0x87,0xC3,0xF3,0x7F,
0x3F,0x1E,
0x0F,0x3F,0x3F,0x7F,0x71,0x61,0x60,0x20,0x30,0x18,
0x0C,0x00,

// f (102): w=20, h=30
0xF3,0x00,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0xF0,0xFC,0xFE,0x1F,0x03,0x01,0x0F,0x0F,0x06,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xC2,0xFE,
0xFF,0xFF,0x7F,0x07,0x02,0x02,0x02,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0xFF,0xFF,
0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x18,0x3C,0x3C,0x20,0x30,0x3E,0x1F,0x0F,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// g (103): w=18, h=22
0xD1,0x08,0x34,
0x00,0x00,0x00,0xF0,0xFC,0xFE,0xFE,0x9F,0x07,0x03,
0x83,0x83,0xC7,0xFE,0xFE,0x3E,0x06,0x06,
0x00,0x00,0x00,0xB8,0xFD,0xFF,0xF7,0xF3,0xF3,0xE3,
0xE3,0xE1,0xC1,0x01,0x00,0x00,0x00,0x00,
0x0E,0x1F,0x1F,0x39,0x30,0x20,0x20,0x20,0x20,0x31,
0x39,0x1F,0x1F,0x0F,0x00,0x00,0x00,0x00,

// h (104): w=16, h=23
0x4F,0x0F,
0x00,0x00,0x02,0x86,0xF6,0xFE,0xFF,0xFF,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xF8,0xFF,0xFF,0xFF,0x3F,0x08,0x04,0x06,
0xE3,0xFF,0xFF,0xFF,0x1E,0x00,
0x78,0x7F,0x7F,0x7F,0x07,0x00,0x00,0x00,0x38,0x7F,
0x7F,0x7F,0x67,0x30,0x18,0x0C,

// i (105): w=8, h=23
0x47,0x0E,
0x00,0x00,0x00,0x00,0x0E,0x1F,0x1F,0x0E,
0x02,0xE2,0xFE,0xFF,0xFF,0x1F,0x03,0x00,
0x3E,0x7F,0x7F,0x7F,0x31,0x18,0x0C,0x00,

// j (106): w=14, h=30
0xED,0x00,0x04,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0E,0x1F,0x1F,0x0E,
0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xE2,0xFE,0xFF,
0xFF,0x1F,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0x3F,
0x01,0x00,0x00,0x00,
0x18,0x3C,0x38,0x30,0x3E,0x1F,0x0F,0x07,0x01,0x00,
0x00,0x00,0x00,0x00,

// k (107): w=16, h=23
0x4F,0x0D,
0x00,0x00,0x00,0x02,0xE6,0xFE,0xFF,0xFF,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xFC,0xFF,0xFF,0x9F,0xC0,0xE0,0x30,
0x1D,0x0F,0x07,0x03,0x01,0x01,
0x60,0x7C,0x7F,0x7F,0x0F,0x01,0x03,0x0F,0x3F,0x7F,
0x7C,0x70,0x60,0x30,0x18,0x00,

// l (108): w=9, h=23
0x48,0x0D,
0x00,0x00,0x02,0x86,0xF6,0xFE,0xFF,0x7F,0x0F,
0x00,0xC0,0xF8,0xFF,0xFF,0x7F,0x07,0x00,0x00,
0x3C,0x7F,0x7F,0x7F,0x33,0x18,0x0C,0x00,0x00,

// m (109): w=23, h=15
0xB6,0x08,0x56,
0x02,0x02,0xFE,0xFF,0xFF,0xFF,0x1C,0x0E,0x06,0x03,
0xE7,0xFF,0xFF,0xFF,0x1C,0x0E,0x06,0x03,0xE7,0xFF,
0xFF,0xFF,0x1E,
0x78,0x7F,0x7F,0x7F,0x07,0x00,0x00,0x00,0x78,0x7F,
0x7F,0x7F,0x07,0x00,0x00,0x00,0x38,0x7F,0x7F,0x7F,
0x67,0x30,0x18,

// n (110): w=15, h=15
0xAE,0x08,0x57,
0x02,0x02,0xFA,0xFF,0xFF,0xFF,0x13,0x08,0x0C,0x06,
0xE7,0xFF,0xFF,0xFF,0x1E,
0x78,0x7F,0x7F,0x7F,0x07,0x00,0x00,0x00,0x38,0x7F,
0x7F,0x7F,0x67,0x30,0x18,

// o (111): w=15, h=15
0xAE,0x08,0x55,
0x80,0xE0,0xF0,0xFC,0xFC,0x3E,0x06,0x03,0x01,0x01,
0xC3,0xFF,0xFE,0xFE,0xF8,
0x0F,0x3F,0x3F,0x7F,0x61,0x40,0x40,0x60,0x70,0x3E,
0x3F,0x1F,0x07,0x03,0x00,

// p (112): w=19, h=22
0xD2,0x08,0x15,
0x00,0x00,0x00,0x00,0x02,0x02,0xFE,0xFF,0xFF,0xFF,
0x1F,0x08,0x06,0x03,0xC7,0xFF,0xFF,0xFE,0xFC,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0x6F,0x40,
0x60,0x60,0x30,0x3E,0x1F,0x0F,0x07,0x03,0x00,
0x20,0x20,0x38,0x3F,0x3F,0x3F,0x3F,0x20,0x20,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=15, h=22
0xCE,0x08,0x46,
0x80,0xE0,0xF0,0xF8,0xFC,0x3E,0x06,0x03,0x01,0x83,
0xFF,0xFE,0xFF,0xFF,0x0F,
0x0F,0x3F,0x3F,0x7F,0x61,0x60,0x30,0xD8,0xFC,0xFF,
0xFF,0x7F,0x07,0x00,0x00,
0x00,0x00,0x00,0x20,0x20,0x30,0x3C,0x3F,0x3F,0x3F,
0x27,0x20,0x00,0x00,0x00,

// r (114): w=14, h=15
0xAD,0x08,0x44,
0x00,0x02,0x82,0xFE,0xFF,0xFF,0xFF,0x33,0x18,0x0C,
0x0E,0x1F,0x1F,0x0E,
0x40,0x78,0x7F,0x7F,0x7F,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// s (115): w=11, h=15
0xAA,0x08,0x56,
0x00,0x00,0x3C,0xFE,0xFF,0xFB,0xE1,0xC3,0x83,0x0E,
0x1F,
0x7C,0x38,0x60,0x60,0x41,0x67,0x7F,0x3F,0x1F,0x0E,
0x00,

// t (116): w=9, h=20
0x48,0x6D,
0x40,0x60,0xF0,0xF0,0xF8,0xFC,0x7E,0x67,0x60,
0xC0,0xFC,0xFF,0xFF,0x3F,0x03,0x80,0x00,0x00,
0x07,0x0F,0x0F,0x0F,0x06,0x03,0x01,0x00,0x00,

// u (117): w=15, h=15
0xAE,0x08,0x57,
0x02,0xC2,0xFE,0xFF,0xFF,0x3F,0x03,0x00,0x00,0xC0,
0xF8,0xFF,0xFF,0x7F,0x07,
0x3C,0x7F,0x7F,0x7F,0x61,0x20,0x30,0x18,0x0F,0x7F,
0x7F,0x7F,0x63,0x30,0x18,

// v (118): w=14, h=15
0xAD,0x08,0x55,
0x02,0x02,0x3E,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x80,
0xE6,0x7F,0x1F,0x06,
0x00,0x00,0x00,0x7F,0x7F,0x3F,0x1F,0x0C,0x06,0x03,
0x01,0x00,0x00,0x00,

// w (119): w=21, h=15
0xB4,0x08,0x55,
0x02,0x02,0x0E,0xFF,0xFF,0xFF,0xF0,0x00,0xC0,0x70,
0xB8,0xFE,0xFF,0xF0,0x00,0x00,0x80,0xE6,0x7F,0x1F,
0x0E,
0x00,0x00,0x00,0x7F,0x7F,0x1F,0x07,0x03,0x00,0x00,
0x7F,0x7F,0x3F,0x1F,0x0C,0x07,0x03,0x00,0x00,0x00,
0x00,

// x (120): w=16, h=15
0xAF,0x08,0x45,
0x00,0x00,0x02,0x02,0x03,0x07,0x3F,0xFF,0xFE,0xF0,
0x18,0x0C,0x06,0x0F,0x0F,0x06,
0x30,0x78,0x78,0x30,0x18,0x0C,0x07,0x03,0x3F,0x7F,
0x7F,0x78,0x30,0x18,0x08,0x00,

// y (121): w=16, h=22
0xCF,0x08,0x26,
0x00,0x00,0x00,0x02,0x02,0x0E,0xFF,0xFF,0xFF,0xF0,
0x00,0x00,0x06,0xCF,0x7F,0x1E,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,
0x78,0x1C,0x07,0x01,0x00,0x00,
0x18,0x3C,0x3C,0x38,0x18,0x18,0x0C,0x07,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=14, h=17
0xCD,0x08,0x35,
0x00,0x00,0x0C,0x07,0x07,0x07,0x87,0xC7,0x67,0x37,
0x1F,0x0F,0x07,0x03,
0xE0,0x70,0x78,0x3C,0x76,0xF3,0xE1,0xE0,0xC0,0x80,
0xE0,0xF0,0x60,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,

// braceleft (123): w=12, h=29
0x6B,0x12,
0x00,0x00,0x00,0x00,0xC0,0xFC,0xFE,0x3F,0x07,0x01,
0x00,0x00,
0x10,0x30,0xF8,0xDC,0x9F,0x0F,0x03,0x00,0x00,0x00,
0x00,0x00,
0x80,0xFC,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x07,0x0F,0x0F,0x38,0x30,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// bar (124): w=3, h=23
0x42,0x16,
0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,
0x7F,0x7F,0x7F,

// braceright (125): w=12, h=29
0xEB,0x00,0x27,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFF,
0xFF,0x1E,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xCF,0xFF,0xFF,
0x73,0x20,
0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0x3F,0x03,0x00,
0x00,0x00,
0x30,0x30,0x38,0x0E,0x0F,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,

// asciitilde (126): w=17, h=6
0x90,0x0B,0x56,
0x08,0x1C,0x1E,0x0E,0x07,0x07,0x07,0x0F,0x1E,0x3C,
0x38,0x38,0x38,0x1C,0x1E,0x0E,0x04

};
// 4653 bytes
// 4843 bytes with FAST_FONT_INDEX