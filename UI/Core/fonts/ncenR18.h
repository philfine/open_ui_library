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

// ncenR18 = "New Century Schoolbook Roman"

const char font_ncenR18[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCF,0x00,
0xD7,0x00,
0xF3,0x00,
0x16,0x01,
0x4E,0x01,
0x86,0x01,
0x8A,0x01,
0xA1,0x01,
0xB8,0x01,
0xC8,0x01,
0xE2,0x01,
0xE9,0x01,
0xF2,0x01,
0xF8,0x01,
0x0F,0x02,
0x32,0x02,
0x4C,0x02,
0x6F,0x02,
0x92,0x02,
0xB8,0x02,
0xDB,0x02,
0xFE,0x02,
0x1E,0x03,
0x41,0x03,
0x64,0x03,
0x6C,0x03,
0x76,0x03,
0x90,0x03,
0x9F,0x03,
0xB9,0x03,
0xD9,0x03,
0x0E,0x04,
0x49,0x04,
0x75,0x04,
0xA4,0x04,
0xD6,0x04,
0xFF,0x04,
0x28,0x05,
0x5D,0x05,
0x92,0x05,
0xA6,0x05,
0xC9,0x05,
0x01,0x06,
0x2A,0x06,
0x68,0x06,
0xA3,0x06,
0xD8,0x06,
0x01,0x07,
0x36,0x07,
0x65,0x07,
0x8E,0x07,
0xBA,0x07,
0xEC,0x07,
0x24,0x08,
0x71,0x08,
0xAC,0x08,
0xDE,0x08,
0x0A,0x09,
0x1B,0x09,
0x3B,0x09,
0x4C,0x09,
0x62,0x09,
0x71,0x09,
0x78,0x09,
0x92,0x09,
0xBB,0x09,
0xD1,0x09,
0xFA,0x09,
0x12,0x0A,
0x2F,0x0A,
0x58,0x0A,
0x84,0x0A,
0x98,0x0A,
0xB0,0x0A,
0xDC,0x0A,
0xF0,0x0A,
0x1E,0x0B,
0x3C,0x0B,
0x54,0x0B,
0x7D,0x0B,
0xA6,0x0B,
0xBC,0x0B,
0xD0,0x0B,
0xE2,0x0B,
0x00,0x0C,
0x20,0x0C,
0x48,0x0C,
0x64,0x0C,
0x8D,0x0C,
0xA1,0x0C,
0xB5,0x0C,
0xBE,0x0C,
0xD2,0x0C,

// space (32): w=1, h=1
0x80,0x11,0x4B,
0x00,

// exclam (33): w=3, h=18
0x42,0x16,
0xFE,0xFF,0xFE,
0x87,0xBF,0x87,
0x03,0x03,0x03,

// quotedbl (34): w=6, h=6
0x05,0x16,
0x3F,0x3F,0x00,0x00,0x3F,0x3F,

// numbersign (35): w=13, h=16
0x2C,0x2F,
0x00,0x20,0x20,0xE0,0xFF,0x3F,0x20,0x20,0xE0,0xFF,
0x3F,0x20,0x20,
0x04,0x04,0xFC,0xFF,0x07,0x04,0x04,0xFC,0xFF,0x07,
0x04,0x04,0x00,

// dollar (36): w=11, h=20
0x4A,0x0F,
0xF8,0xFE,0xC2,0x81,0x81,0xFF,0x01,0x33,0x3E,0x1C,
0x00,
0xE0,0xF1,0x31,0x03,0x03,0xFF,0x07,0x07,0x0E,0xFE,
0x78,
0x00,0x01,0x03,0x02,0x02,0x3F,0x02,0x02,0x01,0x01,
0x00,

// percent (37): w=18, h=19
0x51,0x0F,
0xF0,0xFC,0x0E,0x03,0x01,0x01,0xC3,0x3E,0x04,0xC4,
0x72,0x1D,0x07,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x02,0x02,0x02,0xC1,0x70,0x1C,0x07,0x01,
0xF0,0xFC,0x0E,0x03,0x01,0x01,0xC3,0x3E,
0x00,0x00,0x00,0x00,0x07,0x01,0x00,0x00,0x00,0x00,
0x01,0x03,0x02,0x02,0x02,0x01,0x00,0x00,

// ampersand (38): w=18, h=18
0x51,0x0F,
0x00,0x00,0x00,0x3C,0xFE,0xC3,0x81,0x41,0x63,0x3F,
0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x78,0xFE,0xC6,0x81,0x01,0x03,0x07,0x0E,0x1C,0xB8,
0xF1,0xE3,0xDF,0x87,0x03,0x01,0x01,0xC0,
0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,
0x00,0x00,0x01,0x03,0x03,0x03,0x01,0x00,

// quotesingle (39): w=2, h=6
0x01,0x16,
0x3F,0x3F,

// parenleft (40): w=7, h=21
0x46,0x0F,
0x80,0xE0,0x78,0x1C,0x06,0x02,0x01,
0x3F,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x07,0x0C,0x08,0x10,

// parenright (41): w=7, h=21
0x46,0x09,
0x01,0x02,0x06,0x1C,0x78,0xE0,0x80,
0x00,0x00,0x00,0x00,0xC0,0xFF,0x3F,
0x10,0x08,0x0C,0x07,0x03,0x00,0x00,

// asterisk (42): w=7, h=9
0x26,0x0F,
0x6C,0x28,0x92,0xFF,0x92,0x28,0x6C,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// plus (43): w=12, h=12
0x2B,0xAF,
0x60,0x60,0x60,0x60,0x60,0xFF,0xFF,0x60,0x60,0x60,
0x60,0x60,
0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=4, h=7
0x83,0x0F,0x56,
0x46,0x27,0x1F,0x0E,

// hyphen (45): w=6, h=2
0x85,0x0A,0x56,
0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=3, h=3
0x82,0x0F,0x67,
0x07,0x07,0x07,

// slash (47): w=7, h=18
0x46,0x09,
0x00,0x00,0x00,0xC0,0xF8,0x3F,0x07,
0x80,0xF0,0x7E,0x0F,0x01,0x00,0x00,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=11, h=18
0x4A,0x0F,
0xC0,0xF0,0xFC,0x06,0x01,0x01,0x01,0x06,0xFC,0xF0,
0xC0,
0x0F,0x3F,0xFF,0x80,0x00,0x00,0x00,0x80,0xFF,0x3F,
0x0F,
0x00,0x00,0x00,0x01,0x02,0x02,0x02,0x01,0x00,0x00,
0x00,

// one (49): w=8, h=18
0x47,0x1C,
0x04,0x04,0x06,0xFE,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,
0x02,0x02,0x02,0x03,0x03,0x02,0x02,0x02,

// two (50): w=11, h=18
0x4A,0x0F,
0x18,0x3E,0x1A,0x03,0x01,0x01,0x01,0x83,0xFE,0xFE,
0x38,
0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x80,
0xE0,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,

// three (51): w=11, h=18
0x4A,0x0F,
0x1C,0x3E,0x1A,0x01,0x01,0x01,0x83,0xFF,0x7E,0x1C,
0x00,
0xE0,0xF0,0x60,0x01,0x01,0x01,0x01,0x83,0xFE,0xFC,
0x38,
0x00,0x01,0x01,0x02,0x02,0x02,0x02,0x01,0x01,0x00,
0x00,

// four (52): w=12, h=18
0x4B,0x09,
0x00,0x00,0x00,0x80,0xE0,0x30,0x18,0x0C,0xFE,0xFF,
0x00,0x00,
0x38,0x2E,0x23,0x21,0x20,0x20,0x20,0x20,0xFF,0xFF,
0x20,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x03,0x03,
0x02,0x02,

// five (53): w=11, h=18
0x4A,0x0F,
0x00,0xFF,0x03,0x83,0x83,0x83,0x83,0x83,0x03,0x01,
0x00,
0x60,0xF1,0x71,0x00,0x00,0x00,0x01,0x01,0xFF,0xFE,
0x38,
0x00,0x01,0x01,0x02,0x02,0x02,0x02,0x03,0x01,0x00,
0x00,

// six (54): w=11, h=18
0x4A,0x0F,
0xC0,0xF8,0xFE,0x02,0x83,0x81,0x81,0x81,0x07,0x0E,
0x0E,
0x1F,0xFF,0xFF,0x01,0x00,0x00,0x00,0x01,0xFF,0xFE,
0x38,
0x00,0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,
0x00,

// seven (55): w=10, h=18
0x49,0x15,
0x0F,0x03,0x03,0x03,0x03,0x03,0xE3,0x7B,0x0F,0x03,
0x00,0x00,0x00,0xC0,0xF8,0xFF,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x01,0x00,0x00,0x00,0x00,

// eight (56): w=11, h=18
0x4A,0x0F,
0x00,0x38,0xFE,0xE3,0xC1,0x81,0x81,0xC3,0x7E,0x38,
0x00,
0x78,0xFC,0x86,0x03,0x01,0x03,0x03,0x07,0x8E,0xFC,
0x78,
0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x01,
0x00,

// nine (57): w=11, h=18
0x4A,0x0F,
0x70,0xFC,0xFE,0x07,0x01,0x01,0x01,0x03,0xFE,0xFC,
0xF0,
0xC0,0xC1,0x83,0x07,0x04,0x04,0x04,0xC2,0xFF,0x7F,
0x0F,
0x01,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x01,0x00,
0x00,

// colon (58): w=3, h=12
0x22,0xD6,
0x07,0x07,0x07,
0x0E,0x0E,0x0E,

// semicolon (59): w=4, h=16
0x23,0xD5,
0x07,0x07,0x07,0x00,
0x8C,0x4E,0x3E,0x1C,

// less (60): w=12, h=12
0x2B,0xAF,
0x60,0x60,0xF0,0xF0,0x98,0x98,0x0C,0x0C,0x06,0x06,
0x03,0x03,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x06,0x06,
0x0C,0x0C,

// equal (61): w=12, h=6
0x8B,0x08,0x57,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x33,0x33,

// greater (62): w=12, h=12
0x2B,0xAF,
0x03,0x03,0x06,0x06,0x0C,0x0C,0x98,0x98,0xF0,0xF0,
0x60,0x60,
0x0C,0x0C,0x06,0x06,0x03,0x03,0x01,0x01,0x00,0x00,
0x00,0x00,

// question (63): w=10, h=18
0x49,0x0F,
0x1C,0x1E,0x1A,0x01,0x01,0x81,0xC3,0xFE,0x7E,0x3C,
0x00,0x00,0x80,0x9C,0x87,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// at (64): w=17, h=18
0x50,0x0F,
0xC0,0xF0,0x30,0x0C,0x04,0xC2,0xE2,0x21,0x11,0x11,
0x21,0xF1,0xF1,0x02,0x06,0x0C,0xF8,
0x3F,0xFF,0xC0,0x00,0x0F,0x1F,0x20,0x20,0x10,0x08,
0x3E,0x3F,0x21,0x10,0x88,0x46,0x01,
0x00,0x00,0x00,0x03,0x03,0x02,0x02,0x02,0x02,0x02,
0x02,0x02,0x03,0x01,0x00,0x00,0x00,

// A (65): w=19, h=18
0x52,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x30,0x0C,0x0F,
0x3E,0xF8,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0x30,0x0C,0x0B,0x08,0x08,0x08,0x08,
0x08,0x08,0x0F,0x3F,0xFC,0xE0,0x80,0x00,0x00,
0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x02,0x03,0x03,0x03,0x02,0x02,

// B (66): w=14, h=18
0x4D,0x16,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x83,
0xFE,0x7E,0x38,0x00,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,
0x03,0xFF,0xFE,0x78,
0x02,0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,
0x03,0x01,0x01,0x00,

// C (67): w=15, h=18
0x4E,0x0F,
0xC0,0xF0,0xFC,0x1E,0x06,0x03,0x01,0x01,0x01,0x01,
0x01,0x03,0x02,0x06,0x3F,
0x0F,0x3F,0xFF,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0x70,
0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x02,
0x02,0x03,0x01,0x01,0x00,

// D (68): w=16, h=18
0x4F,0x16,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,
0x03,0x02,0x0E,0xFC,0xF0,0xC0,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xFF,0x3F,0x0F,
0x02,0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,
0x03,0x01,0x01,0x00,0x00,0x00,

// E (69): w=13, h=18
0x4C,0x10,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x81,0xE1,0x01,
0x03,0x07,0x3F,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x03,0x0F,0x00,
0x00,0x80,0xF0,
0x02,0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,
0x03,0x03,0x03,

// F (70): w=13, h=18
0x4C,0x10,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x81,0xE1,0x01,
0x03,0x07,0x3F,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x03,0x0F,0x00,
0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// G (71): w=17, h=18
0x50,0x0E,
0xC0,0xF0,0xFC,0x1E,0x02,0x03,0x01,0x01,0x01,0x01,
0x01,0x03,0x03,0x0E,0x3F,0x00,0x00,
0x0F,0x3F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x04,0x04,0x84,0xFC,0xFC,0x04,0x04,
0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x02,
0x02,0x03,0x01,0x01,0x03,0x00,0x00,

// H (72): w=17, h=18
0x50,0x16,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x02,0x02,0x03,0x03,0x02,0x02,

// I (73): w=6, h=18
0x45,0x15,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// J (74): w=11, h=18
0x4A,0x10,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0x01,
0x01,
0xF0,0xF8,0x38,0x10,0x00,0x00,0x00,0xFF,0xFF,0x00,
0x00,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,
0x00,

// K (75): w=18, h=18
0x51,0x14,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x80,0xC0,0x60,0x31,
0x19,0x0F,0x07,0x03,0x01,0x01,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x06,0x03,0x03,0x07,0x0E,0x1C,
0x38,0x70,0xE0,0xC0,0x80,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x02,0x02,0x03,0x03,0x03,0x02,0x02,

// L (76): w=13, h=18
0x4C,0x15,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xF0,
0x02,0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,
0x03,0x03,0x03,

// M (77): w=20, h=18
0x53,0x10,
0x01,0x01,0x03,0xFF,0x07,0x1F,0xFC,0xF0,0x80,0x00,
0x00,0x00,0x00,0xC0,0x3C,0x07,0xFF,0xFF,0x01,0x01,
0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x07,0x3F,0xFC,
0xE0,0x70,0x0E,0x01,0x00,0x00,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x02,0x02,0x00,0x00,0x01,
0x03,0x00,0x00,0x00,0x02,0x02,0x03,0x03,0x02,0x02,

// N (78): w=19, h=18
0x52,0x0F,
0x01,0x01,0x03,0xFF,0x0F,0x1E,0x38,0x70,0xE0,0x80,
0x00,0x00,0x01,0x01,0x03,0xFF,0x03,0x01,0x01,
0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x01,0x03,
0x0F,0x1C,0x38,0xF0,0xE0,0xFF,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x03,0x02,0x02,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x03,0x00,0x00,0x00,

// O (79): w=17, h=18
0x50,0x0F,
0xC0,0xF0,0xFC,0x1E,0x02,0x03,0x01,0x01,0x01,0x01,
0x01,0x03,0x02,0x1E,0xFC,0xF0,0xC0,
0x0F,0x3F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xE0,0xFF,0x3F,0x0F,
0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x02,
0x02,0x03,0x01,0x01,0x00,0x00,0x00,

// P (80): w=13, h=18
0x4C,0x15,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x03,
0xFE,0xFE,0x78,
0x00,0x00,0xFF,0xFF,0x02,0x02,0x02,0x02,0x02,0x03,
0x01,0x01,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// Q (81): w=17, h=22
0x50,0x0F,
0xC0,0xF0,0xFC,0x1E,0x02,0x03,0x01,0x01,0x01,0x01,
0x01,0x03,0x02,0x1E,0xFC,0xF0,0xC0,
0x0F,0x3F,0xFF,0xC0,0xE0,0x10,0x08,0x08,0x08,0x18,
0x70,0xC0,0x00,0xE0,0xFF,0x3F,0x0F,
0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x02,
0x02,0x07,0x1F,0x39,0x30,0x10,0x0C,

// R (82): w=15, h=18
0x4E,0x15,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x83,
0xFE,0x7E,0x38,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x03,0x07,0x3E,
0xFC,0xF0,0x00,0x00,0xC0,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,
0x01,0x03,0x03,0x03,0x00,

// S (83): w=13, h=18
0x4C,0x0F,
0x38,0x7E,0xE2,0xC3,0xC1,0x81,0x81,0x01,0x03,0x02,
0x0E,0x3F,0x00,
0xF0,0xC0,0x00,0x00,0x01,0x01,0x03,0x03,0x07,0x06,
0x8E,0xFC,0x78,
0x03,0x01,0x01,0x03,0x02,0x02,0x02,0x02,0x02,0x03,
0x01,0x01,0x00,

// T (84): w=14, h=18
0x4D,0x10,
0x3F,0x07,0x03,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x01,0x03,0x07,0x3F,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x02,0x02,0x02,0x03,0x03,0x02,0x02,
0x02,0x00,0x00,0x00,

// U (85): w=16, h=18
0x4F,0x15,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0xFF,0x03,0x01,
0x00,0x00,0x7F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0x7F,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x02,0x02,0x02,
0x03,0x01,0x01,0x00,0x00,0x00,

// V (86): w=18, h=18
0x51,0x08,
0x01,0x01,0x03,0x1F,0x7F,0xF9,0xC1,0x00,0x00,0x00,
0x00,0x00,0x00,0xC1,0x39,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x7F,0xF8,0xC0,
0xE0,0x18,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=25, h=18
0x58,0x08,
0x01,0x01,0x07,0x3F,0xFF,0xE1,0x01,0x00,0x00,0x00,
0x01,0xF1,0x0F,0x3F,0xFF,0xE1,0x01,0x00,0x00,0x00,
0x01,0xF1,0x0F,0x01,0x01,
0x00,0x00,0x00,0x00,0x01,0x0F,0x7F,0xF8,0xE0,0x38,
0x07,0x00,0x00,0x00,0x01,0x0F,0x7F,0xF8,0xE0,0x78,
0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,

// X (88): w=19, h=18
0x52,0x08,
0x00,0x01,0x01,0x03,0x07,0x1F,0x3F,0xF9,0xE1,0x80,
0x40,0x30,0x09,0x07,0x03,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x0C,0x03,0x07,
0x0F,0x3C,0x78,0xF0,0xC0,0x80,0x00,0x00,0x00,
0x02,0x02,0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,
0x00,0x02,0x02,0x03,0x03,0x03,0x03,0x02,0x02,

// Y (89): w=16, h=18
0x4F,0x09,
0x01,0x01,0x03,0x0F,0x3F,0xF9,0xE0,0x80,0x00,0x80,
0xE1,0x39,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFE,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x03,0x03,0x02,
0x02,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=14, h=18
0x4D,0x0F,
0x00,0x1F,0x07,0x03,0x01,0x01,0x01,0x81,0xE1,0x71,
0x3D,0x0F,0x07,0x01,
0x00,0x80,0xC0,0xF0,0x38,0x1C,0x0F,0x03,0x01,0x00,
0x00,0x00,0x80,0xE0,
0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
0x02,0x03,0x03,0x03,

// bracketleft (91): w=5, h=21
0x44,0x14,
0xFF,0xFF,0x01,0x01,0x01,
0xFF,0xFF,0x00,0x00,0x00,
0x1F,0x1F,0x10,0x10,0x10,

// backslash (92): w=10, h=18
0x49,0x09,
0x03,0x0F,0x3C,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x0F,0x3C,0xF0,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,

// bracketright (93): w=5, h=21
0x44,0x0A,
0x01,0x01,0x01,0xFF,0xFF,
0x00,0x00,0x00,0xFF,0xFF,
0x10,0x10,0x10,0x1F,0x1F,

// asciicircum (94): w=10, h=10
0x29,0x0F,
0x00,0xC0,0xF0,0x3C,0x0F,0x0F,0x3C,0xF0,0xC0,0x00,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,

// underscore (95): w=12, h=2
0x8B,0x13,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,

// grave (96): w=5, h=4
0x04,0x10,
0x03,0x03,0x06,0x04,0x08,

// a (97): w=12, h=12
0x2B,0xCE,
0x00,0x8E,0xCE,0x47,0x41,0x21,0x21,0x23,0xFE,0xFC,
0x00,0x00,
0x07,0x0F,0x0C,0x08,0x08,0x08,0x08,0x04,0x07,0x0F,
0x0C,0x04,

// b (98): w=13, h=18
0x4C,0x09,
0x01,0x01,0xFF,0xFF,0x80,0xC0,0x40,0x40,0x40,0xC0,
0x80,0x80,0x00,
0x00,0x00,0xFF,0xFF,0x81,0x00,0x00,0x00,0x00,0x00,
0xC3,0xFF,0x7E,
0x00,0x00,0x03,0x01,0x01,0x03,0x02,0x02,0x02,0x03,
0x01,0x01,0x00,

// c (99): w=10, h=12
0x29,0xCF,
0xF8,0xFE,0x0E,0x03,0x01,0x01,0x01,0x07,0x0E,0x0E,
0x01,0x07,0x07,0x0C,0x08,0x08,0x08,0x08,0x0C,0x06,

// d (100): w=13, h=18
0x4C,0x0E,
0x00,0x80,0x80,0xC0,0x40,0x40,0x40,0x81,0x81,0xFF,
0xFF,0x00,0x00,
0x7E,0xFF,0xC3,0x00,0x00,0x00,0x00,0x00,0x81,0xFF,
0xFF,0x00,0x00,
0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x03,
0x03,0x02,0x02,

// e (101): w=11, h=12
0x2A,0xCF,
0xF8,0xFE,0x2E,0x23,0x21,0x21,0x21,0x23,0x2E,0x3E,
0x38,
0x01,0x07,0x07,0x0C,0x08,0x08,0x08,0x08,0x0C,0x06,
0x00,

// f (102): w=9, h=18
0x48,0x0C,
0x40,0x40,0xFC,0xFE,0x43,0x41,0x01,0x07,0x06,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,

// g (103): w=13, h=17
0x4C,0xC7,
0x00,0x3C,0x7E,0xC3,0x81,0x81,0x81,0xC3,0x7E,0x3E,
0x01,0x03,0x03,
0xE0,0xF2,0x97,0x0D,0x0C,0x0C,0x0C,0x0C,0x98,0xF8,
0x70,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,

// h (104): w=14, h=18
0x4D,0x08,
0x01,0x01,0xFF,0xFF,0x00,0x80,0x80,0xC0,0xC0,0xC0,
0x80,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x01,
0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x02,0x02,
0x03,0x03,0x02,0x02,

// i (105): w=6, h=18
0x45,0x0F,
0x40,0x40,0xC7,0xC7,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// j (106): w=7, h=23
0xC6,0x00,0x28,
0x00,0x00,0x00,0x40,0x40,0xC7,0xC7,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x30,0x70,0x40,0x40,0x60,0x3F,0x1F,

// k (107): w=14, h=18
0x4D,0x0E,
0x01,0x01,0xFF,0xFF,0x00,0x00,0x40,0x40,0xC0,0xC0,
0x40,0x40,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x08,0x1C,0x3E,0x73,0xE1,0xC0,
0x80,0x00,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x02,0x03,
0x03,0x03,0x02,0x02,

// l (108): w=6, h=18
0x45,0x0F,
0x01,0x01,0xFF,0xFF,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// m (109): w=22, h=12
0x35,0xC8,
0x01,0x01,0xFF,0xFF,0x04,0x02,0x02,0x03,0x03,0x07,
0xFE,0xFC,0x04,0x02,0x02,0x03,0x03,0x07,0xFE,0xFC,
0x00,0x00,
0x08,0x08,0x0F,0x0F,0x08,0x08,0x00,0x00,0x08,0x08,
0x0F,0x0F,0x08,0x08,0x00,0x00,0x08,0x08,0x0F,0x0F,
0x08,0x08,

// n (110): w=14, h=12
0x2D,0xC8,
0x01,0x01,0xFF,0xFF,0x04,0x02,0x02,0x03,0x03,0x07,
0xFE,0xFC,0x00,0x00,
0x08,0x08,0x0F,0x0F,0x08,0x08,0x00,0x00,0x08,0x08,
0x0F,0x0F,0x08,0x08,

// o (111): w=11, h=12
0x2A,0xCF,
0xF8,0xFE,0x0E,0x03,0x01,0x01,0x01,0x03,0x0E,0xFE,
0xF8,
0x01,0x07,0x07,0x0C,0x08,0x08,0x08,0x0C,0x07,0x07,
0x01,

// p (112): w=13, h=17
0x4C,0xC9,
0x01,0x01,0xFF,0xFF,0x06,0x03,0x01,0x01,0x01,0x03,
0x0E,0xFE,0xF8,
0x00,0x00,0xFF,0xFF,0x06,0x0C,0x08,0x08,0x08,0x0C,
0x07,0x07,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// q (113): w=13, h=17
0x4C,0xCE,
0xF8,0xFE,0x0E,0x03,0x01,0x01,0x01,0x02,0x06,0xFE,
0xFF,0x00,0x00,
0x01,0x07,0x07,0x0C,0x08,0x08,0x08,0x0C,0x06,0xFF,
0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,

// r (114): w=10, h=12
0x29,0xC8,
0x01,0x01,0xFF,0xFF,0x04,0x02,0x01,0x03,0x07,0x06,
0x08,0x08,0x0F,0x0F,0x08,0x08,0x00,0x00,0x00,0x00,

// s (115): w=9, h=12
0x28,0xCF,
0x1C,0x3E,0x33,0x61,0x61,0x63,0xC6,0xCF,0x80,
0x0F,0x06,0x0C,0x08,0x08,0x08,0x0C,0x07,0x03,

// t (116): w=8, h=16
0x27,0x4F,
0x10,0x18,0xFC,0xFF,0x10,0x10,0x10,0x10,
0x00,0x00,0x7F,0xFF,0xC0,0x80,0x80,0x70,

// u (117): w=14, h=12
0x2D,0xC8,
0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,0x00,0x01,0x01,
0xFF,0xFF,0x00,0x00,
0x00,0x00,0x03,0x07,0x0E,0x0C,0x0C,0x04,0x04,0x02,
0x0F,0x0F,0x08,0x08,

// v (118): w=15, h=12
0x2E,0xC1,
0x01,0x01,0x0F,0x3F,0xF9,0xE1,0x80,0x00,0x80,0xE1,
0x39,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x0E,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,

// w (119): w=19, h=12
0x32,0xC1,
0x01,0x01,0x1F,0xFF,0xF1,0x81,0x00,0x80,0x71,0x0F,
0xFF,0xF9,0x80,0x00,0x81,0x71,0x0F,0x01,0x01,
0x00,0x00,0x00,0x00,0x07,0x0F,0x0C,0x03,0x00,0x00,
0x00,0x07,0x0F,0x0C,0x03,0x00,0x00,0x00,0x00,

// x (120): w=13, h=12
0x2C,0xC7,
0x01,0x03,0x07,0x0F,0x9D,0xF0,0x70,0xF8,0x8D,0x07,
0x03,0x01,0x00,
0x08,0x0C,0x0E,0x0B,0x01,0x00,0x00,0x00,0x0B,0x0F,
0x0E,0x0C,0x08,

// y (121): w=13, h=17
0x4C,0xC2,
0x00,0x01,0x07,0x3F,0xFD,0xE0,0x80,0x00,0xC0,0x70,
0x1D,0x03,0x01,
0xC0,0xC0,0x80,0x00,0x80,0xC3,0x3F,0x0E,0x03,0x00,
0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// z (122): w=9, h=12
0x28,0xCF,
0x0F,0x03,0x81,0xE1,0x71,0x3D,0x0F,0x07,0x03,
0x0E,0x0F,0x0B,0x09,0x08,0x08,0x08,0x0C,0x0F,

// braceleft (123): w=6, h=21
0x45,0x0F,
0x00,0x00,0xFC,0xFE,0x01,0x01,
0x04,0x04,0xFB,0xF1,0x00,0x00,
0x00,0x00,0x07,0x0F,0x10,0x10,

// bar (124): w=2, h=18
0xC1,0x00,0xAC,
0xFF,0xFF,
0xFF,0xFF,
0x03,0x03,

// braceright (125): w=6, h=21
0x45,0x0E,
0x01,0x01,0xFE,0xFC,0x00,0x00,
0x00,0x00,0xF1,0xFB,0x04,0x04,
0x10,0x10,0x0F,0x07,0x00,0x00,

// asciitilde (126): w=12, h=4
0x8B,0x08,0x56,
0x0C,0x0E,0x07,0x03,0x03,0x07,0x0E,0x0C,0x0C,0x0E,
0x07,0x03

};
// 3107 bytes
// 3297 bytes with FAST_FONT_INDEX
