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

const char font_lutRS19[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD3,0x00,
0xDF,0x00,
0x0B,0x01,
0x2B,0x01,
0x5D,0x01,
0x8C,0x01,
0x93,0x01,
0xB4,0x01,
0xD5,0x01,
0xEF,0x01,
0x0D,0x02,
0x14,0x02,
0x24,0x02,
0x2B,0x02,
0x57,0x02,
0x80,0x02,
0xA9,0x02,
0xCC,0x02,
0xEF,0x02,
0x1B,0x03,
0x39,0x03,
0x5F,0x03,
0x82,0x03,
0xA8,0x03,
0xCE,0x03,
0xD9,0x03,
0xE8,0x03,
0x04,0x04,
0x14,0x04,
0x30,0x04,
0x56,0x04,
0x85,0x04,
0xB4,0x04,
0xDA,0x04,
0x03,0x05,
0x2C,0x05,
0x52,0x05,
0x78,0x05,
0xA1,0x05,
0xC7,0x05,
0xEA,0x05,
0x0B,0x06,
0x34,0x06,
0x5A,0x06,
0x83,0x06,
0xA9,0x06,
0xD5,0x06,
0xFB,0x06,
0x2A,0x07,
0x53,0x07,
0x79,0x07,
0xA8,0x07,
0xCE,0x07,
0xFD,0x07,
0x2C,0x08,
0x5B,0x08,
0x8D,0x08,
0xB6,0x08,
0xD1,0x08,
0xFD,0x08,
0x18,0x09,
0x34,0x09,
0x47,0x09,
0x50,0x09,
0x6C,0x09,
0x92,0x09,
0xAC,0x09,
0xD2,0x09,
0xEC,0x09,
0x18,0x0A,
0x3E,0x0A,
0x61,0x0A,
0x7C,0x0A,
0x9D,0x0A,
0xC6,0x0A,
0xE1,0x0A,
0xFF,0x0A,
0x17,0x0B,
0x33,0x0B,
0x59,0x0B,
0x7F,0x0B,
0x97,0x0B,
0xAF,0x0B,
0xD5,0x0B,
0xED,0x0B,
0x0B,0x0C,
0x2B,0x0C,
0x47,0x0C,
0x73,0x0C,
0x8D,0x0C,
0xAD,0x0C,
0xB6,0x0C,
0xD6,0x0C,

// space (32): w=1, h=1
0x80,0x12,0x4F,
0x00,

// exclam (33): w=4, h=19
0xC3,0x00,0xAB,
0x00,0xFF,0xFF,0xFF,
0x00,0x3F,0x3F,0x01,
0x07,0x07,0x07,0x07,

// quotedbl (34): w=10, h=6
0x09,0x1D,
0x07,0x3F,0x3F,0x00,0x00,0x00,0x00,0x3F,0x3F,0x07,

// numbersign (35): w=14, h=19
0x4D,0x0F,
0x00,0xC0,0xC0,0xC0,0xC0,0xFC,0xFF,0xC3,0xC0,0xE0,
0xFF,0xDF,0xC1,0xC0,
0x30,0x30,0xB0,0xF8,0x7F,0x37,0x30,0xF0,0xFE,0x3F,
0x31,0x30,0x30,0x00,
0x00,0x04,0x07,0x07,0x00,0x00,0x06,0x07,0x03,0x00,
0x00,0x00,0x00,0x00,

// dollar (36): w=10, h=21
0x49,0x1D,
0x7C,0xFE,0xFF,0x83,0xFF,0xFF,0x03,0x03,0x03,0x06,
0x00,0x00,0x01,0x03,0xFF,0xFF,0x0E,0xFC,0xF8,0xF0,
0x03,0x06,0x06,0x06,0x3F,0x3F,0x06,0x07,0x03,0x00,

// percent (37): w=16, h=19
0x4F,0x08,
0x7C,0xFE,0x83,0x01,0x01,0x83,0xFE,0x7C,0x80,0xC0,
0xF0,0x38,0x1C,0x0F,0x03,0x01,
0x00,0x00,0x81,0xC1,0xE1,0x79,0x1C,0x0F,0xE3,0xF1,
0x18,0x08,0x08,0x18,0xF0,0xE0,
0x04,0x06,0x07,0x01,0x00,0x00,0x00,0x00,0x01,0x03,
0x06,0x04,0x04,0x06,0x03,0x01,

// ampersand (38): w=15, h=19
0x4E,0x09,
0x00,0x00,0x00,0x3C,0xFE,0xFF,0x83,0xC3,0xFF,0x7E,
0x3C,0x00,0x00,0x00,0x00,
0xF8,0xFE,0xFE,0x87,0x03,0x07,0x1F,0x3F,0xFC,0xF0,
0xE0,0xE0,0xFE,0x3E,0x0E,
0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x06,0x07,0x03,
0x01,0x07,0x06,0x04,0x04,

// quotesingle (39): w=4, h=7
0x83,0x00,0xAB,
0x0F,0x7F,0x7F,0x0F,

// parenleft (40): w=10, h=23
0xC9,0x00,0x87,
0x80,0xE0,0xF8,0xFC,0x3C,0x0E,0x06,0x07,0x03,0x03,
0x7F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x07,0x0F,0x1C,0x18,0x30,0x30,0x60,0x60,

// parenright (41): w=10, h=23
0xC9,0x00,0x69,
0x03,0x03,0x06,0x06,0x0E,0x3C,0xF8,0xF0,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x7F,
0x60,0x60,0x30,0x30,0x38,0x1E,0x0F,0x07,0x03,0x00,

// asterisk (42): w=12, h=11
0x2B,0x16,
0x10,0x18,0x38,0xB0,0xD0,0x8F,0x8F,0xD0,0xB0,0x38,
0x18,0x10,
0x00,0x02,0x03,0x07,0x01,0x00,0x00,0x01,0x07,0x03,
0x02,0x00,

// plus (43): w=14, h=14
0x2D,0xAF,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,
0xC0,0xC0,0xC0,0xC0,
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,
0x00,0x00,0x00,0x00,

// comma (44): w=4, h=8
0x83,0x0F,0xAB,
0x8F,0xCF,0x7F,0x3F,

// hyphen (45): w=13, h=2
0x8C,0x0B,0x57,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,

// period (46): w=4, h=4
0x83,0x0F,0xAB,
0x0F,0x0F,0x0F,0x0F,

// slash (47): w=14, h=23
0x4D,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,
0x78,0x1E,0x07,0x01,
0x00,0x00,0x00,0x00,0xC0,0xF0,0x7C,0x1F,0x07,0x01,
0x00,0x00,0x00,0x00,
0x40,0x70,0x3C,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// zero (48): w=13, h=19
0x4C,0x10,
0xE0,0xF8,0xFC,0x1E,0x07,0x03,0x03,0x03,0x07,0x1E,
0xFC,0xF8,0xE0,
0x3F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0xC0,
0xFF,0xFF,0x3F,
0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x07,0x03,
0x01,0x00,0x00,

// one (49): w=13, h=19
0x4C,0x15,
0x0C,0x0C,0x06,0x06,0x06,0xFE,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,
0x06,0x06,0x06,0x06,0x06,0x07,0x07,0x07,0x06,0x06,
0x06,0x06,0x06,

// two (50): w=11, h=19
0x4A,0x17,
0x06,0x06,0x03,0x03,0x03,0x03,0x03,0x87,0xFE,0xFC,
0x78,
0x00,0xC0,0xE0,0xF0,0x38,0x1C,0x0E,0x07,0x03,0x01,
0x00,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,

// three (51): w=11, h=19
0x4A,0x1C,
0x06,0x07,0x03,0x03,0x03,0x03,0x83,0x87,0xFE,0x7E,
0x3C,
0x00,0x00,0x03,0x03,0x03,0x03,0x07,0x8E,0xFE,0xFC,
0xF8,
0x07,0x06,0x06,0x06,0x06,0x06,0x07,0x03,0x03,0x01,
0x00,

// four (52): w=14, h=19
0x4D,0x0F,
0x00,0x00,0x00,0x80,0xE0,0x70,0x38,0x0E,0xFF,0xFF,
0xFF,0x00,0x00,0x00,
0x38,0x3C,0x3F,0x33,0x31,0x30,0x30,0x30,0xFF,0xFF,
0xFF,0x30,0x30,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x07,0x00,0x00,0x00,

// five (53): w=9, h=19
0xC8,0x00,0x88,
0xFF,0xFF,0x83,0x83,0x83,0x03,0x03,0x03,0x03,
0x01,0x01,0x01,0x01,0x03,0x87,0xFF,0xFE,0xF8,
0x07,0x06,0x06,0x06,0x06,0x07,0x03,0x01,0x00,

// six (54): w=12, h=19
0x4B,0x16,
0xC0,0xF8,0xFC,0x1E,0x06,0x87,0x83,0x83,0x83,0x03,
0x06,0x00,
0x3F,0xFF,0xFF,0x86,0x01,0x01,0x01,0x01,0x07,0xFF,
0xFF,0x7C,
0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x07,0x03,
0x01,0x00,

// seven (55): w=11, h=19
0x4A,0x1C,
0x07,0x07,0x07,0x07,0x07,0x07,0xC7,0xE7,0x7F,0x1F,
0x07,
0x00,0x00,0xC0,0xF0,0xFC,0x1F,0x07,0x01,0x00,0x00,
0x00,
0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// eight (56): w=12, h=19
0x4B,0x16,
0x00,0x7C,0xFE,0xFE,0xC7,0x83,0x03,0x83,0xC7,0x7E,
0x3C,0x00,
0xF0,0xF8,0xFC,0x06,0x03,0x03,0x07,0x0F,0x1E,0xFE,
0xFC,0xF0,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x07,0x03,
0x01,0x00,

// nine (57): w=12, h=19
0x4B,0x16,
0xF0,0xFC,0xFE,0x0F,0x03,0x03,0x03,0x07,0x0E,0xFE,
0xFC,0xE0,
0x01,0x07,0x07,0x0F,0x0C,0x0C,0x0C,0x04,0xC3,0xFF,
0xFF,0x1F,
0x00,0x03,0x06,0x06,0x06,0x06,0x07,0x03,0x03,0x01,
0x00,0x00,

// colon (58): w=4, h=14
0xA3,0x05,0xAB,
0x0F,0x0F,0x0F,0x0F,
0x3C,0x3C,0x3C,0x3C,

// semicolon (59): w=4, h=18
0xC3,0x05,0xAB,
0x0F,0x0F,0x0F,0x0F,
0x3C,0x3C,0xFC,0xFC,
0x02,0x03,0x01,0x00,

// less (60): w=13, h=14
0x2C,0xB0,
0x40,0xC0,0xC0,0xE0,0xE0,0x30,0x38,0x18,0x1C,0x0C,
0x0E,0x06,0x03,
0x00,0x00,0x00,0x01,0x01,0x03,0x07,0x06,0x0E,0x0C,
0x1C,0x18,0x38,

// equal (61): w=13, h=7
0x8C,0x09,0x57,
0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,
0x63,0x63,0x63,

// greater (62): w=13, h=14
0x2C,0xB0,
0x03,0x06,0x0E,0x0C,0x1C,0x18,0x38,0x30,0xE0,0xE0,
0xC0,0xC0,0x80,
0x38,0x18,0x1C,0x0C,0x0E,0x06,0x07,0x03,0x01,0x01,
0x00,0x00,0x00,

// question (63): w=12, h=19
0x4B,0x16,
0x1E,0x1F,0x03,0x03,0x03,0x03,0x03,0x83,0xC7,0xFE,
0x7E,0x3C,
0x00,0x00,0x00,0x38,0x3C,0x3E,0x07,0x03,0x01,0x00,
0x00,0x00,
0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,

// at (64): w=15, h=19
0x4E,0x0E,
0xC0,0xF0,0x3C,0x0C,0x06,0x07,0xC3,0x63,0x13,0x13,
0x17,0xFE,0xFC,0x00,0x00,
0x3F,0xFF,0xE0,0x80,0x00,0x1F,0x7F,0x60,0x60,0x38,
0x0E,0x7F,0x7F,0x60,0x60,
0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x06,0x06,
0x03,0x00,0x00,0x00,0x00,

// A (65): w=15, h=19
0x4E,0x09,
0x00,0x00,0x00,0x00,0xE0,0xFC,0x3F,0x1F,0xFF,0xFC,
0xE0,0x00,0x00,0x00,0x00,
0x00,0xC0,0xF8,0x7F,0x3F,0x31,0x30,0x30,0x30,0x37,
0x3F,0xFF,0xF8,0xC0,0x00,
0x06,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x07,0x07,0x06,

// B (66): w=12, h=19
0x4B,0x16,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x83,0xC7,0xFF,0xFE,
0x7C,0x00,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x07,0x0C,0xFC,
0xF8,0xF0,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x07,0x03,
0x03,0x00,

// C (67): w=13, h=19
0x4C,0x10,
0xC0,0xF0,0xFC,0x3E,0x0E,0x07,0x03,0x03,0x03,0x03,
0x03,0x07,0x06,
0x1F,0x7F,0xFF,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x06,0x06,0x06,
0x06,0x06,0x03,

// D (68): w=13, h=19
0x4C,0x15,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x07,0x07,0x1E,
0xFE,0xF8,0xE0,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,
0xFF,0xFF,0x3F,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x07,0x03,0x03,
0x01,0x00,0x00,

// E (69): w=12, h=19
0x4B,0x1B,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x00,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x00,0x00,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x06,

// F (70): w=12, h=19
0x4B,0x1B,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,
0xFF,0xFF,0xFF,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x02,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// G (71): w=13, h=19
0x4C,0x10,
0xC0,0xF0,0xFC,0x3E,0x0E,0x07,0x03,0x03,0x03,0x03,
0x03,0x03,0x06,
0x1F,0x7F,0xFF,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,
0xFC,0xFC,0xFC,
0x00,0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x06,
0x07,0x07,0x03,

// H (72): w=12, h=19
0x4B,0x16,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0xFF,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x03,0xFF,
0xFF,0xFF,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x07,
0x07,0x07,

// I (73): w=11, h=19
0x4A,0x17,
0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x03,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,
0x06,0x06,0x06,0x06,0x07,0x07,0x07,0x06,0x06,0x06,
0x06,

// J (74): w=10, h=19
0xC9,0x00,0x69,
0x00,0x03,0x03,0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x03,0x06,0x06,0x06,0x06,0x06,0x07,0x03,0x01,0x00,

// K (75): w=13, h=19
0x4C,0x15,
0xFF,0xFF,0xFF,0x00,0x80,0xC0,0xF0,0x38,0x1E,0x07,
0x03,0x01,0x00,
0xFF,0xFF,0xFF,0x06,0x0F,0x1F,0x7C,0xF8,0xF0,0xC0,
0x80,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x07,
0x07,0x07,0x04,

// L (76): w=12, h=19
0x4B,0x16,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x06,

// M (77): w=13, h=19
0x4C,0x10,
0xFF,0xFF,0x3F,0xFC,0xC0,0x00,0x00,0x00,0xC0,0xFC,
0x3F,0xFF,0xFF,
0xFF,0xFF,0x00,0x03,0x3F,0xFC,0xC0,0xFC,0x3F,0x03,
0x00,0xFF,0xFF,
0x07,0x07,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,
0x00,0x07,0x07,

// N (78): w=12, h=19
0x4B,0x16,
0xFF,0xFF,0x3F,0xFC,0xF8,0xE0,0x80,0x00,0x00,0x00,
0xFF,0xFF,
0xFF,0xFF,0x00,0x00,0x03,0x0F,0x3F,0x7E,0xF8,0xE0,
0xFF,0xFF,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,
0x07,0x07,

// O (79): w=14, h=19
0x4D,0x0F,
0xC0,0xF8,0xFC,0x1E,0x07,0x03,0x03,0x03,0x03,0x07,
0x1E,0xFC,0xF8,0xC0,
0x1F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0xFF,0xFF,0x1F,
0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x06,0x07,
0x03,0x01,0x00,0x00,

// P (80): w=12, h=19
0x4B,0x1B,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x07,0xFE,
0xFE,0xFC,
0xFF,0xFF,0xFF,0x0C,0x0C,0x0C,0x0C,0x0E,0x07,0x07,
0x03,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// Q (81): w=15, h=23
0x4E,0x0E,
0xC0,0xF8,0xFC,0x1E,0x07,0x03,0x03,0x03,0x03,0x07,
0x1E,0xFC,0xF8,0xC0,0x00,
0x1F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0xFF,0xFF,0x3F,0x00,
0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x0E,0x1F,
0x1B,0x31,0x70,0x60,0x20,

// R (82): w=13, h=19
0x4C,0x15,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x87,0xFE,0xFE,
0x7C,0x00,0x00,
0xFF,0xFF,0xFF,0x06,0x06,0x0E,0x3F,0xFF,0xF1,0xE1,
0x80,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x07,
0x07,0x07,0x04,

// S (83): w=12, h=19
0x4B,0x16,
0x78,0xFE,0xFE,0xC7,0x83,0x83,0x03,0x03,0x03,0x06,
0x00,0x00,
0x00,0x00,0x01,0x01,0x03,0x03,0x07,0x0F,0x0E,0xFE,
0xFC,0xF8,
0x03,0x07,0x06,0x06,0x06,0x06,0x06,0x07,0x07,0x03,
0x01,0x00,

// T (84): w=15, h=19
0x4E,0x09,
0x03,0x03,0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,0x03,
0x03,0x03,0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,

// U (85): w=12, h=19
0x4B,0x16,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,
0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x80,
0xFF,0xFF,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x06,0x03,
0x01,0x00,

// V (86): w=15, h=19
0x4E,0x09,
0x03,0x3F,0xFF,0xFC,0xE0,0x00,0x00,0x00,0x00,0x00,
0x80,0xF0,0xFE,0x1F,0x03,
0x00,0x00,0x01,0x0F,0x7F,0xFF,0xF8,0xC0,0xE0,0xFC,
0x3F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x07,0x01,
0x00,0x00,0x00,0x00,0x00,

// W (87): w=15, h=19
0x4E,0x09,
0x1F,0xFF,0xE0,0x00,0x00,0xF0,0xFE,0xFE,0xFE,0xE0,
0x00,0x00,0xF0,0xFF,0x07,
0x00,0x3F,0xFF,0xC0,0xF8,0xFF,0x01,0x00,0x7F,0xFF,
0xE0,0xF8,0xFF,0x03,0x00,
0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x07,
0x07,0x07,0x00,0x00,0x00,

// X (88): w=15, h=19
0x4E,0x09,
0x01,0x03,0x0F,0x1F,0x7E,0xF8,0xE0,0xC0,0xC0,0xF0,
0x38,0x1E,0x07,0x03,0x01,
0x00,0x00,0x80,0xC0,0xF0,0x3D,0x1F,0x0F,0x3F,0x7E,
0xF8,0xE0,0xC0,0x00,0x00,
0x04,0x06,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x07,0x07,0x04,

// Y (89): w=16, h=19
0x4F,0x08,
0x01,0x07,0x1F,0x7E,0xFC,0xF0,0xC0,0x80,0x00,0x80,
0xE0,0x78,0x1C,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0x03,
0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=13, h=19
0x4C,0x10,
0x00,0x03,0x03,0x03,0x03,0x03,0x83,0xE3,0xF3,0xFF,
0x3F,0x1F,0x07,
0x00,0xC0,0xE0,0xF8,0x7C,0x3F,0x0F,0x07,0x01,0x00,
0x00,0x00,0x00,
0x07,0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x06,0x06,

// bracketleft (91): w=8, h=23
0xC7,0x00,0xA7,
0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x7F,0x7F,0x60,0x60,0x60,0x60,0x60,0x60,

// backslash (92): w=14, h=23
0x4D,0x0F,
0x01,0x07,0x1E,0x78,0xF0,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x1F,0x7C,0xF0,0xC0,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,
0x0F,0x3C,0x70,0x40,

// bracketright (93): w=8, h=23
0xC7,0x00,0x6B,
0x03,0x03,0x03,0x03,0x03,0x03,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x60,0x60,0x60,0x60,0x60,0x60,0x7F,0x7F,

// asciicircum (94): w=13, h=15
0x2C,0x10,
0x00,0x00,0x00,0x80,0xF0,0x7C,0x1F,0x7C,0xF0,0x80,
0x00,0x00,0x00,
0x40,0x78,0x3E,0x0F,0x01,0x00,0x00,0x00,0x01,0x0F,
0x3E,0x78,0x40,

// underscore (95): w=16, h=2
0x8F,0x13,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=6, h=4
0x85,0x00,0x9A,
0x01,0x03,0x07,0x0E,0x0C,0x08,

// a (97): w=13, h=14
0x2C,0xB5,
0x00,0x86,0x82,0xC3,0xC3,0xC3,0xC3,0xC7,0xFF,0xFE,
0xFC,0x00,0x00,
0x0E,0x1F,0x3F,0x39,0x30,0x30,0x30,0x18,0x0F,0x3F,
0x3F,0x30,0x30,

// b (98): w=12, h=19
0x4B,0x16,
0xFF,0xFF,0xFF,0x80,0xC0,0x60,0x60,0x60,0xE0,0xC0,
0xC0,0x00,
0xFF,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x81,0xFF,
0xFF,0x7F,
0x07,0x07,0x01,0x03,0x06,0x06,0x06,0x07,0x07,0x03,
0x01,0x00,

// c (99): w=12, h=14
0x2B,0xB6,
0xF0,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x03,0x03,
0x07,0x06,
0x03,0x0F,0x1F,0x1E,0x38,0x38,0x30,0x30,0x30,0x30,
0x30,0x18,

// d (100): w=12, h=19
0x4B,0x16,
0x00,0x80,0xC0,0xE0,0xE0,0x60,0x60,0x40,0x80,0xFF,
0xFF,0xFF,
0xFE,0xFF,0xFF,0x81,0x00,0x00,0x00,0x00,0x80,0xFF,
0xFF,0xFF,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x03,0x01,0x07,
0x07,0x07,

// e (101): w=12, h=14
0x2B,0xB6,
0xF0,0xFC,0xFE,0xCE,0xC7,0xC3,0xC3,0xC3,0xC7,0xFE,
0xFE,0xF8,
0x03,0x0F,0x1F,0x1C,0x38,0x30,0x30,0x30,0x30,0x30,
0x30,0x18,

// f (102): w=14, h=19
0x4D,0x14,
0xC0,0xC0,0xC0,0xC0,0xFC,0xFE,0xFF,0xC7,0xC3,0xC3,
0xC3,0xC3,0xC3,0x06,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// g (103): w=12, h=19
0x4B,0xB6,
0xF0,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x06,0xFC,
0xFF,0xFF,
0x07,0x1F,0x1F,0x3C,0x30,0x30,0x30,0x18,0x0C,0xFF,
0xFF,0x7F,
0x00,0x03,0x07,0x06,0x06,0x06,0x06,0x06,0x07,0x03,
0x01,0x00,

// h (104): w=11, h=19
0x4A,0x17,
0xFF,0xFF,0xFF,0x00,0xC0,0xC0,0xE0,0xE0,0xE0,0xC0,
0x80,
0xFF,0xFF,0xFF,0x03,0x01,0x00,0x00,0x00,0xFF,0xFF,
0xFF,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x07,

// i (105): w=8, h=19
0xC7,0x00,0x6B,
0x60,0x60,0x60,0x60,0x60,0xE7,0xE7,0xE7,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,

// j (106): w=10, h=24
0xC9,0x00,0x69,
0x00,0x60,0x60,0x60,0x60,0x60,0x60,0xE7,0xE7,0xE7,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x60,0xC0,0xC0,0xC0,0xC0,0xC0,0xE0,0x7F,0x7F,0x1F,

// k (107): w=13, h=19
0x4C,0x15,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x80,0xE0,0x60,
0x20,0x00,0x00,
0xFF,0xFF,0xFF,0x18,0x3C,0x7E,0xFF,0xF3,0xC1,0x80,
0x00,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x01,0x03,0x07,
0x07,0x06,0x04,

// l (108): w=8, h=19
0xC7,0x00,0x6B,
0x03,0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,

// m (109): w=14, h=14
0x2D,0xAF,
0xFF,0xFF,0x0C,0x06,0x03,0x03,0xFF,0xFE,0x0C,0x06,
0x03,0x03,0xFF,0xFE,
0x3F,0x3F,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,
0x00,0x00,0x3F,0x3F,

// n (110): w=11, h=14
0x2A,0xB7,
0xFF,0xFF,0xFF,0x18,0x0E,0x06,0x07,0x07,0xFF,0xFE,
0xFC,
0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,
0x3F,

// o (111): w=13, h=14
0x2C,0xB0,
0xF0,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x07,0x0E,
0xFE,0xFC,0xF0,
0x03,0x0F,0x1F,0x1C,0x38,0x30,0x30,0x30,0x38,0x1C,
0x1F,0x0F,0x03,

// p (112): w=12, h=19
0x4B,0xB6,
0xFF,0xFF,0xFF,0x0C,0x06,0x03,0x03,0x03,0x0F,0xFE,
0xFE,0xF8,
0xFF,0xFF,0xFF,0x08,0x10,0x30,0x30,0x38,0x3C,0x1F,
0x0F,0x03,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// q (113): w=12, h=19
0x4B,0xB1,
0xF0,0xFC,0xFE,0x0F,0x07,0x03,0x03,0x03,0x06,0xFC,
0xFF,0xFF,
0x07,0x1F,0x1F,0x3C,0x30,0x30,0x30,0x18,0x0C,0xFF,
0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,
0x07,0x07,

// r (114): w=11, h=14
0x2A,0xBC,
0xFF,0xFF,0xFF,0x0C,0x06,0x06,0x03,0x03,0x03,0x0F,
0x0F,
0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// s (115): w=11, h=14
0x2A,0xB7,
0x3C,0x7E,0x7E,0xF7,0xE3,0xE3,0xC3,0xC3,0xC3,0x86,
0x00,
0x18,0x38,0x30,0x30,0x30,0x30,0x31,0x39,0x1F,0x1F,
0x0F,

// t (116): w=12, h=17
0x4B,0x56,
0x18,0x18,0x18,0xFF,0xFF,0xFF,0x18,0x18,0x18,0x18,
0x18,0x18,
0x00,0x00,0x00,0x7F,0xFF,0xFF,0xC0,0x80,0x80,0x80,
0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,

// u (117): w=11, h=14
0x2A,0xB7,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,
0x0F,0x1F,0x3F,0x38,0x38,0x18,0x1C,0x06,0x3F,0x3F,
0x3F,

// v (118): w=14, h=14
0x2D,0xAF,
0x03,0x1F,0x7F,0xFC,0xF0,0xC0,0x00,0x00,0x00,0xE0,
0xF8,0x3E,0x0F,0x01,
0x00,0x00,0x00,0x01,0x0F,0x3F,0x3E,0x3C,0x1F,0x07,
0x00,0x00,0x00,0x00,

// w (119): w=15, h=14
0x2E,0xA9,
0x07,0xFF,0xFF,0xF0,0x00,0xE0,0xFE,0x1E,0xFE,0xF8,
0x00,0x00,0xF8,0x7F,0x03,
0x00,0x01,0x3F,0x3F,0x3E,0x1F,0x01,0x00,0x01,0x1F,
0x3F,0x3E,0x0F,0x00,0x00,

// x (120): w=13, h=14
0x2C,0xB0,
0x01,0x07,0x0F,0x1F,0x7C,0xF8,0xF0,0xF0,0xBC,0x1E,
0x07,0x03,0x01,
0x20,0x30,0x3C,0x0E,0x07,0x03,0x01,0x07,0x0F,0x3E,
0x3C,0x38,0x20,

// y (121): w=14, h=19
0x4D,0xAF,
0x03,0x0F,0x3F,0xFE,0xF8,0xC0,0x00,0x00,0x80,0xE0,
0xF8,0x3E,0x07,0x01,
0x00,0x00,0x00,0x01,0x07,0xDF,0xFF,0x3C,0x0F,0x03,
0x00,0x00,0x00,0x00,
0x00,0x06,0x06,0x06,0x07,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// z (122): w=12, h=14
0x2B,0xB6,
0x03,0x03,0x03,0x03,0x83,0xC3,0xE3,0x73,0x3F,0x0F,
0x07,0x03,
0x30,0x3C,0x3E,0x37,0x33,0x31,0x30,0x30,0x30,0x30,
0x30,0x30,

// braceleft (123): w=10, h=23
0x49,0x1D,
0x00,0x00,0x00,0x3C,0xFE,0xFF,0xC7,0x03,0x03,0x03,
0x18,0x18,0x18,0x18,0x34,0xF7,0xE3,0x00,0x00,0x00,
0x00,0x00,0x00,0x1C,0x3F,0x7F,0x71,0x60,0x60,0x60,

// bar (124): w=2, h=23
0xC1,0x00,0xBC,
0xFF,0xFF,
0xFF,0xFF,
0x7F,0x7F,

// braceright (125): w=10, h=23
0x49,0x1D,
0x03,0x03,0x03,0x03,0xC7,0xFE,0x7E,0x1C,0x00,0x00,
0x00,0x00,0x00,0x00,0xE3,0xF7,0x3C,0x18,0x18,0x18,
0x60,0x60,0x60,0x60,0x71,0x3F,0x3E,0x1C,0x00,0x00,

// asciitilde (126): w=13, h=5
0x8C,0x0A,0x57,
0x1C,0x1E,0x03,0x03,0x03,0x06,0x0E,0x0C,0x18,0x18,
0x18,0x0F,0x07

};
// 3112 bytes
// 3302 bytes with FAST_FONT_INDEX
