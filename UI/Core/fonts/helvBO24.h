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

// helvBO24 = "Helvetica Bold Oblique"

const char font_helvBO24[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xEF,0x00,
0x0C,0x01,
0x63,0x01,
0xAD,0x01,
0x01,0x02,
0x57,0x02,
0x64,0x02,
0x9B,0x02,
0xCD,0x02,
0xE6,0x02,
0x0B,0x03,
0x1C,0x03,
0x28,0x03,
0x31,0x03,
0x5E,0x03,
0x93,0x03,
0xBA,0x03,
0xF6,0x03,
0x2B,0x04,
0x63,0x04,
0x9C,0x04,
0xD5,0x04,
0x0E,0x05,
0x46,0x05,
0x7E,0x05,
0x99,0x05,
0xB7,0x05,
0xDE,0x05,
0x07,0x06,
0x2E,0x06,
0x79,0x06,
0xFB,0x06,
0x55,0x07,
0xB3,0x07,
0x11,0x08,
0x6F,0x08,
0xCE,0x08,
0x29,0x09,
0x90,0x09,
0xF7,0x09,
0x22,0x0A,
0x71,0x0A,
0xD8,0x0A,
0x1E,0x0B,
0x91,0x0B,
0xF8,0x0B,
0x5F,0x0C,
0xBA,0x0C,
0x20,0x0D,
0x7E,0x0D,
0xD8,0x0D,
0x2B,0x0E,
0x86,0x0E,
0xD9,0x0E,
0x54,0x0F,
0xBB,0x0F,
0x0E,0x10,
0x6D,0x10,
0xA8,0x10,
0xBA,0x10,
0xF4,0x10,
0x15,0x11,
0x2A,0x11,
0x33,0x11,
0x68,0x11,
0xB6,0x11,
0xEB,0x11,
0x3E,0x12,
0x73,0x12,
0xAA,0x12,
0x00,0x13,
0x4E,0x13,
0x79,0x13,
0xB0,0x13,
0xFF,0x13,
0x2A,0x14,
0x80,0x14,
0xBB,0x14,
0xF3,0x14,
0x45,0x15,
0x8F,0x15,
0xBC,0x15,
0xF1,0x15,
0x12,0x16,
0x4D,0x16,
0x83,0x16,
0xD1,0x16,
0x10,0x17,
0x67,0x17,
0xA0,0x17,
0xD7,0x17,
0xFD,0x17,
0x33,0x18,

// space (32): w=1, h=1
0x80,0x18,0x4D,
0x00,

// exclam (33): w=10, h=25
0xE9,0x00,0x82,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0x00,0xFC,0xFF,0xFF,0x3F,0x07,0x00,0x00,
0xC0,0xF0,0xF0,0xF3,0xF3,0x71,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// quotedbl (34): w=13, h=9
0xAC,0x00,0xA2,
0xFF,0xFF,0xFF,0x3F,0x07,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0x3F,0x07,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,

// numbersign (35): w=21, h=25
0xF4,0x01,0x52,
0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0xE0,0xF8,
0xFE,0xFF,0x9F,0x83,0x80,0xE0,0xF8,0xFE,0xFF,0x9F,
0x87,
0x80,0x80,0x80,0x87,0x87,0xF7,0xFF,0xFF,0xBF,0x8F,
0x87,0x87,0xE7,0xFF,0xFF,0xFF,0x9F,0x87,0x07,0x07,
0x07,
0x07,0xC7,0xF7,0xFF,0xFF,0x1F,0x07,0x07,0xC7,0xF7,
0xFF,0xFF,0x3F,0x0F,0x07,0x07,0x07,0x07,0x00,0x00,
0x00,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// dollar (36): w=18, h=28
0x71,0x12,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0xF8,0x7C,0x3C,0x9C,
0xFC,0xFF,0x1F,0x3C,0xFC,0xFC,0xF8,0xF0,
0x00,0x00,0x07,0x0F,0x1F,0x1F,0x3F,0x3E,0xFC,0xFF,
0x7F,0xF9,0xF0,0xF0,0xE1,0xE1,0x81,0x01,
0x3C,0x7C,0xFC,0xFC,0xF0,0xE0,0xE0,0xFE,0xFF,0xE7,
0xE0,0xF0,0xFF,0x7F,0x3F,0x1F,0x07,0x00,
0x00,0x00,0x00,0x00,0x01,0x0D,0x0F,0x03,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// percent (37): w=27, h=23
0xDA,0x02,0x83,
0xE0,0xF8,0xFC,0xFE,0x1E,0x0F,0x07,0x07,0x8F,0xFF,
0xFE,0xFC,0x78,0x00,0x00,0x80,0xC0,0xE0,0x78,0x3C,
0x0E,0x07,0x03,0x00,0x00,0x00,0x00,
0x01,0x03,0x07,0x07,0x0F,0x0E,0x0E,0x0F,0x07,0x87,
0xC3,0xF1,0x78,0x1C,0x0F,0xC7,0xE3,0xF0,0xF0,0x78,
0x38,0x38,0x78,0xF8,0xF0,0xE0,0xC0,
0x00,0x00,0x00,0x00,0x60,0x70,0x38,0x1E,0x0F,0x07,
0x01,0x00,0x00,0x00,0x1F,0x3F,0x3F,0x7F,0x78,0x70,
0x70,0x78,0x3C,0x3F,0x1F,0x0F,0x03,

// ampersand (38): w=21, h=25
0x74,0x1A,
0x00,0x00,0x00,0x00,0x00,0xF0,0xF8,0xFC,0xFE,0xFE,
0x1F,0x0F,0x8F,0xFF,0xFF,0xFF,0xFE,0x3C,0x00,0x00,
0x00,
0x00,0x80,0xC0,0xE0,0xF0,0xF0,0x7B,0x3F,0x3F,0x7F,
0xFF,0xFF,0xF7,0xE3,0x83,0x81,0xE0,0xF0,0xF0,0x70,
0x30,
0x3E,0x7F,0xFF,0xFF,0xFF,0xF0,0xE0,0xE0,0xE0,0xF0,
0xF1,0xFB,0x7F,0x3F,0x7F,0xFF,0xFF,0xF3,0xC1,0x00,
0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// quotesingle (39): w=5, h=9
0xA4,0x00,0xA2,
0xFF,0xFF,0xFF,0x3F,0x07,
0x01,0x01,0x00,0x00,0x00,

// parenleft (40): w=13, h=31
0xEC,0x00,0x61,
0x00,0x00,0x00,0x00,0xC0,0xE0,0xF8,0xFC,0x3E,0x1F,
0x07,0x03,0x01,
0x00,0xE0,0xFC,0xFF,0xFF,0x1F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,
0x7E,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x07,0x3F,0x7F,0x7F,0x70,0x40,0x00,0x00,0x00,
0x00,0x00,0x00,

// parenright (41): w=12, h=31
0x6B,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0xFF,0xFF,
0xFC,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,
0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0xFF,0xFF,0x3F,
0x0F,0x01,
0xC0,0xF0,0xF8,0x3E,0x1F,0x0F,0x07,0x01,0x00,0x00,
0x00,0x00,

// asterisk (42): w=11, h=11
0xAA,0x01,0x92,
0x08,0x1C,0xBC,0xF8,0xF0,0xFF,0xFF,0xF3,0xB8,0x1C,
0x1C,
0x02,0x07,0x07,0x03,0x00,0x00,0x01,0x07,0x07,0x03,
0x00,

// plus (43): w=17, h=16
0xB0,0x09,0x74,
0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xF0,0xFF,0xFF,
0xFF,0xCF,0xC0,0xC0,0xC0,0xC0,0xC0,
0x03,0x03,0x03,0x03,0x03,0xE3,0xFF,0xFF,0xFF,0x1F,
0x03,0x03,0x03,0x03,0x03,0x03,0x01,

// comma (44): w=7, h=11
0xA6,0x14,0x56,
0x00,0x00,0x9C,0xDF,0xFF,0x7F,0x0F,
0x06,0x03,0x03,0x01,0x00,0x00,0x00,

// hyphen (45): w=9, h=5
0x88,0x0D,0x74,
0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,

// period (46): w=6, h=5
0x85,0x14,0x66,
0x1C,0x1F,0x1F,0x1F,0x1F,0x07,

// slash (47): w=14, h=24
0xCD,0x01,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,
0x78,0x1E,0x07,0x01,
0x00,0x00,0x00,0x00,0x80,0xE0,0x78,0x1E,0x07,0x01,
0x00,0x00,0x00,0x00,
0x80,0xE0,0x78,0x1E,0x07,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// zero (48): w=17, h=24
0x50,0x38,
0x00,0x00,0xE0,0xF0,0xF8,0xFC,0x7E,0x1E,0x1F,0x0F,
0x0F,0x1F,0xFF,0xFF,0xFE,0xFE,0xF8,
0xF0,0xFF,0xFF,0xFF,0x1F,0x03,0x00,0x00,0x00,0x00,
0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x1F,
0x1F,0x7F,0x7F,0xFF,0xFC,0xF8,0xF0,0xF0,0xF0,0xF8,
0x7E,0x3F,0x1F,0x0F,0x03,0x00,0x00,

// one (49): w=12, h=24
0xCB,0x01,0xA5,
0x70,0x70,0x70,0x70,0x78,0xF8,0xFC,0xFE,0xFF,0xFF,
0x3F,0x07,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x07,
0x00,0x00,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,0x00,
0x00,0x00,

// two (50): w=19, h=24
0xD2,0x01,0x62,
0x00,0x00,0x00,0xC0,0xF0,0xF8,0xFC,0x7E,0x3E,0x1F,
0x0F,0x0F,0x0F,0x1F,0xFF,0xFE,0xFE,0xFC,0xF0,
0x00,0x00,0x00,0x01,0x01,0x81,0x81,0xC0,0xE0,0xE0,
0xF0,0xF8,0x7C,0x3F,0x1F,0x0F,0x07,0x03,0x00,
0xE0,0xF8,0xFC,0xFE,0xFF,0xFF,0xFF,0xF7,0xF3,0xF1,
0xF0,0xF0,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x00,

// three (51): w=17, h=24
0x50,0x38,
0x00,0x00,0xE0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x0F,
0x0F,0x0F,0xFF,0xFF,0xFE,0xFE,0xF8,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x3C,
0x7E,0xFF,0xFF,0xFF,0xF3,0xC1,0x00,
0x1F,0x7F,0x7F,0xFF,0xF8,0xF0,0xF0,0xF0,0xF0,0x78,
0x7E,0x3F,0x3F,0x1F,0x0F,0x03,0x00,

// four (52): w=18, h=24
0x51,0x32,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,
0x7C,0x3E,0xFF,0xFF,0xFF,0xFF,0x7F,0x07,
0xC0,0xE0,0xF0,0xF8,0xFC,0x9F,0x8F,0x87,0x83,0x80,
0xE0,0xFF,0xFF,0xFF,0xFF,0x8F,0x80,0x00,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0xC7,0xFF,
0xFF,0xFF,0xFF,0x1F,0x07,0x07,0x07,0x00,

// five (53): w=18, h=24
0xD1,0x01,0x72,
0x00,0x00,0x00,0x80,0xF0,0xFC,0xFF,0x3F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x03,
0x00,0x10,0x1E,0x1F,0x1F,0x1F,0x0E,0x0E,0x0F,0x0F,
0x1F,0xFF,0xFF,0xFE,0xFE,0xF8,0x00,0x00,
0x1E,0x7E,0x7E,0xFE,0xF8,0xF0,0xF0,0xF0,0xF8,0x78,
0x7E,0x3F,0x1F,0x0F,0x07,0x01,0x00,0x00,

// six (54): w=18, h=24
0xD1,0x01,0x72,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0x7C,0x1E,0x1E,0x0F,
0x0F,0x0F,0x0F,0x3F,0x3E,0x3E,0x3C,0x38,
0xF0,0xFE,0xFF,0xFF,0x7F,0x3F,0x1E,0x0E,0x0F,0x0F,
0x0F,0x3F,0xFF,0xFE,0xFE,0xF8,0x00,0x00,
0x1F,0x3F,0x7F,0xFF,0xFC,0xF0,0xF0,0xF0,0xF0,0x78,
0x7C,0x3F,0x3F,0x1F,0x07,0x01,0x00,0x00,

// seven (55): w=18, h=24
0xD1,0x01,0x90,
0x00,0x0E,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x8F,
0xCF,0xEF,0xFF,0xFF,0x7F,0x1F,0x0F,0x07,
0x00,0x00,0x00,0x80,0xE0,0xF0,0xF8,0xFE,0x7F,0x1F,
0x0F,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0xC0,0xF8,0xFE,0xFF,0xFF,0x1F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=18, h=24
0x51,0x32,
0x00,0x00,0x00,0x00,0xE0,0xF8,0xFC,0xFE,0x1E,0x0F,
0x0F,0x0F,0x0F,0x1F,0xFE,0xFE,0xFC,0xF8,
0x00,0xC0,0xE0,0xF0,0xF1,0xFB,0x3F,0x3F,0x1E,0x1C,
0x1C,0x3E,0xFE,0xFF,0xFF,0xE7,0xC3,0x01,
0x0F,0x3F,0x7F,0x7F,0xFF,0xF8,0xF0,0xF0,0xF0,0xF0,
0x78,0x7E,0x3F,0x1F,0x0F,0x07,0x01,0x00,

// nine (57): w=18, h=24
0x51,0x32,
0x00,0x00,0x80,0xE0,0xF8,0xFC,0xFC,0x3E,0x1E,0x0F,
0x0F,0x0F,0x0F,0x1F,0xFF,0xFE,0xFC,0xF8,
0x00,0x00,0x1F,0x3F,0x7F,0xFF,0xFC,0xF8,0xF0,0xF0,
0x70,0x78,0xFC,0xFE,0xFF,0xFF,0x7F,0x0F,
0x0C,0x3C,0x7C,0x7C,0xFC,0xF8,0xF0,0xF0,0xF0,0xF0,
0x78,0x7E,0x3F,0x1F,0x07,0x03,0x00,0x00,

// colon (58): w=8, h=17
0xC7,0x08,0x84,
0x00,0x00,0x1C,0x1F,0x1F,0x1F,0x1F,0x07,
0xC0,0xF0,0xF0,0xF0,0xF0,0x70,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// semicolon (59): w=9, h=23
0xC8,0x08,0x74,
0x00,0x00,0x00,0x00,0x1C,0x1F,0x1F,0x1F,0x07,
0x00,0xC0,0xF0,0xF0,0xF0,0xF0,0x70,0x00,0x00,
0x60,0x31,0x39,0x1D,0x0F,0x03,0x00,0x00,0x00,

// less (60): w=18, h=16
0xB1,0x09,0x64,
0x00,0xC0,0xC0,0xE0,0xE0,0xF0,0xF0,0xF0,0x78,0x78,
0x78,0x3C,0x3C,0x3C,0x1E,0x1E,0x1E,0x07,
0x03,0x03,0x07,0x07,0x0F,0x0F,0x1F,0x1F,0x1E,0x3E,
0x3E,0x7C,0x7C,0xF8,0xF8,0x38,0x00,0x00,

// equal (61): w=19, h=12
0xB2,0x0B,0x63,
0x00,0x00,0x0C,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x03,
0x0C,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x03,0x00,0x00,

// greater (62): w=18, h=16
0xB1,0x09,0x64,
0x00,0x00,0x1C,0x1F,0x1F,0x3E,0x3E,0x3C,0x7C,0x7C,
0xF8,0xF8,0xF0,0xF0,0xF0,0xE0,0xC0,0xC0,
0xE0,0xF8,0x78,0x78,0x3C,0x3C,0x3C,0x1E,0x1E,0x1E,
0x0F,0x0F,0x0F,0x07,0x07,0x03,0x01,0x01,

// question (63): w=18, h=25
0xF1,0x00,0x92,
0x80,0xE0,0xF8,0xFC,0xFE,0x7E,0x1F,0x1F,0x0F,0x0F,
0x0F,0x0F,0x1F,0xFF,0xFE,0xFE,0xFC,0xF0,
0x01,0x01,0x01,0x01,0x01,0x00,0xC0,0xE0,0xF0,0xF8,
0x7C,0x3E,0x3F,0x1F,0x0F,0x07,0x03,0x00,
0x00,0x00,0x00,0xC0,0xF0,0xF3,0xF3,0xF3,0x33,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// at (64): w=32, h=30
0x7F,0x18,
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0x78,
0x38,0x1C,0x1C,0x0E,0x0E,0x06,0x07,0x07,0x07,0x07,
0x07,0x07,0x0F,0x0E,0x1E,0x1E,0x3C,0x78,0xF8,0xF0,0xC0,0x00,
0xC0,0xF0,0xFC,0x7E,0x1F,0x07,0x03,0x01,0x80,0xE0,
0xF0,0x78,0x1C,0x0E,0x06,0x07,0x03,0x03,0x87,0xFF,
0xFE,0xFE,0x3F,0x0F,0x03,0x00,0x00,0x80,0xF3,0xFF,0xFF,0x1F,
0x7F,0xFF,0xFF,0xE0,0x80,0x00,0x00,0x0E,0x3F,0x3F,
0x7F,0x78,0x70,0x70,0x30,0x38,0x1C,0x1E,0x3F,0x7F,
0x73,0x70,0x70,0x38,0x38,0x1C,0x1E,0x0F,0x07,0x03,0x00,0x00,
0x00,0x01,0x03,0x07,0x0F,0x1F,0x1E,0x3E,0x3C,0x3C,
0x38,0x38,0x38,0x38,0x38,0x38,0x3C,0x1C,0x1C,0x1C,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=22, h=25
0x75,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0xE0,0xF8,0xFC,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,
0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0xF8,0xFE,0xFF,
0x7F,0x1F,0x07,0x01,0x00,0x07,0xFF,0xFF,0xFF,0xFF,
0xF8,0x00,
0x80,0xC0,0xF0,0xFC,0xFF,0xFF,0x3F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0xFF,0xFF,0xFF,
0xFF,0xF8,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,

// B (66): w=23, h=25
0x76,0x18,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0xFF,0xFE,
0xFE,0xFC,0x78,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,0x3D,0x3C,
0x3C,0x3C,0x3C,0x3C,0x3C,0x7E,0xFE,0xFF,0xFF,0xF7,
0xC3,0x01,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0xFF,0xE3,0xE0,0xE0,0xE0,
0xE0,0xE0,0xE0,0xF0,0xF0,0xF8,0xFF,0x7F,0x3F,0x1F,
0x07,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// C (67): w=23, h=25
0x76,0x18,
0x00,0x00,0x80,0xC0,0xF0,0xF8,0xF8,0xFC,0x7E,0x3E,
0x1F,0x1F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0xFF,0xFE,
0xFE,0xFC,0xF0,
0xF0,0xFE,0xFF,0xFF,0xFF,0x0F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,
0x03,0x1F,0x7F,0xFF,0xFF,0xFE,0xF8,0xF0,0xE0,0xE0,
0xE0,0xE0,0xF0,0xF0,0xF8,0xF8,0x7E,0x7F,0x3F,0x1F,
0x07,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// D (68): w=23, h=25
0x76,0x18,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0x3F,0xFF,0xFE,
0xFE,0xFC,0xF0,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFF,0xFF,
0xFF,0xFF,0x3F,
0xC0,0xFC,0xFF,0xFF,0xFF,0xFF,0xE3,0xE0,0xE0,0xE0,
0xE0,0xE0,0xF0,0xF0,0xF8,0xFC,0x7F,0x3F,0x1F,0x0F,
0x03,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// E (69): w=23, h=25
0xF6,0x00,0x71,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x03,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,0x3C,0x3C,
0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x0C,
0x00,0x00,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0xFF,0xE3,0xE0,0xE0,0xE0,
0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x60,0x00,
0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,

// F (70): w=22, h=25
0xF5,0x00,0x61,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x03,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,0x3C,0x3C,
0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x0C,0x00,
0x00,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// G (71): w=25, h=25
0xF8,0x00,0x72,
0x00,0x00,0x00,0xC0,0xE0,0xF0,0xF8,0xFC,0x7C,0x3E,
0x1E,0x1F,0x1F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0x7F,
0xFE,0xFE,0xFC,0xF8,0xE0,
0xC0,0xFC,0xFF,0xFF,0xFF,0x3F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0xE0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,
0xF0,0xF0,0xF0,0x30,0x00,
0x03,0x1F,0x3F,0x7F,0xFF,0xFF,0xF8,0xF0,0xF0,0xE0,
0xE0,0xE0,0xE0,0xE0,0xF0,0xF0,0x78,0x3C,0xFF,0xFF,
0xFF,0x7F,0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// H (72): w=25, h=25
0xF8,0x00,0x62,
0x00,0x00,0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,
0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0xFF,0x7F,0x3F,0x3C,
0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0xFC,0xFF,0xFF,
0xFF,0xFF,0x3F,0x01,0x00,
0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0xFF,
0x7F,0x03,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// I (73): w=10, h=25
0xE9,0x00,0x62,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// J (74): w=19, h=25
0xF2,0x00,0x62,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
0x00,0xE0,0xFE,0xFF,0xFF,0xFF,0x3F,0x01,0x00,
0x3C,0x7F,0xFF,0xFF,0xFF,0xF3,0xE0,0xE0,0xE0,0xF0,
0xFC,0xFF,0x7F,0x3F,0x1F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// K (75): w=25, h=25
0xF8,0x00,0x62,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0xFC,0x7E,0x3F,
0x1F,0x0F,0x07,0x03,0x01,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x7F,0x7D,0x3E,
0xFF,0xFF,0xFF,0xF7,0xE3,0x81,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x00,0x03,0x0F,0x3F,0xFF,0xFF,0xFE,0xF8,0xF0,0xC0,
0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,

// L (76): w=17, h=25
0x70,0x1A,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0xFF,0xE3,0xE0,0xE0,0xE0,
0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x60,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// M (77): w=28, h=25
0xFB,0x00,0x62,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,
0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x1F,0x00,0xFF,
0xFF,0xFF,0xFF,0x00,0x80,0xE0,0xFC,0xFF,0x3F,0x0F,
0xE1,0xFE,0xFF,0xFF,0xFF,0x3F,0x01,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0xFF,
0xFF,0xFF,0xFF,0xFE,0xFF,0x1F,0x07,0x01,0x80,0xFC,
0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// N (78): w=25, h=25
0xF8,0x00,0x62,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,
0xFF,0xFF,0xFF,0xFF,0x0F,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,0x01,0x03,
0x1F,0xFF,0xFF,0xFF,0xF8,0xC0,0x00,0xE0,0xFF,0xFF,
0xFF,0xFF,0x3F,0x01,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x7F,0x07,0x00,0x00,0x00,
0x00,0x00,0x03,0x1F,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,
0x7F,0x03,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// O (79): w=25, h=25
0xF8,0x00,0x72,
0x00,0x00,0x00,0xC0,0xE0,0xF0,0xF8,0xFC,0x7E,0x3E,
0x1E,0x1F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0x3F,0xFE,
0xFE,0xFE,0xFC,0xF0,0xC0,
0xE0,0xFC,0xFF,0xFF,0xFF,0x0F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,
0xFF,0xFF,0xFF,0xFF,0x1F,
0x07,0x1F,0x3F,0x7F,0xFF,0xFE,0xF8,0xF0,0xF0,0xE0,
0xE0,0xE0,0xE0,0xF0,0xF0,0xF8,0xFC,0x7E,0x7F,0x3F,
0x1F,0x07,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// P (80): w=22, h=25
0xF5,0x00,0x72,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0xFF,0xFF,0xFE,
0xFE,0xF8,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,
0xF0,0xF0,0xF0,0xF0,0xF8,0xFC,0x7F,0x7F,0x3F,0x1F,
0x07,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// Q (81): w=25, h=26
0x78,0x18,
0x00,0x00,0x00,0xC0,0xE0,0xF0,0xF8,0xFC,0x7E,0x3E,
0x1E,0x1F,0x1F,0x0F,0x0F,0x0F,0x1F,0x1F,0x3F,0xFF,
0xFE,0xFE,0xFC,0xF0,0xC0,
0xC0,0xFC,0xFF,0xFF,0xFF,0xFF,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,
0xFF,0xFF,0xFF,0xFF,0x1F,
0x03,0x1F,0x3F,0x7F,0xFF,0xFF,0xF8,0xF0,0xF0,0xE0,
0xE0,0xE0,0xF6,0xFF,0xFF,0xFF,0xFE,0xFE,0xFF,0xFF,
0xFF,0x87,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x03,0x03,
0x01,0x00,0x00,0x00,0x00,

// R (82): w=23, h=25
0x76,0x18,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0xFF,0xFF,
0xFF,0xFE,0xFC,
0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x7F,0x78,0x78,
0x78,0x78,0x78,0x78,0xF8,0xFC,0xFC,0xFF,0xFF,0xCF,
0x07,0x03,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x07,
0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,

// S (83): w=22, h=25
0x75,0x12,
0x00,0x00,0x00,0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1E,
0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0xFF,0xFE,0xFE,
0xFC,0xF8,
0x00,0x00,0x00,0x07,0x0F,0x1F,0x1F,0x1F,0x3E,0x3E,
0x3C,0x3C,0x7C,0x7C,0x7C,0xF8,0xF8,0xF8,0xF0,0xF0,
0xC0,0x00,
0x0E,0x3E,0x7E,0xFE,0xFE,0xF8,0xF0,0xE0,0xE0,0xE0,
0xE0,0xE0,0xE0,0xF0,0xF0,0xFC,0x7F,0x7F,0x1F,0x0F,
0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// T (84): w=20, h=25
0xF3,0x00,0x90,
0x0C,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,
0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x03,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,
0x3F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0xFF,0x7F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=22, h=25
0xF5,0x00,0x92,
0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,
0xFF,0x0F,
0xE0,0xFF,0xFF,0xFF,0xFF,0x1F,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x3F,
0x01,0x00,
0x3F,0x7F,0xFF,0xFF,0xFF,0xF0,0xF0,0xE0,0xE0,0xE0,
0xF0,0xF0,0xF8,0xFE,0x7F,0x7F,0x1F,0x0F,0x03,0x00,
0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// V (86): w=20, h=25
0xF3,0x00,0xA1,
0x1F,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xF0,0xFC,0xFF,0xFF,0x3F,0x0F,0x03,
0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xC0,0xF0,
0xFC,0xFF,0x7F,0x1F,0x0F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFC,0xFF,0x7F,0x1F,
0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=30, h=25
0xFD,0x00,0xA0,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x80,
0xF0,0xFC,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0xC0,0xF0,0xFE,0xFF,0xFF,0x3F,0x0F,0x03,
0x3F,0xFF,0xFF,0xFF,0xFF,0x00,0xC0,0xF0,0xFE,0xFF,
0x3F,0x0F,0x01,0x00,0xFF,0xFF,0xFF,0x1F,0x00,0xE0,
0xF8,0xFF,0xFF,0x3F,0x0F,0x03,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0x1F,0x07,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFC,0xFF,0x7F,
0x1F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// X (88): w=25, h=25
0xF8,0x00,0x51,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x3F,0xFF,0xFF,
0xFF,0xFF,0xF8,0x80,0x80,0xC0,0xF0,0xF8,0xFC,0xFF,
0x7F,0x1F,0x0F,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE7,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xF0,0xF8,0xFC,0xFE,0x7F,0x1F,0x0F,
0x07,0x01,0x03,0x1F,0xFF,0xFF,0xFF,0xFF,0xF8,0xC0,
0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// Y (89): w=20, h=25
0xF3,0x00,0xA1,
0x01,0x0F,0xFF,0xFF,0xFF,0xFF,0xFC,0x80,0x00,0x00,
0x80,0xC0,0xF0,0xF8,0xFE,0xFF,0x3F,0x1F,0x0F,0x03,
0x00,0x00,0x00,0x07,0x7F,0xFF,0xFF,0xFF,0xFC,0xFE,
0x7F,0x3F,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0xFE,0xFF,0xFF,0xFF,0x7F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=23, h=25
0xF6,0x00,0x51,
0x00,0x00,0x00,0x00,0x00,0x0C,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x8F,0xCF,0xEF,0xFF,0xFF,0xFF,
0x7F,0x3F,0x1F,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,
0xF8,0xFC,0x7E,0x3F,0x1F,0x0F,0x07,0x03,0x01,0x00,
0x00,0x00,0x00,
0xC0,0xF0,0xF8,0xFC,0xFE,0xFF,0xFF,0xEF,0xE7,0xE3,
0xE1,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x60,0x00,
0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,

// bracketleft (91): w=14, h=31
0xED,0x00,0x51,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0xFF,0x1F,
0x07,0x07,0x07,0x07,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0x3F,0x03,0x00,
0x00,0x00,0x00,0x00,
0x00,0xE0,0xFE,0xFF,0xFF,0xFF,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x7C,0x7F,0x7F,0x7F,0x7F,0x70,0x70,0x70,0x00,0x00,
0x00,0x00,0x00,0x00,

// backslash (92): w=5, h=24
0xC4,0x01,0x94,
0x7F,0xFF,0xFE,0x00,0x00,
0x00,0xFF,0xFF,0xF8,0x00,
0x00,0x01,0xFF,0xFF,0xE0,

// bracketright (93): w=14, h=31
0x6D,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x87,0xFF,
0xFF,0xFF,0xFF,0x1F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,
0xFF,0x3F,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0xFF,
0x07,0x00,0x00,0x00,
0x70,0x70,0x70,0x70,0x7C,0x7F,0x7F,0x7F,0x1F,0x00,
0x00,0x00,0x00,0x00,

// asciicircum (94): w=15, h=14
0xAE,0x02,0x94,
0x00,0x00,0x00,0x80,0xE0,0xF0,0xFC,0x7F,0x1F,0x7F,
0xFF,0xFF,0xFC,0x00,0x00,
0x30,0x3C,0x3F,0x1F,0x0F,0x03,0x00,0x00,0x00,0x00,
0x0F,0x3F,0x3F,0x3F,0x20,

// underscore (95): w=18, h=2
0x91,0x1D,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=6, h=5
0x85,0x00,0xA4,
0x01,0x03,0x07,0x0F,0x1E,0x18,

// a (97): w=17, h=18
0x50,0xF3,
0x00,0x00,0x00,0x38,0x3C,0x3E,0xBE,0x8F,0x8F,0x87,
0x87,0x87,0xCF,0xFF,0xFF,0xFE,0xFC,
0xF0,0xFC,0xFE,0xFF,0xFF,0xC7,0xC7,0xC3,0xC3,0xE3,
0xF3,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,

// b (98): w=19, h=25
0x72,0x13,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x07,
0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,
0x00,0x00,0xC0,0xFE,0xFF,0xFF,0xFF,0x3F,0x1E,0x0F,
0x07,0x07,0x07,0x0F,0xFF,0xFF,0xFF,0xFF,0xFC,
0x80,0xFC,0xFF,0xFF,0xFF,0x7F,0xFF,0xF0,0xE0,0xE0,
0xE0,0xF0,0xF8,0xFC,0x7F,0x3F,0x1F,0x07,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// c (99): w=17, h=18
0x50,0xF8,
0x00,0xE0,0xF0,0xFC,0xFC,0x3E,0x1E,0x0F,0x0F,0x0F,
0x0F,0x1F,0x7F,0x7E,0x7E,0x7C,0x70,
0x7F,0xFF,0xFF,0xFF,0xE0,0xC0,0xC0,0xC0,0xC0,0xC0,
0xE0,0xF0,0xF8,0xF8,0x78,0x18,0x00,
0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// d (100): w=20, h=25
0xF3,0x00,0x72,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,
0x80,0x80,0x00,0x00,0xE0,0xFC,0xFF,0xFF,0xFF,0x07,
0xC0,0xF0,0xF8,0xFE,0xFF,0x3F,0x1F,0x0F,0x07,0x07,
0x07,0x0F,0xFF,0xFE,0xFF,0xFF,0xFF,0x1F,0x00,0x00,
0x3F,0x7F,0xFF,0xFF,0xFF,0xF0,0xE0,0xE0,0xE0,0xF0,
0x78,0xFE,0xFF,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// e (101): w=17, h=18
0x50,0xF8,
0x80,0xE0,0xF0,0xFC,0xFC,0xBE,0x9E,0x8F,0x8F,0x87,
0x87,0x8F,0x9F,0xFE,0xFE,0xFC,0xF0,
0x1F,0x7F,0xFF,0xFF,0xFB,0xE3,0xC3,0xC3,0xC3,0xC3,
0xC3,0xE3,0xF3,0xF3,0x73,0x33,0x03,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,
0x03,0x01,0x01,0x00,0x00,0x00,0x00,

// f (102): w=13, h=25
0xEC,0x00,0x70,
0x00,0x00,0x80,0x80,0xF0,0xFC,0xFE,0xFF,0xFF,0x8F,
0x87,0x07,0x03,
0x00,0x03,0xC3,0xFF,0xFF,0xFF,0xFF,0x1F,0x03,0x03,
0x01,0x00,0x00,
0x80,0xFC,0xFF,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// g (103): w=21, h=25
0x74,0xEC,
0x00,0x00,0x80,0xE0,0xF8,0xFC,0xFC,0x3E,0x1F,0x1F,
0x0F,0x0F,0x0F,0x1F,0x3E,0xFC,0xF8,0xFF,0xFF,0x7F,
0x07,
0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xE0,0xC0,0xC0,0xC0,
0xC0,0xE0,0xE0,0xF0,0xFE,0xFF,0xFF,0xFF,0x0F,0x00,
0x00,
0x38,0xF8,0xF8,0xF9,0xE1,0xC3,0xC3,0xC3,0xC3,0xE3,
0xE1,0xF1,0xFC,0x7F,0x7F,0x3F,0x0F,0x01,0x00,0x00,
0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// h (104): w=19, h=25
0x72,0x13,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0x3F,0x03,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,
0x00,0x00,0xC0,0xFE,0xFF,0xFF,0xFF,0x3F,0x0E,0x0F,
0x07,0x07,0x07,0xCF,0xFF,0xFF,0xFF,0xFF,0x1E,
0x80,0xFC,0xFF,0xFF,0xFF,0x3F,0x01,0x00,0x00,0x00,
0x00,0x80,0xFC,0xFF,0xFF,0xFF,0x3F,0x03,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// i (105): w=10, h=25
0xE9,0x00,0x62,
0x00,0x00,0x00,0x00,0x80,0x8E,0x8F,0x8F,0x8F,0x07,
0x00,0x00,0xC0,0xFE,0xFF,0xFF,0xFF,0x3F,0x01,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// j (106): w=13, h=32
0xEC,0x00,0x32,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x8E,0x8F,
0x8F,0x8F,0x07,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFE,0xFF,0xFF,0xFF,
0x3F,0x01,0x00,
0x00,0x00,0x00,0x80,0xFC,0xFF,0xFF,0xFF,0x7F,0x03,
0x00,0x00,0x00,
0xE0,0xF0,0xF8,0xFF,0xFF,0x7F,0x3F,0x07,0x00,0x00,
0x00,0x00,0x00,

// k (107): w=19, h=25
0xF2,0x00,0x62,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x07,
0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,
0x00,0x00,0xC0,0xFE,0xFF,0xFF,0xFF,0xFF,0xF0,0xF8,
0xFC,0xFE,0x3F,0x1F,0x0F,0x07,0x03,0x01,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x3F,0x07,0x03,0x03,0x0F,
0x7F,0xFF,0xFF,0xFC,0xF0,0x80,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// l (108): w=10, h=25
0xE9,0x00,0x62,
0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,0xFF,0x7F,0x07,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x1F,0x00,0x00,
0xC0,0xFC,0xFF,0xFF,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// m (109): w=28, h=18
0x5B,0xF3,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0xFF,0x3F,0x1C,0x0E,
0x0E,0x0F,0x9F,0xFF,0xFF,0xFF,0xFE,0x3C,0x1E,0x0E,
0x0F,0x0F,0x9F,0xFF,0xFF,0xFF,0xFE,0x38,
0x00,0xF8,0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x00,0xF0,0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x00,0xF0,0xFF,0xFF,0xFF,0x7F,0x07,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,

// n (110): w=19, h=18
0x52,0xF3,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0xFF,0x3F,0x1C,0x0E,
0x0E,0x0F,0x0F,0x9F,0xFF,0xFF,0xFE,0xFE,0xF0,
0x00,0xF8,0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x00,0x00,0xF0,0xFF,0xFF,0xFF,0x7F,0x07,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,

// o (111): w=18, h=18
0x51,0xF9,
0x00,0xE0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x0F,
0x0F,0x0F,0x1F,0xFF,0xFE,0xFE,0xFC,0xF8,
0x3F,0xFF,0xFF,0xFF,0xFF,0xE0,0xC0,0xC0,0xC0,0xC0,
0xE0,0xF0,0xFC,0xFF,0x7F,0x3F,0x1F,0x03,
0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// p (112): w=20, h=25
0x73,0xED,
0x00,0x00,0x00,0x80,0xFC,0xFF,0xFF,0xFF,0x7F,0x3C,
0x1E,0x0E,0x0F,0x0F,0x1F,0xFF,0xFF,0xFE,0xFC,0xF0,
0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xC0,
0xC0,0xC0,0xE0,0xE0,0xF8,0xFF,0xFF,0x7F,0x1F,0x07,
0xE0,0xFF,0xFF,0xFF,0xFF,0x07,0x00,0x01,0x03,0x03,
0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=18, h=25
0x71,0xF9,
0x00,0xE0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x0F,
0x0F,0x1F,0xFE,0xFC,0xFF,0xFF,0xFF,0x3F,
0x7F,0xFF,0xFF,0xFF,0xE3,0xC0,0xC0,0xC0,0xC0,0xE0,
0xF0,0xFC,0xFF,0xFF,0xFF,0x7F,0x07,0x00,
0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x01,0x01,0xE0,
0xFF,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// r (114): w=14, h=18
0xCD,0x07,0x62,
0x00,0x00,0x80,0xFC,0xFF,0xFF,0xFF,0x7F,0x38,0x1C,
0x1E,0x1E,0x1F,0x0F,
0x00,0xF8,0xFF,0xFF,0xFF,0x7F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// s (115): w=17, h=18
0x50,0xF3,
0x00,0x00,0x60,0xF8,0xFC,0xFE,0xFE,0xCF,0xC7,0x87,
0x87,0x8F,0x0F,0x3F,0x3E,0x3E,0x3C,
0x70,0xF0,0xF0,0xF1,0xF1,0xC3,0xC3,0x87,0x87,0x87,
0xCF,0xFF,0xFF,0xFF,0xFE,0x3C,0x00,
0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x01,0x01,0x00,0x00,0x00,

// t (116): w=10, h=22
0xC9,0x03,0x82,
0x60,0x70,0xF0,0xFF,0xFF,0xFF,0xFF,0x7F,0x70,0x30,
0x80,0xFC,0xFF,0xFF,0xFF,0x7F,0x03,0x00,0x00,0x00,
0x1F,0x3F,0x3F,0x3F,0x3F,0x3C,0x1C,0x00,0x00,0x00,

// u (117): w=19, h=18
0x52,0xF8,
0x00,0x80,0xF8,0xFF,0xFF,0xFF,0x1F,0x03,0x00,0x00,
0x00,0x00,0x80,0xF8,0xFF,0xFF,0xFF,0x3F,0x07,
0xF8,0xFF,0xFF,0xFF,0xFF,0xE3,0xC0,0xC0,0xC0,0xC0,
0xE0,0xF8,0xFF,0xFF,0xFF,0x7F,0x07,0x00,0x00,
0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,
0x00,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,

// v (118): w=17, h=18
0xD0,0x07,0x82,
0x7F,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x80,0xE0,
0xF8,0xFE,0xFF,0x3F,0x1F,0x07,0x01,
0x00,0x3F,0xFF,0xFF,0xFF,0xF0,0xF8,0xFE,0x7F,0x3F,
0x0F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// w (119): w=25, h=18
0xD8,0x07,0x72,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xC0,0xF0,0xFC,
0xFF,0x3F,0xFF,0xFF,0xFF,0x00,0x00,0x80,0xF0,0xFC,
0xFF,0xFF,0x3F,0x0F,0x03,
0x00,0xFF,0xFF,0xFF,0xFF,0xF8,0xFE,0x7F,0x1F,0x03,
0x00,0x00,0xFF,0xFF,0xFF,0xF8,0xFE,0xFF,0x3F,0x0F,
0x03,0x00,0x00,0x00,0x00,
0x00,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// x (120): w=20, h=18
0xD3,0x07,0x52,
0x00,0x00,0x00,0x00,0x03,0x1F,0x7F,0xFF,0xFF,0xFE,
0xF0,0xF0,0xF8,0xFC,0x7F,0x3F,0x1F,0x0F,0x03,0x01,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0xFC,0x7F,0x3F,0x1F,
0xFF,0xFF,0xFF,0xFC,0xE0,0x80,0x00,0x00,0x00,0x00,
0x02,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,

// y (121): w=21, h=25
0xF4,0x07,0x51,
0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,
0x00,0x00,0x80,0xE0,0xF8,0xFE,0xFF,0x3F,0x0F,0x03,
0x01,
0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xF0,
0xF8,0xFE,0x7F,0x1F,0x07,0x01,0x00,0x00,0x00,0x00,
0x00,
0x80,0xE0,0xE0,0xE0,0xF0,0xFD,0xFF,0x7F,0x3F,0x0F,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// z (122): w=18, h=18
0xD1,0x07,0x52,
0x00,0x00,0x00,0x0C,0x0F,0x0F,0x0F,0x0F,0x8F,0xCF,
0xEF,0xFF,0xFF,0xFF,0x7F,0x3F,0x1F,0x07,
0xC0,0xE0,0xF0,0xF8,0xFC,0xFE,0xFF,0xDF,0xCF,0xC7,
0xC3,0xC1,0xC1,0xC0,0xC0,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,

// braceleft (123): w=13, h=32
0xEC,0x00,0x72,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFC,0xFE,0xFF,0x0F,
0x07,0x07,0x07,
0x80,0x80,0xC0,0xE0,0xFE,0xFF,0x7F,0x1F,0x01,0x00,
0x00,0x00,0x00,
0x03,0x83,0xFF,0xFF,0xFE,0x7E,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x38,0x7F,0xFF,0xFF,0xFF,0xE0,0x60,0x00,0x00,0x00,
0x00,0x00,0x00,

// bar (124): w=9, h=31
0x68,0x32,
0x00,0x00,0x00,0x00,0x00,0xF8,0xFF,0x7F,0x03,
0x00,0x00,0x00,0xE0,0xFF,0xFF,0x0F,0x00,0x00,
0x00,0xC0,0xFE,0xFF,0x1F,0x01,0x00,0x00,0x00,
0x78,0x7F,0x7F,0x03,0x00,0x00,0x00,0x00,0x00,

// braceright (125): w=13, h=32
0x6C,0x0D,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0xFF,0xFF,
0xFF,0xFE,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0xFF,
0xFF,0x81,0x80,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFE,0xFE,0x7E,0x07,
0x03,0x03,0x01,
0xE0,0xE0,0xE0,0xF8,0xFF,0x7F,0x3F,0x07,0x00,0x00,
0x00,0x00,0x00,

// asciitilde (126): w=16, h=6
0x8F,0x0E,0x75,
0x10,0x1C,0x1E,0x06,0x07,0x07,0x0F,0x0E,0x1C,0x3C,
0x38,0x38,0x38,0x1E,0x0E,0x06

};
// 6024 bytes
// 6214 bytes with FAST_FONT_INDEX
