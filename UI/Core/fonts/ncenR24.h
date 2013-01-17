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

// ncenR24 = "New Century Schoolbook Roman"

const char font_ncenR24[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD6,0x00,
0xE1,0x00,
0x13,0x01,
0x4D,0x01,
0xAF,0x01,
0x09,0x02,
0x0E,0x02,
0x30,0x02,
0x52,0x02,
0x6C,0x02,
0x9F,0x02,
0xAC,0x02,
0xB7,0x02,
0xBE,0x02,
0xE8,0x02,
0x1A,0x03,
0x43,0x03,
0x72,0x03,
0xA1,0x03,
0xD3,0x03,
0xFF,0x03,
0x2E,0x04,
0x57,0x04,
0x86,0x04,
0xB5,0x04,
0xC0,0x04,
0xD2,0x04,
0x05,0x05,
0x18,0x05,
0x4B,0x05,
0x7D,0x05,
0xD7,0x05,
0x35,0x06,
0x87,0x06,
0xD9,0x06,
0x33,0x07,
0x85,0x07,
0xD7,0x07,
0x39,0x08,
0x9F,0x08,
0xCD,0x08,
0x13,0x09,
0x79,0x09,
0xCB,0x09,
0x41,0x0A,
0xAB,0x0A,
0x05,0x0B,
0x57,0x0B,
0xB5,0x0B,
0x0B,0x0C,
0x51,0x0C,
0x9F,0x0C,
0x09,0x0D,
0x67,0x0D,
0xE5,0x0D,
0x43,0x0E,
0xA1,0x0E,
0xE7,0x0E,
0x05,0x0F,
0x43,0x0F,
0x61,0x0F,
0x83,0x0F,
0x96,0x0F,
0x9F,0x0F,
0xC2,0x0F,
0x00,0x10,
0x1B,0x10,
0x5D,0x10,
0x7C,0x10,
0xB7,0x10,
0xEA,0x10,
0x38,0x11,
0x55,0x11,
0x7C,0x11,
0xCA,0x11,
0xF0,0x11,
0x29,0x12,
0x52,0x12,
0x71,0x12,
0xA4,0x12,
0xD7,0x12,
0xF6,0x12,
0x0F,0x13,
0x35,0x13,
0x5C,0x13,
0x81,0x13,
0xB4,0x13,
0xD7,0x13,
0x10,0x14,
0x2D,0x14,
0x47,0x14,
0x52,0x14,
0x6C,0x14,

// space (32): w=1, h=1
0x80,0x18,0x5C,
0x00,

// exclam (33): w=4, h=25
0x63,0x1D,
0x7E,0xFF,0xFF,0x7E,
0x00,0xFF,0xFF,0x00,
0xC0,0xE3,0xE3,0xC0,
0x00,0x01,0x01,0x00,

// quotedbl (34): w=9, h=8
0x08,0x16,
0x0F,0xFF,0x0F,0x00,0x00,0x00,0x0F,0xFF,0x0F,

// numbersign (35): w=16, h=23
0x4F,0x55,
0x00,0x80,0x80,0x80,0x80,0xF8,0xFF,0x8F,0x80,0x80,
0x80,0xF8,0xFF,0x8F,0x80,0x80,
0x60,0x61,0x61,0x61,0xFD,0xFF,0x67,0x61,0x61,0x61,
0xFD,0xFF,0x6F,0x61,0x61,0x01,
0x00,0x00,0x00,0x7E,0x7F,0x07,0x00,0x00,0x00,0x7E,
0x7F,0x07,0x00,0x00,0x00,0x00,

// dollar (36): w=14, h=29
0x6D,0x16,
0xF0,0xF8,0x1C,0x0C,0x06,0x06,0xFF,0x06,0x06,0x6E,
0xFC,0xFC,0x70,0x00,
0x07,0x0F,0x1E,0x3C,0x3C,0x38,0xFF,0x78,0x70,0xF0,
0xE0,0xE0,0xC0,0x80,
0x7C,0xFE,0xDE,0x8C,0x80,0x80,0xFF,0x80,0x80,0xC0,
0xC1,0xF3,0x7F,0x1F,
0x00,0x00,0x00,0x01,0x01,0x01,0x7F,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,

// percent (37): w=24, h=25
0x77,0x30,
0x80,0xE0,0xF8,0xFC,0x1E,0x06,0x03,0x03,0x07,0xFE,
0xFC,0x08,0x08,0x08,0xCC,0xFC,0x3E,0x0E,0x03,0x00,
0x00,0x00,0x00,0x00,
0x0F,0x1F,0x3F,0x30,0x20,0x20,0x30,0x18,0x0E,0x87,
0xC1,0x70,0x1C,0x07,0x81,0xC0,0xE0,0xF0,0x30,0x18,
0x18,0x18,0xF0,0xE0,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x38,0x1E,0x07,
0x01,0x00,0x00,0x3E,0x7F,0xFF,0xC3,0x80,0x80,0xC0,
0x60,0x38,0x1F,0x07,
0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// ampersand (38): w=22, h=25
0x75,0x17,
0x00,0x00,0x00,0x00,0xF8,0xFE,0xFE,0x03,0x03,0x01,
0x03,0x87,0xFF,0xFE,0x38,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x00,0xC0,0xE0,0xE0,0x33,0x1F,0x3F,0xFF,0xFC,0xF6,
0xC7,0x83,0x01,0x10,0x10,0x30,0xF0,0xF0,0x70,0x30,
0x10,0x10,
0x3F,0x7F,0xFF,0xF8,0xE0,0xC0,0xC0,0x80,0x83,0x87,
0xCF,0xDF,0x7E,0x7C,0xF8,0xEE,0xC7,0xC1,0xC0,0xC0,
0xE0,0x38,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,

// quotesingle (39): w=3, h=8
0x02,0x16,
0x0F,0xFF,0x0F,

// parenleft (40): w=8, h=29
0x67,0x15,
0x00,0x00,0xE0,0xF0,0x18,0x0E,0x06,0x03,
0xF0,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x01,0x1F,0x7F,0xE0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x0E,0x1C,0x18,

// parenright (41): w=8, h=29
0x67,0x15,
0x03,0x07,0x0E,0x18,0xF0,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF0,
0x00,0x00,0x00,0x80,0xE0,0xFF,0x1F,0x01,
0x18,0x1C,0x06,0x03,0x01,0x00,0x00,0x00,

// asterisk (42): w=12, h=14
0x2B,0x17,
0x18,0x38,0x30,0xE0,0xE0,0xFF,0xFF,0xE0,0x60,0x38,
0x38,0x18,
0x06,0x07,0x03,0x01,0x01,0x3F,0x3F,0x01,0x01,0x07,
0x06,0x06,

// plus (43): w=16, h=17
0xCF,0x09,0x67,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// comma (44): w=5, h=10
0xA4,0x15,0x67,
0x06,0x8F,0xCF,0x7F,0x3E,
0x03,0x01,0x01,0x00,0x00,

// hyphen (45): w=8, h=3
0x87,0x0F,0x57,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,

// period (46): w=4, h=4
0x83,0x15,0x68,
0x06,0x0F,0x0F,0x06,

// slash (47): w=10, h=25
0x69,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0x3F,0x07,
0x00,0x00,0x00,0x80,0xF0,0x7E,0x0F,0x01,0x00,0x00,
0x00,0xE0,0xFC,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=16, h=24
0x4F,0x34,
0x80,0xE0,0xF0,0xFC,0x3E,0x06,0x03,0x03,0x03,0x03,
0x06,0x3E,0xFC,0xF0,0xE0,0x80,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0x01,0x07,0x0F,0x3F,0x7C,0x60,0xC0,0xC0,0xC0,0xC0,
0x60,0x7C,0x3F,0x0F,0x07,0x01,

// one (49): w=13, h=24
0x4C,0x3C,
0x04,0x04,0x04,0x04,0x04,0xFE,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,
0x80,0x80,0x80,0x80,0xC0,0xFF,0xFF,0xFF,0xC0,0x80,
0x80,0x80,0x80,

// two (50): w=15, h=24
0x4E,0x30,
0x00,0xF8,0xFC,0xF6,0xE6,0x03,0x03,0x03,0x03,0x03,
0x03,0x0E,0xFE,0xFC,0xF8,
0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x80,0xC0,0xF0,
0x78,0x3F,0x1F,0x07,0x01,
0xC0,0xE0,0xF0,0xF8,0xFC,0xEE,0xE7,0xE3,0xE1,0xE0,
0xE0,0xE0,0xE0,0xF8,0xFE,

// three (51): w=15, h=24
0x4E,0x30,
0x00,0x38,0x7C,0x7E,0x36,0x03,0x03,0x03,0x03,0x03,
0x07,0xFE,0xFE,0xF8,0x00,
0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x0C,0x1C,0x1E,
0x3F,0xFB,0xF1,0xE0,0x80,
0x1E,0x3F,0x7F,0x6E,0xE0,0xC0,0xC0,0xC0,0xC0,0xE0,
0x60,0x78,0x3F,0x3F,0x0F,

// four (52): w=16, h=24
0x4F,0x2F,
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x70,0x38,0xFC,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x80,0xE0,0x70,0x1C,0x0E,0x03,0x01,0x00,0x00,0xFF,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x83,0x83,0xC3,0xFF,
0xFF,0xFF,0xC3,0x83,0x83,0x03,

// five (53): w=14, h=24
0x4D,0x36,
0x00,0x80,0xFF,0x3F,0x0F,0x0E,0x0E,0x0E,0x0E,0x0E,
0x0E,0x06,0x03,0x00,
0x00,0x1F,0x1F,0x0C,0x06,0x06,0x03,0x03,0x03,0x07,
0x1E,0xFE,0xFC,0xF0,
0x1E,0x7F,0x7F,0xEE,0xC0,0xC0,0xC0,0xC0,0xC0,0x60,
0x78,0x7F,0x3F,0x0F,

// six (54): w=15, h=24
0x4E,0x30,
0x00,0xC0,0xF8,0xFC,0x1E,0x06,0x03,0x03,0x03,0x03,
0x07,0x1F,0x3E,0x3E,0x1C,
0xFE,0xFF,0xFF,0xFF,0x38,0x1C,0x0C,0x06,0x06,0x06,
0x0E,0x3C,0xFC,0xF8,0xE0,
0x01,0x0F,0x3F,0x7F,0x70,0xC0,0xC0,0xC0,0xC0,0xC0,
0x60,0x78,0x3F,0x3F,0x0F,

// seven (55): w=13, h=24
0x4C,0x3C,
0xFF,0x1F,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0xC7,
0x77,0x1F,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0x1F,0x03,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x78,0xFF,0xFF,0x7F,0x00,0x00,
0x00,0x00,0x00,

// eight (56): w=15, h=24
0x4E,0x30,
0x00,0xF0,0xFC,0xFE,0x8E,0x07,0x03,0x03,0x03,0x03,
0x07,0x9E,0xFE,0x78,0x00,
0x00,0x80,0xC3,0xE7,0x67,0x3F,0x1E,0x3E,0x3C,0x7E,
0x7F,0xFB,0xF1,0xE0,0x80,
0x0E,0x3F,0x7F,0x71,0xE0,0xC0,0xC0,0xC0,0xC0,0xC0,
0xE0,0x71,0x7F,0x3F,0x0F,

// nine (57): w=15, h=24
0x4E,0x30,
0xF0,0xFC,0xFE,0x1E,0x07,0x03,0x03,0x03,0x03,0x07,
0x1E,0xFE,0xFC,0xF0,0x80,
0x07,0x1F,0x3F,0x7E,0x78,0x60,0x60,0x60,0x60,0x38,
0x1C,0xFF,0xFF,0xFF,0xFF,
0x38,0x7C,0xFC,0xF8,0xC0,0xC0,0xC0,0xE0,0x60,0x70,
0x3C,0x1F,0x0F,0x03,0x00,

// colon (58): w=4, h=16
0xA3,0x09,0x77,
0x06,0x0F,0x0F,0x06,
0x60,0xF0,0xF0,0x60,

// semicolon (59): w=5, h=21
0xC4,0x09,0x58,
0x00,0x06,0x0F,0x0F,0x06,
0x00,0x60,0xF0,0xF0,0xE0,
0x10,0x18,0x0C,0x07,0x01,

// less (60): w=16, h=18
0xCF,0x08,0x67,
0x00,0x80,0x80,0xC0,0xC0,0xE0,0x60,0x70,0x30,0x38,
0x18,0x1C,0x0C,0x0E,0x06,0x07,
0x03,0x07,0x07,0x0F,0x0C,0x1C,0x18,0x38,0x30,0x70,
0x60,0xE0,0xC0,0xC0,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x03,

// equal (61): w=16, h=8
0x8F,0x0D,0x67,
0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,
0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,

// greater (62): w=16, h=18
0xCF,0x08,0x67,
0x07,0x06,0x0E,0x0C,0x1C,0x18,0x38,0x30,0x70,0x60,
0xE0,0xC0,0xC0,0x80,0x80,0x00,
0x80,0x80,0xC0,0xC0,0xE0,0x60,0x70,0x30,0x38,0x18,
0x1C,0x0C,0x0F,0x07,0x07,0x03,
0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=12, h=25
0x6B,0x0F,
0x7C,0x7E,0x73,0x03,0x01,0x01,0x03,0x03,0x8F,0xFE,
0xFE,0xF8,
0x00,0x00,0x00,0x00,0x00,0xE0,0x38,0x1E,0x0F,0x07,
0x03,0x01,
0x00,0x00,0x00,0xC0,0xE3,0xE3,0xC0,0x00,0x00,0x00,
0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,

// at (64): w=22, h=25
0x75,0x10,
0x00,0x80,0xE0,0x78,0x1C,0x1C,0x0E,0x06,0x87,0x83,
0x83,0x83,0x83,0x07,0x87,0x86,0x8E,0x1C,0x38,0xF0,
0xE0,0x00,
0xFE,0xFF,0x03,0x00,0xF0,0xFC,0xFE,0x3F,0x07,0x01,
0x00,0x00,0xE3,0xFF,0xFF,0x7F,0x07,0x00,0x00,0xC0,
0xFF,0x1F,
0x01,0x07,0x1E,0x38,0x71,0xE7,0xCF,0xCC,0xC8,0x8C,
0x8E,0x87,0x87,0x8F,0x8F,0xC8,0xCC,0x66,0x73,0x39,
0x18,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// A (65): w=23, h=25
0x76,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,
0x3E,0xFF,0xFE,0xF0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0xBF,0x87,0x80,
0x80,0x81,0x87,0xBF,0xFF,0xFC,0xF0,0x80,0x00,0x00,
0x00,0x00,0x00,
0x00,0x80,0xC0,0xF0,0xFE,0x8F,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x8F,0xFF,0xFF,0xFC,0xF0,
0xC0,0x80,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,

// B (66): w=20, h=25
0x73,0x10,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x03,0x03,0x03,0x07,0x07,0xFE,0xFE,0xFC,0xF0,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x18,0x18,0x18,
0x18,0x18,0x38,0x38,0x6C,0xEF,0xE7,0xC3,0x80,0x00,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0xC0,0xE0,0xFF,0xFF,0x7F,0x1F,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// C (67): w=20, h=25
0x73,0x0F,
0x00,0xC0,0xF0,0xF8,0xFC,0x1E,0x06,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x06,0x0E,0x3C,0xFF,0xFF,0x00,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,
0x01,0x0F,0x1F,0x3F,0x7E,0xF0,0xC0,0xC0,0x80,0x80,
0x80,0x80,0x80,0x80,0xC0,0xC0,0x60,0x38,0x1F,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// D (68): w=22, h=25
0x75,0x10,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x07,0x06,0x0E,0x7E,0xFC,0xF8,
0xE0,0x80,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0xC0,0xC0,0xE0,0xF8,0x7F,0x1F,
0x0F,0x03,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// E (69): w=20, h=25
0x73,0x11,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x03,0x03,0x03,0xC3,0x03,0x07,0x07,0x1F,0x7F,0xFF,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x18,0x18,0x18,
0x3C,0x3C,0xFE,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x80,0x80,0x80,0x83,0x80,0xC0,0xC0,0xE0,0xF8,0xFF,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// F (70): w=20, h=25
0x73,0x0F,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x03,0x03,0x03,0x83,0x03,0x07,0x07,0x0F,0x3F,0xFF,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x30,0x30,0x30,
0x38,0x78,0xFE,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,
0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=24, h=25
0x77,0x0D,
0x00,0xC0,0xF0,0xF8,0x7C,0x1E,0x0E,0x07,0x03,0x03,
0x03,0x03,0x03,0x03,0x07,0x06,0x0E,0x3C,0xFF,0xFF,
0x00,0x00,0x00,0x00,
0xFE,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x40,0x40,0x40,0xC0,0xC0,0xC0,0xC3,
0xC0,0x40,0x40,0x40,
0x01,0x0F,0x1F,0x3F,0x78,0xE0,0xC0,0xC0,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0xC0,0x70,0x3F,0xFF,0xFF,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x01,
0x00,0x00,0x00,0x00,

// H (72): w=25, h=25
0x78,0x0F,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x01,
0x01,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0xFF,0xFF,
0xFF,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xFF,0xFF,
0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xFF,0xFF,
0xFF,0x80,0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// I (73): w=11, h=25
0x6A,0x0F,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x01,
0x01,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,
0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,

// J (74): w=17, h=25
0x70,0x09,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x03,
0xFF,0xFF,0xFF,0x03,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x7E,0xFF,0xDF,0x9F,0x8E,0x80,0x80,0x80,0x80,0xE0,
0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// K (75): w=25, h=25
0x78,0x0D,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x01,
0x01,0x00,0x00,0x80,0xC1,0x73,0x3F,0x1F,0x0F,0x07,
0x03,0x03,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xE0,0x70,0x38,
0x1C,0x3E,0x7F,0xFB,0xF1,0xC0,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x0F,0x1F,0x7F,0xFC,0xF8,
0xE0,0xC0,0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// L (76): w=20, h=25
0x73,0x0F,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,0xE0,0xF8,0x7F,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// M (77): w=29, h=25
0x7C,0x09,
0x00,0x01,0x01,0x03,0xFF,0xFF,0x0F,0x7F,0xFF,0xF8,
0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF0,
0x3F,0x0F,0xFF,0xFF,0xFF,0x03,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x03,0x1F,
0xFF,0xFE,0xF0,0x80,0x00,0x00,0xE0,0xFC,0x1F,0x01,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0xFF,0xFF,0x80,0x80,0x00,0x00,
0x00,0x0F,0x7F,0xFF,0xFC,0x3E,0x07,0x00,0x00,0x00,
0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// N (78): w=26, h=25
0x79,0x0F,
0x01,0x01,0x01,0x03,0xFF,0xFF,0x1F,0x7F,0xFC,0xF8,
0xE0,0xC0,0x80,0x00,0x00,0x00,0x01,0x01,0x03,0x03,
0xFF,0xFF,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x03,
0x07,0x1F,0x3F,0xFE,0xFC,0xF0,0xE0,0x80,0x00,0x00,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0xFF,0xFF,0x80,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x03,0x0F,0x1F,0x7E,0xF8,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,

// O (79): w=22, h=25
0x75,0x0F,
0x00,0xC0,0xF0,0xF8,0x7C,0x1E,0x06,0x07,0x03,0x03,
0x03,0x03,0x03,0x03,0x07,0x06,0x1E,0x7C,0xF8,0xF0,
0xC0,0x00,
0xFF,0xFF,0xFF,0x83,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0xFF,
0xFF,0xFF,
0x01,0x07,0x1F,0x3F,0x7C,0xF0,0xC0,0xC0,0x80,0x80,
0x80,0x80,0x80,0x80,0xC0,0xC0,0xF0,0x7C,0x3F,0x1F,
0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// P (80): w=20, h=25
0x73,0x0F,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x03,0x03,0x03,0x07,0x07,0x0E,0x3E,0xFC,0xF8,0xF0,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x30,0x30,0x30,
0x30,0x30,0x30,0x38,0x38,0x1C,0x1F,0x0F,0x07,0x03,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=23, h=31
0x76,0x0E,
0x00,0xC0,0xF0,0xF8,0x7C,0x1C,0x0E,0x06,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x06,0x0E,0x1C,0x7C,0xF8,
0xF0,0xC0,0x00,
0xFF,0xFF,0xFF,0xC3,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC3,
0xFF,0xFF,0xFF,
0x00,0x07,0x0F,0x3F,0x7E,0x78,0xE0,0xFE,0xC6,0x83,
0x81,0x83,0x83,0x87,0xFE,0xFC,0xE0,0x78,0x3E,0x1F,
0x07,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x03,0x1F,0x3F,0x7F,0x78,0x70,
0x30,0x1E,0x06,

// R (82): w=21, h=25
0x74,0x0F,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x03,0x03,0x03,0x07,0x07,0x9E,0xFE,0xFC,0xF0,0x00,
0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x30,0x30,0x30,
0x30,0x30,0x78,0xF8,0xEC,0xCF,0x07,0x07,0x01,0x00,
0x00,
0x00,0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,
0x00,0x00,0x00,0x01,0x7F,0xFF,0xFF,0xC0,0x80,0xC0,
0x78,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,
0x00,

// S (83): w=17, h=25
0x70,0x15,
0xF0,0xFC,0xFE,0x86,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x07,0x06,0x1C,0x3E,0xFF,0x00,
0x81,0x07,0x07,0x0F,0x0E,0x1E,0x1E,0x1C,0x1C,0x3C,
0x3C,0x38,0x78,0xF8,0xF0,0xE0,0xC0,
0xFF,0xFE,0x70,0xE0,0xC0,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0xC0,0xF0,0x7F,0x3F,0x1F,
0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// T (84): w=19, h=25
0x72,0x0F,
0xFF,0x3F,0x0F,0x07,0x03,0x03,0x03,0x03,0xFF,0xFF,
0xFF,0x03,0x03,0x03,0x07,0x07,0x0F,0x3F,0xFF,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xFF,0xFF,
0xFF,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// U (85): w=26, h=25
0x79,0x08,
0x01,0x01,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,
0xFF,0xFF,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0x3F,0x7F,0xF8,0xE0,0xC0,
0xC0,0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,0x60,0x78,
0x1F,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// V (86): w=23, h=25
0x76,0x08,
0x01,0x01,0x03,0x0F,0x7F,0xFF,0xFF,0xE1,0x01,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x83,0xFF,0x3F,0x0F,
0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x03,0x1F,0xFF,0xFF,0xF8,
0xC0,0x00,0x00,0x00,0xE0,0x7C,0x0F,0x01,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,
0xFF,0xFE,0xF8,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// W (87): w=31, h=25
0x7E,0x08,
0x01,0x03,0x07,0x3F,0xFF,0xFF,0xF3,0x01,0x00,0x00,
0x00,0x01,0x01,0x03,0xFF,0xFF,0xFF,0xF3,0x81,0x01,
0x00,0x00,0x00,0x01,0x01,0xE3,0xFF,0x1F,0x07,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x1F,0xFF,0xFF,0xF8,0x80,
0x00,0x00,0xF0,0x7E,0x07,0x01,0x0F,0x7F,0xFF,0xF8,
0xC0,0x00,0x00,0xE0,0xFE,0x1F,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x7F,0xFF,
0xFE,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0x3F,
0xFF,0xFE,0x7E,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// X (88): w=23, h=25
0x76,0x07,
0x01,0x01,0x03,0x07,0x1F,0x3F,0xFF,0xFF,0xF1,0xC1,
0x80,0x00,0x00,0x81,0xE1,0x7B,0x3F,0x0F,0x07,0x03,
0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xC7,0xFF,
0x7F,0xFE,0xFF,0xF3,0xC1,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x80,0xC0,0xF0,0xF8,0x9E,0x07,0x03,0x00,
0x00,0x00,0x01,0x07,0x1F,0x3F,0xFE,0xF8,0xF0,0xC0,
0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,

// Y (89): w=23, h=25
0x76,0x08,
0x01,0x03,0x07,0x0F,0x3F,0xFF,0xFF,0xF1,0xC1,0x80,
0x00,0x00,0x00,0x00,0x01,0xC1,0xF3,0x3F,0x1F,0x07,
0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x1F,0x7F,
0xFE,0xF8,0xF0,0x3C,0x0F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0xFF,0xFF,0xFF,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,

// Z (90): w=17, h=25
0x70,0x0F,
0x00,0xFF,0x7F,0x0F,0x07,0x03,0x03,0x03,0x03,0x83,
0xE3,0xF3,0xFF,0xFF,0x3F,0x0F,0x03,
0x00,0x01,0x00,0x00,0x00,0xC0,0xF0,0xF8,0xFE,0x3F,
0x1F,0x07,0x01,0x00,0x00,0x00,0x80,
0x80,0xE0,0xF8,0xFE,0xFF,0x9F,0x8F,0x83,0x80,0x80,
0x80,0x80,0x80,0xC0,0xE0,0xFC,0xFF,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// bracketleft (91): w=7, h=29
0x66,0x1B,
0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x1F,0x1F,0x10,0x10,0x10,0x10,0x10,

// backslash (92): w=15, h=25
0x6E,0x17,
0x01,0x07,0x1F,0x7E,0xF8,0xE0,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x3F,0xFE,0xF8,0xC0,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,
0x3F,0xFC,0xF0,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,

// bracketright (93): w=7, h=29
0x66,0x11,
0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x10,0x10,0x10,0x10,0x10,0x1F,0x1F,

// asciicircum (94): w=16, h=13
0x2F,0x16,
0x00,0x00,0x00,0xC0,0xF0,0xFC,0x3F,0x0F,0x0F,0x3F,
0xFC,0xF0,0xC0,0x00,0x00,0x00,
0x10,0x1C,0x1F,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x0F,0x1F,0x1C,0x10,

// underscore (95): w=16, h=2
0x8F,0x1B,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=7, h=6
0x06,0x51,
0x03,0x07,0x0E,0x0C,0x18,0x30,0x20,

// a (97): w=16, h=16
0xAF,0x09,0x55,
0x00,0x1C,0x1E,0x0E,0x87,0x83,0x83,0xC3,0xC3,0xC7,
0xFE,0xFE,0xFC,0x00,0x00,0x00,
0x3C,0x7E,0xFF,0xE3,0xC1,0xC1,0xC0,0x60,0x60,0x30,
0x3F,0x7F,0xFF,0xE0,0xC0,0x60,

// b (98): w=15, h=25
0x6E,0x0A,
0x02,0x02,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x38,0x0C,0x06,0x06,0x06,
0x06,0x1C,0xFC,0xF8,0xE0,
0x00,0x00,0xFF,0xFF,0x7F,0xF0,0xC0,0x80,0x80,0x80,
0x80,0xE0,0xFF,0x7F,0x1F,
0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,

// c (99): w=12, h=16
0xAB,0x09,0x56,
0xE0,0xF8,0xFC,0x1E,0x06,0x03,0x03,0x03,0x1B,0x3E,
0x3E,0x1C,
0x07,0x1F,0x7F,0x78,0xE0,0xC0,0xC0,0xC0,0xC0,0x60,
0x30,0x18,

// d (100): w=16, h=25
0x6F,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
0x02,0xFE,0xFF,0xFF,0x00,0x00,
0xC0,0xF0,0xF8,0x3C,0x0C,0x06,0x06,0x06,0x06,0x0C,
0x38,0xFF,0xFF,0xFF,0x00,0x00,
0x1F,0x7F,0x7F,0xF0,0xC0,0x80,0x80,0x80,0x80,0xC0,
0x70,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,

// e (101): w=14, h=16
0xAD,0x09,0x56,
0xE0,0xF8,0xFC,0x8E,0x86,0x83,0x83,0x83,0x83,0x87,
0x8E,0xFE,0xFC,0xF0,
0x0F,0x3F,0x7F,0x78,0xE0,0xC0,0xC0,0xC0,0xC0,0xC0,
0x60,0x60,0x30,0x18,

// f (102): w=14, h=25
0xED,0x00,0x42,
0x00,0x00,0x00,0xF0,0xFC,0xFE,0x06,0x03,0x01,0x01,
0x01,0x0F,0x1F,0x0E,
0x02,0x02,0x02,0xFF,0xFF,0xFF,0x02,0x02,0x02,0x02,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,

// g (103): w=16, h=23
0xCF,0x09,0x55,
0x00,0xF8,0xFC,0xFE,0x06,0x03,0x03,0x03,0x03,0x06,
0xFE,0xFF,0xFB,0x01,0x07,0x07,
0x00,0x78,0xFD,0xE7,0xE3,0xE6,0xE6,0xE6,0xE6,0xE3,
0xE3,0xC1,0xC0,0x80,0x00,0x00,
0x1C,0x3E,0x3F,0x31,0x70,0x60,0x60,0x60,0x60,0x60,
0x31,0x31,0x3F,0x1F,0x0F,0x00,

// h (104): w=19, h=25
0x72,0x09,
0x02,0x02,0x02,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x18,0x0C,0x04,0x06,
0x06,0x0E,0x1C,0xFC,0xF8,0xE0,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// i (105): w=9, h=24
0x48,0x2E,
0x00,0x00,0x06,0x0F,0x0F,0x06,0x00,0x00,0x00,
0x02,0x02,0x02,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x80,

// j (106): w=9, h=31
0xE8,0x01,0x28,
0x00,0x00,0x00,0x00,0x00,0x06,0x0F,0x0F,0x06,
0x00,0x00,0x00,0x02,0x02,0x02,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x38,0x7C,0x78,0x40,0x40,0x60,0x3F,0x1F,0x07,

// k (107): w=19, h=25
0x72,0x09,
0x02,0x02,0x02,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x80,0xC0,0xE2,
0x32,0x1E,0x0E,0x06,0x06,0x02,0x02,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x03,0x01,0x03,0x07,
0x0F,0x1E,0x7C,0xF8,0xE0,0xC0,0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// l (108): w=9, h=25
0x68,0x0F,
0x04,0x04,0x04,0xFE,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// m (109): w=27, h=16
0xBA,0x09,0x45,
0x02,0x02,0x02,0xFF,0xFF,0xFF,0x1C,0x06,0x03,0x03,
0x03,0x07,0xFE,0xFE,0xF8,0x1C,0x06,0x03,0x03,0x03,
0x07,0xFE,0xFE,0xF8,0x00,0x00,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,0x00,
0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,0x00,0x80,
0x80,0xFF,0xFF,0xFF,0x80,0x80,0x80,

// n (110): w=19, h=16
0xB2,0x09,0x45,
0x02,0x02,0x02,0xFF,0xFF,0xFF,0x1C,0x06,0x06,0x03,
0x03,0x03,0x07,0xFE,0xFE,0xF8,0x00,0x00,0x00,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x00,0x00,
0x00,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x80,

// o (111): w=14, h=16
0xAD,0x09,0x56,
0xE0,0xF8,0xFC,0x1E,0x06,0x03,0x03,0x03,0x03,0x06,
0x1E,0xFC,0xF8,0xE0,
0x07,0x1F,0x3F,0x78,0x60,0xC0,0xC0,0xC0,0xC0,0x60,
0x78,0x3F,0x1F,0x07,

// p (112): w=16, h=23
0xCF,0x09,0x57,
0x02,0x02,0xFE,0xFF,0xFF,0x1C,0x06,0x03,0x03,0x03,
0x03,0x07,0x0E,0xFE,0xFC,0xF0,
0x00,0x00,0xFF,0xFF,0xFF,0x38,0x60,0xC0,0xC0,0xC0,
0xC0,0xE0,0x78,0x7F,0x1F,0x07,
0x40,0x60,0x7F,0x7F,0x7F,0x60,0x40,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=16, h=23
0xCF,0x09,0x55,
0xE0,0xF8,0xFC,0x1E,0x06,0x03,0x03,0x03,0x03,0x03,
0x0E,0xFC,0xFE,0xFF,0x00,0x00,
0x0F,0x1F,0x7F,0x78,0xE0,0xC0,0xC0,0xC0,0xC0,0x60,
0x38,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,
0x60,0x7F,0x7F,0x7F,0x60,0x40,

// r (114): w=14, h=16
0xAD,0x09,0x46,
0x02,0x02,0x02,0xFF,0xFF,0xFF,0x1C,0x06,0x02,0x03,
0x0F,0x1F,0x1F,0x0E,
0x80,0x80,0x80,0xFF,0xFF,0xFF,0x80,0x80,0x80,0x00,
0x00,0x00,0x00,0x00,

// s (115): w=11, h=16
0xAA,0x09,0x67,
0x7C,0xFE,0xE6,0xE3,0xC3,0xC3,0xC3,0x86,0x9F,0x3F,
0x00,
0xFC,0x78,0x61,0xC1,0xC1,0xC3,0xC3,0xC3,0x67,0x7F,
0x3E,

// t (116): w=12, h=23
0x4B,0x49,
0x80,0x80,0xC0,0xF0,0xFC,0xFF,0x80,0x80,0x80,0x80,
0x80,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,
0x00,0x00,0x00,0x1F,0x3F,0x7F,0x70,0x60,0x60,0x70,
0x3C,0x0F,

// u (117): w=18, h=16
0xB1,0x09,0x47,
0x02,0x02,0x02,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x02,0x02,0x02,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x3F,0x7F,0xFF,0xE0,0xC0,0xC0,0xC0,
0x60,0x60,0x38,0xFF,0xFF,0xFF,0x40,0x40,

// v (118): w=17, h=16
0xB0,0x09,0x45,
0x01,0x03,0x07,0x1F,0x7F,0xFF,0xF9,0xC1,0x00,0x00,
0x00,0x81,0xF1,0x3F,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x3F,0xFE,0xF8,
0x3E,0x07,0x01,0x00,0x00,0x00,0x00,

// w (119): w=24, h=16
0xB7,0x09,0x45,
0x01,0x03,0x0F,0x3F,0xFF,0xF9,0xC1,0x00,0x00,0x01,
0xC3,0x7F,0x3F,0xFF,0xF1,0x81,0x00,0x00,0x81,0xF9,
0x3F,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x07,0x3F,0xFF,0xF8,0x1F,
0x03,0x00,0x00,0x03,0x1F,0xFF,0xF8,0x3E,0x07,0x01,
0x00,0x00,0x00,0x00,

// x (120): w=16, h=16
0xAF,0x09,0x57,
0x01,0x01,0x03,0x07,0x1F,0x3F,0xFD,0xF1,0xC0,0xE1,
0x39,0x1F,0x07,0x03,0x01,0x01,
0x80,0xC0,0xE0,0xF0,0xF8,0x9C,0x86,0x03,0x03,0x8F,
0xBF,0xFC,0xF8,0xE0,0xC0,0x80,

// y (121): w=18, h=23
0xD1,0x09,0x56,
0x01,0x01,0x07,0x1F,0x7F,0xFF,0xF1,0xC1,0x00,0x00,
0x00,0x81,0xF1,0x3F,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x3F,0xFE,0xF8,
0x3E,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x38,0x7C,0x7C,0x68,0x20,0x30,0x1C,0x0F,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=13, h=16
0xAC,0x09,0x56,
0x00,0x3F,0x0F,0x03,0x03,0x81,0xE1,0xF1,0xFD,0x3F,
0x1F,0x07,0x03,
0xC0,0xE0,0xF8,0xFC,0xBF,0x8F,0x87,0x81,0xC0,0xC0,
0xE0,0xF0,0xFC,

// braceleft (123): w=6, h=29
0x65,0x1C,
0x00,0x00,0xFE,0xFF,0x03,0x01,
0x60,0xF0,0xFF,0x9F,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x07,0x0F,0x3C,0x38,

// bar (124): w=2, h=25
0xE1,0x00,0xDE,
0xFF,0xFF,
0xFF,0xFF,
0xFF,0xFF,
0x01,0x01,

// braceright (125): w=6, h=29
0x65,0x17,
0x01,0x03,0xFF,0xFE,0x00,0x00,
0x00,0x00,0x9F,0xFF,0xF0,0x60,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x38,0x3C,0x0F,0x07,0x00,0x00,

// asciitilde (126): w=16, h=4
0x8F,0x0F,0x67,
0x0C,0x0E,0x06,0x03,0x03,0x03,0x03,0x06,0x06,0x0C,
0x0C,0x0C,0x0C,0x06,0x07,0x03

};
// 5057 bytes
// 5247 bytes with FAST_FONT_INDEX
