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

const char font_lubI19[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD8,0x00,
0xE2,0x00,
0x14,0x01,
0x38,0x01,
0x76,0x01,
0xB1,0x01,
0xB7,0x01,
0xD5,0x01,
0xF2,0x01,
0x09,0x02,
0x29,0x02,
0x36,0x02,
0x3F,0x02,
0x46,0x02,
0x7C,0x02,
0xA8,0x02,
0xC8,0x02,
0xF4,0x02,
0x1D,0x03,
0x49,0x03,
0x75,0x03,
0xA1,0x03,
0xCE,0x03,
0xFA,0x03,
0x26,0x04,
0x34,0x04,
0x4B,0x04,
0x70,0x04,
0x83,0x04,
0xA7,0x04,
0xC8,0x04,
0x06,0x05,
0x41,0x05,
0x73,0x05,
0xA8,0x05,
0xE6,0x05,
0x1B,0x06,
0x51,0x06,
0x89,0x06,
0xD1,0x06,
0xF5,0x06,
0x25,0x07,
0x63,0x07,
0x92,0x07,
0xE0,0x07,
0x25,0x08,
0x5D,0x08,
0x92,0x08,
0xD4,0x08,
0x09,0x09,
0x38,0x09,
0x6E,0x09,
0xA7,0x09,
0xE0,0x09,
0x2B,0x0A,
0x6D,0x0A,
0xA3,0x0A,
0xD8,0x0A,
0xF9,0x0A,
0x11,0x0B,
0x31,0x0B,
0x51,0x0B,
0x5F,0x0B,
0x67,0x0B,
0x85,0x0B,
0xB1,0x0B,
0xCB,0x0B,
0xFA,0x0B,
0x12,0x0C,
0x3C,0x0C,
0x6B,0x0C,
0x97,0x0C,
0xAB,0x0C,
0xD5,0x0C,
0xFE,0x0C,
0x15,0x0D,
0x43,0x0D,
0x61,0x0D,
0x7D,0x0D,
0xAC,0x0D,
0xD8,0x0D,
0xF3,0x0D,
0x0B,0x0E,
0x25,0x0E,
0x43,0x0E,
0x63,0x0E,
0x8D,0x0E,
0xA9,0x0E,
0xDB,0x0E,
0xF9,0x0E,
0x16,0x0F,
0x2A,0x0F,
0x47,0x0F,

// space (32): w=1, h=1
0x80,0x12,0x4C,
0x00,

// exclam (33): w=6, h=19
0x45,0x13,
0x00,0x00,0x80,0xFF,0x7F,0x07,
0x00,0x00,0x3F,0x03,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,

// quotedbl (34): w=7, h=6
0x86,0x00,0x93,
0x07,0x3F,0x00,0x00,0x07,0x3F,0x01,

// numbersign (35): w=16, h=19
0x4F,0x12,
0x00,0x40,0x40,0x40,0x40,0x40,0xC0,0x70,0x5C,0x47,
0x41,0xC0,0x70,0x5C,0x47,0x41,
0x10,0x10,0xD0,0x70,0x1C,0x17,0x11,0xD0,0x70,0x1C,
0x17,0x11,0x10,0x10,0x10,0x00,
0x04,0x07,0x01,0x00,0x00,0x04,0x07,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=11, h=21
0xCA,0x00,0x86,
0x00,0x00,0xFC,0xFE,0x83,0x81,0x7F,0x01,0x01,0x03,
0x0F,
0x00,0x80,0x00,0x01,0xFB,0x07,0x0E,0xFC,0xFC,0x70,
0x00,
0x07,0x07,0x04,0x3C,0x07,0x04,0x02,0x03,0x01,0x00,
0x00,

// percent (37): w=20, h=19
0x53,0x12,
0x00,0x70,0xFC,0x8E,0x03,0x01,0x81,0xC1,0x7E,0x3C,
0x00,0x80,0xC0,0x60,0x30,0x18,0x04,0x02,0x01,0x01,
0x00,0x00,0x00,0x81,0xC1,0x61,0x31,0x18,0x0C,0x06,
0xF3,0xF9,0x0C,0x06,0x02,0x02,0xC6,0xFC,0x00,0x00,
0x04,0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x07,0x04,0x04,0x04,0x02,0x03,0x01,0x00,0x00,

// ampersand (38): w=19, h=19
0x52,0x12,
0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0x82,0x81,
0xC1,0x61,0x7F,0x3E,0x00,0x00,0x00,0x00,0x00,
0xF8,0xFC,0xFE,0x06,0x03,0x01,0x01,0x0F,0x3F,0xFC,
0xF0,0xC0,0x82,0x42,0x3E,0x0E,0x02,0x02,0x02,
0x00,0x03,0x03,0x06,0x06,0x04,0x04,0x04,0x04,0x02,
0x03,0x07,0x07,0x06,0x04,0x04,0x00,0x00,0x00,

// quotesingle (39): w=3, h=7
0x82,0x00,0x93,
0x07,0x7F,0x0F,

// parenleft (40): w=9, h=23
0xC8,0x00,0x62,
0x00,0x00,0xC0,0xE0,0x38,0x0C,0x06,0x02,0x01,
0xF8,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x0F,0x30,0x40,0x00,0x00,0x00,0x00,0x00,

// parenright (41): w=9, h=23
0x48,0x07,
0x00,0x00,0x00,0x00,0x00,0x03,0xFC,0xF0,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFF,0x3F,0x01,
0x40,0x20,0x10,0x0C,0x07,0x03,0x00,0x00,0x00,

// asterisk (42): w=10, h=9
0xA9,0x00,0x83,
0x88,0x8C,0xD8,0x70,0x28,0xEF,0xD1,0x18,0x08,0x08,
0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,

// plus (43): w=15, h=16
0x2E,0x73,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFF,0x03,
0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x81,0xF9,0x1F,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// comma (44): w=5, h=9
0xA4,0x0F,0x56,
0x00,0x8E,0xFF,0x7F,0x07,
0x01,0x01,0x00,0x00,0x00,

// hyphen (45): w=6, h=2
0x85,0x09,0x74,
0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=4, h=3
0x83,0x10,0x66,
0x06,0x07,0x07,0x03,

// slash (47): w=17, h=23
0xD0,0x00,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xC0,0x70,0x18,0x0E,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x30,0x1C,0x06,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x60,0x38,0x0C,0x07,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=14, h=19
0x4D,0x19,
0x00,0xC0,0xF0,0x78,0x0C,0x06,0x03,0x01,0x01,0x01,
0x03,0xFE,0xFC,0xF8,
0xFE,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,
0xF0,0x7F,0x1F,0x03,
0x00,0x01,0x03,0x06,0x04,0x04,0x04,0x06,0x03,0x01,
0x00,0x00,0x00,0x00,

// one (49): w=10, h=19
0x49,0x1D,
0x00,0x00,0x00,0x00,0x01,0x01,0xE1,0xFF,0x7F,0x03,
0x00,0x00,0x00,0x00,0x80,0xFC,0xFF,0x0F,0x00,0x00,
0x04,0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x04,

// two (50): w=14, h=19
0x4D,0x14,
0x00,0x00,0x00,0x08,0x0E,0x02,0x01,0x01,0x01,0x01,
0x83,0xFF,0xFE,0x3C,
0x00,0x00,0xC0,0x60,0x20,0x10,0x08,0x0C,0x06,0x03,
0x03,0x01,0x00,0x00,
0x06,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x00,0x00,0x00,

// three (51): w=13, h=19
0x4C,0x1A,
0x00,0x00,0x00,0x08,0x0F,0x03,0x01,0x01,0x81,0x81,
0xE3,0x7E,0x3C,
0x00,0x80,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0xFE,
0xFC,0x78,0x00,
0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x02,0x03,0x01,
0x00,0x00,0x00,

// four (52): w=14, h=19
0x4D,0x14,
0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x20,0x10,0x08,
0xE4,0xFE,0x3F,0x01,
0x30,0x38,0x34,0x32,0x31,0x30,0x30,0x30,0xB0,0xFC,
0xFF,0x37,0x30,0x30,
0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x06,0x07,0x07,
0x04,0x04,0x00,0x00,

// five (53): w=14, h=19
0x4D,0x19,
0x00,0x00,0x80,0xFC,0x83,0x83,0x83,0x83,0x03,0x03,
0x03,0x03,0x03,0x03,
0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x83,0xFF,
0xFE,0x3C,0x00,0x00,
0x07,0x07,0x04,0x04,0x04,0x04,0x06,0x02,0x03,0x01,
0x00,0x00,0x00,0x00,

// six (54): w=14, h=19
0x4D,0x19,
0x00,0xC0,0xF0,0xF8,0x1C,0x8E,0x82,0x83,0x81,0x81,
0x01,0x01,0x0F,0x0E,
0xFE,0xFF,0xFF,0x03,0x01,0x00,0x00,0x00,0x00,0x81,
0xFF,0x7F,0x1C,0x00,
0x00,0x01,0x03,0x06,0x04,0x04,0x04,0x06,0x03,0x03,
0x01,0x00,0x00,0x00,

// seven (55): w=14, h=19
0xCD,0x00,0x83,
0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x83,0xC3,0x63,
0x13,0x0B,0x07,0x03,
0x00,0x80,0xC0,0xF0,0x38,0x0C,0x06,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,
0x06,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// eight (56): w=14, h=19
0x4D,0x19,
0x00,0x00,0x20,0xF8,0xFC,0xC2,0x83,0x01,0x01,0x81,
0xC3,0x7F,0x3E,0x1C,
0xF0,0xF8,0x9C,0x04,0x03,0x01,0x03,0x07,0x07,0x0F,
0xFC,0xFC,0x10,0x00,
0x01,0x03,0x03,0x06,0x04,0x04,0x04,0x04,0x02,0x03,
0x01,0x00,0x00,0x00,

// nine (57): w=14, h=19
0x4D,0x19,
0x00,0xC0,0xF0,0xFC,0x0E,0x06,0x03,0x01,0x01,0x01,
0x03,0xFE,0xFC,0xF8,
0x80,0x81,0x07,0x07,0x0C,0x08,0x08,0x08,0x08,0xC4,
0xFA,0x7F,0x1F,0x03,
0x03,0x07,0x06,0x04,0x04,0x04,0x06,0x02,0x03,0x01,
0x00,0x00,0x00,0x00,

// colon (58): w=6, h=14
0x25,0xB3,
0x00,0x00,0x06,0x07,0x07,0x03,
0x30,0x38,0x38,0x18,0x00,0x00,

// semicolon (59): w=7, h=19
0x46,0xAD,
0x00,0x00,0x00,0x06,0x07,0x07,0x03,
0x00,0x30,0xF0,0xF0,0x10,0x00,0x00,
0x04,0x06,0x03,0x01,0x00,0x00,0x00,

// less (60): w=17, h=16
0xB0,0x03,0x62,
0x80,0x80,0x80,0xC0,0x40,0x60,0x20,0x20,0x10,0x10,
0x18,0x08,0x0C,0x04,0x06,0x02,0x03,
0x00,0x01,0x01,0x03,0x06,0x06,0x0C,0x08,0x18,0x10,
0x30,0x60,0x60,0xC0,0x00,0x00,0x00,

// equal (61): w=16, h=7
0x8F,0x08,0x54,
0x40,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,
0x41,0x41,0x41,0x41,0x41,0x01,

// greater (62): w=17, h=16
0x30,0x67,
0x00,0x00,0x00,0x03,0x06,0x06,0x0C,0x08,0x18,0x10,
0x30,0x60,0x60,0xC0,0x80,0x80,0x00,
0xC0,0x40,0x60,0x20,0x30,0x10,0x18,0x08,0x08,0x04,
0x04,0x06,0x02,0x03,0x01,0x01,0x01,

// question (63): w=10, h=19
0xC9,0x00,0x83,
0x08,0x0E,0x03,0x01,0x01,0x01,0x83,0xF7,0x7E,0x3E,
0x00,0x30,0x38,0x3C,0x02,0x01,0x00,0x00,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// at (64): w=20, h=19
0x53,0x19,
0x00,0xC0,0x20,0x10,0x08,0x04,0x82,0x42,0x22,0x11,
0x11,0x11,0x11,0xF1,0x71,0x02,0x02,0x04,0x08,0xF0,
0x3F,0xC0,0x00,0x00,0x00,0x3E,0x7F,0x40,0x40,0x20,
0x10,0x0C,0x7F,0x7F,0x40,0x40,0x20,0x20,0x18,0x07,
0x00,0x00,0x01,0x02,0x02,0x04,0x04,0x04,0x04,0x04,
0x04,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=19, h=19
0x52,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,
0x30,0x0C,0x7E,0xFF,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0x60,0x30,0x1C,0x16,0x11,0x10,
0x10,0x10,0x10,0x1F,0xFF,0xFE,0xC0,0x00,0x00,
0x04,0x04,0x06,0x05,0x04,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x04,0x04,0x07,0x07,0x07,0x04,0x04,

// B (66): w=16, h=19
0x4F,0x0D,
0x00,0x00,0x00,0x00,0x01,0xF9,0xFF,0x7F,0x01,0x01,
0x01,0x01,0x83,0xFF,0x7E,0x3C,
0x00,0x00,0x00,0xE0,0xFF,0xFF,0x07,0x02,0x02,0x02,
0x07,0x05,0xFD,0xF8,0xF0,0x00,
0x04,0x04,0x06,0x07,0x07,0x04,0x04,0x04,0x04,0x04,
0x06,0x03,0x03,0x01,0x00,0x00,

// C (67): w=17, h=19
0x50,0x19,
0x00,0xC0,0xE0,0xF0,0x38,0x0C,0x06,0x02,0x03,0x01,
0x01,0x01,0x01,0x01,0x03,0x1F,0x0E,
0x7E,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0x03,0x06,0x06,0x04,0x04,0x04,0x04,
0x04,0x06,0x02,0x02,0x00,0x00,0x00,

// D (68): w=20, h=19
0x53,0x0D,
0x00,0x00,0x00,0x00,0x01,0xF9,0xFF,0x3F,0x01,0x01,
0x01,0x01,0x01,0x01,0x03,0x03,0x0E,0xFE,0xFC,0xF0,
0x00,0x00,0x00,0xE0,0xFF,0xFF,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0x7F,0x1F,0x03,
0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x04,0x04,
0x04,0x06,0x02,0x03,0x01,0x01,0x00,0x00,0x00,0x00,

// E (69): w=17, h=19
0x50,0x06,
0x00,0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0x07,0x01,
0x01,0x01,0x01,0x81,0x01,0x07,0x03,
0x00,0x00,0x00,0xC0,0xFE,0xFF,0x0F,0x02,0x02,0x02,
0x02,0x02,0x0F,0x03,0x00,0x00,0x00,
0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x04,0x04,
0x04,0x04,0x06,0x07,0x01,0x00,0x00,

// F (70): w=17, h=19
0xD0,0x00,0x42,
0x00,0x00,0x00,0x00,0x01,0xE1,0xFF,0xFF,0x07,0x01,
0x01,0x01,0x01,0x81,0x01,0x07,0x03,
0x00,0x00,0x00,0xC0,0xFE,0xFF,0x0F,0x02,0x02,0x02,
0x02,0x02,0x0F,0x03,0x00,0x00,0x00,
0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=18, h=19
0x51,0x19,
0x00,0xC0,0xE0,0xF0,0x38,0x1C,0x06,0x06,0x03,0x01,
0x01,0x01,0x01,0x01,0x01,0x0B,0x0F,0x02,
0x7E,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x08,0x08,0xE8,0xF8,0xF8,0x18,0x08,0x08,
0x00,0x01,0x03,0x03,0x06,0x06,0x04,0x04,0x04,0x04,
0x04,0x04,0x03,0x03,0x00,0x00,0x00,0x00,

// H (72): w=23, h=19
0xD6,0x00,0x42,
0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0x7F,0x03,0x01,
0x01,0x00,0x00,0x00,0x00,0x01,0x81,0xFF,0xFF,0x3F,
0x03,0x01,0x01,
0x00,0x00,0x00,0xE0,0xFE,0xFF,0x0F,0x02,0x02,0x02,
0x02,0x02,0x02,0x02,0x02,0xF2,0xFF,0xFF,0x07,0x00,
0x00,0x00,0x00,
0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x00,0x00,
0x00,0x00,0x04,0x04,0x06,0x07,0x07,0x04,0x04,0x00,
0x00,0x00,0x00,

// I (73): w=11, h=19
0xCA,0x00,0x52,
0x00,0x00,0x00,0x00,0x01,0xFD,0xFF,0x3F,0x03,0x01,
0x01,
0x00,0x00,0x00,0xE0,0xFF,0xFF,0x07,0x00,0x00,0x00,
0x00,
0x04,0x04,0x06,0x07,0x07,0x05,0x04,0x00,0x00,0x00,
0x00,

// J (74): w=15, h=23
0xCE,0x00,0x41,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x81,0xFF,
0xFF,0x3F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,
0x07,0x00,0x00,0x00,0x00,
0x70,0x78,0x40,0x40,0x40,0x20,0x3E,0x1F,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,

// K (75): w=20, h=19
0x53,0x06,
0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0x7F,0x03,0x81,
0xC1,0x60,0x20,0x10,0x09,0x05,0x07,0x03,0x01,0x01,
0x00,0x00,0x00,0xE0,0xFF,0xFF,0x0F,0x02,0x0F,0x1E,
0x3C,0xF8,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x00,0x00,0x00,
0x00,0x04,0x07,0x07,0x07,0x06,0x04,0x04,0x00,0x00,

// L (76): w=15, h=19
0x4E,0x08,
0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0x7F,0x07,0x01,
0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0xFE,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,
0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x04,0x04,
0x04,0x04,0x06,0x07,0x03,

// M (77): w=25, h=19
0xD8,0x00,0x51,
0x00,0x00,0x00,0x00,0x01,0xF9,0x1F,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x30,0x08,0xF6,
0xFF,0x3F,0x03,0x01,0x01,
0x00,0x00,0x00,0xE0,0x7F,0x03,0x00,0x00,0x03,0x3F,
0xFF,0xF0,0x30,0x18,0x06,0x01,0x00,0xC0,0xFE,0xFF,
0x07,0x00,0x00,0x00,0x00,
0x04,0x04,0x06,0x07,0x04,0x04,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x04,0x04,0x06,0x07,0x07,0x04,
0x04,0x00,0x00,0x00,0x00,

// N (78): w=22, h=19
0xD5,0x00,0x52,
0x00,0x00,0x00,0x00,0x01,0xF9,0x0F,0x1F,0x7C,0xF8,
0xE0,0x80,0x00,0x00,0x00,0x00,0x01,0x01,0xFD,0x0F,
0x01,0x01,
0x00,0x00,0x00,0xE0,0x3F,0x01,0x00,0x00,0x00,0x01,
0x03,0x0F,0x3E,0xF8,0xF0,0xC0,0xE0,0x1F,0x00,0x00,
0x00,0x00,
0x04,0x04,0x06,0x07,0x04,0x04,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,

// O (79): w=18, h=19
0x51,0x19,
0x00,0xC0,0xE0,0xF0,0x38,0x0C,0x06,0x02,0x03,0x01,
0x01,0x01,0x01,0x03,0x06,0x3E,0xFC,0xF8,
0x7E,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xC0,0xF0,0x7E,0x1F,0x07,
0x00,0x01,0x03,0x03,0x06,0x04,0x04,0x04,0x04,0x04,
0x02,0x03,0x01,0x01,0x00,0x00,0x00,0x00,

// P (80): w=17, h=19
0x50,0x06,
0x00,0x00,0x00,0x00,0x01,0xF1,0xFF,0x7F,0x03,0x01,
0x01,0x01,0x01,0x83,0xFF,0xFE,0x3C,
0x00,0x00,0x00,0xE0,0xFE,0xFF,0x0F,0x04,0x04,0x04,
0x04,0x06,0x03,0x03,0x01,0x00,0x00,
0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=21, h=24
0xD4,0x00,0x71,
0x00,0xC0,0xE0,0xF0,0x38,0x0C,0x06,0x02,0x03,0x01,
0x01,0x01,0x01,0x03,0x06,0xFE,0xFC,0xF8,0x00,0x00,
0x00,
0x7E,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xC0,0xF0,0x7F,0x3F,0x07,0x00,0x00,
0x00,
0x00,0x01,0x03,0x03,0x06,0x04,0x04,0x04,0x04,0x0C,
0x16,0x23,0x23,0x61,0x40,0xC0,0xC0,0xC0,0xC0,0x40,
0x40,

// R (82): w=17, h=19
0x50,0x0E,
0x00,0x00,0x00,0x00,0x81,0xFF,0xFF,0x1F,0x01,0x01,
0x01,0x01,0x83,0xE7,0xFF,0x7E,0x00,
0x00,0x00,0x00,0xE0,0xFF,0xFF,0x07,0x02,0x02,0x0E,
0x3E,0xFF,0xF1,0xC1,0x00,0x00,0x00,
0x04,0x04,0x06,0x07,0x07,0x04,0x04,0x00,0x00,0x00,
0x00,0x00,0x03,0x07,0x07,0x04,0x04,

// S (83): w=15, h=19
0x4E,0x0C,
0x00,0x00,0x00,0x78,0xFC,0xFE,0x82,0x03,0x01,0x01,
0x01,0x01,0x03,0x1F,0x1E,
0x80,0xC0,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x1E,
0xFC,0xF8,0x00,0x00,0x00,
0x03,0x03,0x06,0x04,0x04,0x04,0x04,0x04,0x02,0x03,
0x01,0x00,0x00,0x00,0x00,

// T (84): w=17, h=19
0xD0,0x00,0x81,
0x06,0x03,0x01,0x01,0x01,0x01,0xE1,0xFF,0xFF,0x07,
0x01,0x01,0x01,0x01,0x01,0x07,0x03,
0x00,0x00,0x00,0x00,0x80,0xFC,0xFF,0x1F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x04,0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=18, h=19
0xD1,0x00,0x82,
0x01,0xC1,0xFF,0xFF,0x0F,0x03,0x01,0x01,0x00,0x00,
0x00,0x00,0x01,0xE1,0x3F,0x03,0x01,0x01,
0xFC,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xC0,0x7C,0x07,0x00,0x00,0x00,0x00,
0x00,0x03,0x03,0x06,0x04,0x04,0x04,0x04,0x04,0x02,
0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// V (86): w=18, h=19
0xD1,0x00,0x71,
0x01,0x03,0x7F,0xFF,0xF9,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0xC0,0x31,0x19,0x07,0x01,0x01,
0x00,0x00,0x00,0x0F,0xFF,0xFE,0xC0,0xC0,0x60,0x18,
0x06,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=24, h=19
0xD7,0x00,0x71,
0x01,0x03,0xFF,0xFF,0x83,0x01,0x01,0x00,0x80,0x60,
0x18,0xFE,0xFF,0xF0,0x00,0x00,0x00,0x00,0xC0,0x31,
0x0D,0x03,0x01,0x01,
0x00,0x00,0xFF,0xFF,0xFF,0x60,0x18,0x06,0x01,0x00,
0x00,0x07,0xFF,0xFF,0xC0,0x30,0x0C,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// X (88): w=21, h=19
0xD4,0x00,0x40,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x0F,0x7F,0xFD,
0xE1,0x80,0x80,0x40,0x20,0x10,0x09,0x07,0x03,0x01,
0x01,
0x00,0x00,0x00,0x00,0x80,0xC0,0x20,0x10,0x08,0x05,
0x07,0x3F,0xFE,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,
0x04,0x04,0x06,0x07,0x05,0x04,0x00,0x00,0x00,0x00,
0x00,0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,0x00,
0x00,

// Y (89): w=17, h=19
0xD0,0x00,0x81,
0x01,0x03,0x0F,0x3F,0xFF,0xF1,0x81,0x00,0x00,0x80,
0x40,0x30,0x19,0x05,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0xC1,0xFF,0xFF,0x0E,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=17, h=19
0x50,0x0C,
0x00,0x00,0x00,0x08,0x0F,0x03,0x01,0x01,0x01,0xC1,
0xE1,0xF1,0x39,0x1F,0x0F,0x03,0x01,
0x00,0x00,0x80,0xC0,0xE0,0x78,0x3C,0x1E,0x07,0x03,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x04,0x07,0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x04,
0x04,0x04,0x06,0x07,0x00,0x00,0x00,

// bracketleft (91): w=10, h=23
0xC9,0x00,0x52,
0x00,0x00,0x00,0xC0,0xFC,0xFF,0x07,0x01,0x01,0x01,
0x00,0x00,0xF8,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x60,0x7F,0x5F,0x41,0x40,0x00,0x00,0x00,0x00,0x00,

// backslash (92): w=7, h=23
0xC6,0x00,0x86,
0x03,0x3F,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x7E,0xE0,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0x7E,0x60,

// bracketright (93): w=10, h=23
0x49,0x06,
0x00,0x00,0x00,0x00,0x00,0x01,0xC1,0xFD,0x7F,0x03,
0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0x0F,0x00,0x00,
0x40,0x40,0x40,0x70,0x7F,0x1F,0x00,0x00,0x00,0x00,

// asciicircum (94): w=15, h=16
0x2E,0x0E,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x60,0x18,0x0E,
0x1F,0xE0,0x00,0x00,0x00,
0x80,0xC0,0x70,0x18,0x0E,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x0F,0x70,0x80,

// underscore (95): w=11, h=2
0x8A,0x13,0x56,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,

// grave (96): w=5, h=4
0x84,0x00,0xC7,
0x01,0x03,0x07,0x0E,0x08,

// a (97): w=14, h=14
0x2D,0xB4,
0x00,0xC0,0xF0,0x38,0x04,0x02,0x01,0x01,0x01,0x81,
0xE1,0xFF,0xFF,0x07,
0x1F,0x3F,0x3F,0x30,0x30,0x10,0x08,0x04,0x02,0x3D,
0x3F,0x3F,0x20,0x20,

// b (98): w=14, h=19
0x4D,0x13,
0x00,0x00,0x81,0xF9,0xFF,0x1F,0x01,0x80,0xC0,0x60,
0x60,0xE0,0xE0,0xC0,
0x00,0xF0,0xFF,0x3F,0x0F,0x06,0x01,0x00,0x00,0x00,
0xE0,0x7F,0x3F,0x07,
0x06,0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x02,0x01,
0x00,0x00,0x00,0x00,

// c (99): w=12, h=14
0x2B,0xB3,
0xC0,0xF0,0xF8,0x0C,0x02,0x02,0x01,0x01,0x01,0x03,
0x0F,0x03,
0x0F,0x1F,0x3F,0x30,0x20,0x20,0x20,0x20,0x10,0x10,
0x00,0x00,

// d (100): w=15, h=19
0x4E,0x13,
0x00,0x00,0x00,0x00,0x80,0x40,0x20,0x20,0x20,0x20,
0x21,0xF1,0xFF,0x7F,0x03,
0xE0,0xFC,0xFE,0x07,0x00,0x00,0x00,0x80,0x60,0xD0,
0xFE,0xFF,0x0F,0x00,0x00,
0x03,0x07,0x07,0x06,0x02,0x03,0x01,0x00,0x00,0x07,
0x07,0x07,0x04,0x04,0x00,

// e (101): w=11, h=14
0x2A,0xB4,
0xC0,0xF0,0xF8,0x0C,0x86,0x82,0x81,0xC1,0x63,0x3F,
0x1E,
0x0F,0x1F,0x3F,0x31,0x20,0x20,0x20,0x20,0x10,0x10,
0x08,

// f (102): w=13, h=24
0xCC,0x00,0x60,
0x00,0x00,0x40,0x40,0xF0,0xFC,0x5E,0x42,0x41,0x41,
0x01,0x0F,0x07,
0x00,0x00,0xE0,0xFF,0x7F,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0xC0,0xFE,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// g (103): w=15, h=19
0x4E,0xAE,
0x00,0x00,0xC0,0xF0,0x38,0x04,0x02,0x01,0x01,0x01,
0x81,0xE1,0xFF,0x7F,0x07,
0x80,0x1F,0x3F,0x3F,0x30,0x30,0x10,0x08,0x04,0xC3,
0xFC,0x7F,0x0F,0x00,0x00,
0x01,0x07,0x06,0x06,0x04,0x04,0x04,0x04,0x02,0x01,
0x01,0x00,0x00,0x00,0x00,

// h (104): w=14, h=19
0x4D,0x19,
0x00,0x01,0x81,0xFD,0xFF,0x1F,0x01,0x80,0xC0,0x60,
0x60,0xE0,0xE0,0xC0,
0x00,0xF0,0xFF,0x3F,0x0D,0x06,0x01,0x00,0x00,0x00,
0xF8,0xFF,0x3F,0x01,
0x06,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x07,
0x07,0x07,0x04,0x04,

// i (105): w=6, h=19
0x45,0x19,
0x20,0x20,0xE0,0xE3,0xE3,0x03,
0x00,0xF8,0xFF,0x1F,0x00,0x00,
0x07,0x07,0x07,0x04,0x04,0x00,

// j (106): w=13, h=24
0xCC,0x00,0x32,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0xE0,
0xE3,0x63,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,
0x0F,0x00,0x00,
0xE0,0xF0,0x80,0x80,0x80,0x40,0x78,0x3F,0x0F,0x03,
0x00,0x00,0x00,

// k (107): w=13, h=19
0x4C,0x14,
0x00,0x01,0x81,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x80,
0xE0,0xE0,0x20,
0x00,0xF0,0xFF,0x3F,0x19,0x78,0xFC,0xE2,0xC3,0x01,
0x01,0x00,0x00,
0x06,0x07,0x07,0x00,0x00,0x00,0x00,0x03,0x07,0x07,
0x06,0x04,0x04,

// l (108): w=7, h=19
0x46,0x13,
0x00,0x00,0x01,0xF1,0xFF,0x7F,0x03,
0x00,0xE0,0xFF,0x7F,0x07,0x00,0x00,
0x06,0x07,0x07,0x04,0x04,0x00,0x00,

// m (109): w=22, h=14
0x35,0xBA,
0x01,0x81,0xFF,0xFF,0x6F,0x30,0x18,0x0C,0x06,0x03,
0xF3,0xFF,0xFE,0x30,0x18,0x0C,0x06,0x03,0x83,0xFF,
0xFF,0x0E,
0x30,0x3F,0x3F,0x01,0x00,0x00,0x00,0x00,0x20,0x3E,
0x3F,0x0F,0x00,0x00,0x00,0x00,0x00,0x30,0x3F,0x3F,
0x21,0x20,

// n (110): w=14, h=14
0x2D,0xB9,
0x01,0x81,0xFF,0xFF,0x6F,0x30,0x08,0x04,0x06,0x03,
0xC3,0xFF,0xFF,0x0E,
0x30,0x3F,0x3F,0x01,0x00,0x00,0x00,0x00,0x00,0x38,
0x3F,0x3F,0x21,0x20,

// o (111): w=13, h=14
0x2C,0xB4,
0xC0,0xF0,0xF8,0x1C,0x06,0x02,0x01,0x01,0x01,0x03,
0xFF,0xFE,0x78,
0x0F,0x1F,0x3F,0x30,0x20,0x20,0x20,0x10,0x18,0x0F,
0x07,0x03,0x00,

// p (112): w=15, h=19
0x4E,0xB3,
0x00,0x01,0xC1,0xFF,0xFF,0x6F,0x30,0x08,0x04,0x06,
0x03,0x03,0xFF,0xFF,0x3E,
0x00,0xF8,0xFF,0x3F,0x21,0x20,0x20,0x20,0x20,0x10,
0x08,0x07,0x03,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// q (113): w=14, h=19
0x4D,0xB4,
0x00,0xC0,0xF0,0x38,0x0C,0x02,0x01,0x01,0x01,0x81,
0xE1,0xFF,0xFF,0x07,
0x1F,0x3F,0x3F,0x30,0x30,0x10,0x08,0x04,0x82,0xFD,
0xFF,0x1F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x03,0x00,0x00,0x00,

// r (114): w=12, h=14
0xAB,0x05,0x72,
0x01,0x81,0xFF,0xFF,0x6F,0x30,0x18,0x0C,0x06,0x07,
0x07,0x01,
0x30,0x3F,0x3F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// s (115): w=11, h=14
0x2A,0xAD,
0x00,0x00,0x00,0x3E,0x7E,0xE3,0xC1,0x81,0x01,0x0F,
0x06,
0x18,0x3C,0x30,0x20,0x20,0x20,0x31,0x1F,0x1F,0x00,
0x00,

// t (116): w=8, h=18
0x47,0x38,
0x10,0x10,0xFC,0xFE,0x1F,0x10,0x10,0x10,
0xE0,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,
0x00,0x03,0x03,0x02,0x02,0x00,0x00,0x00,

// u (117): w=14, h=14
0x2D,0xB9,
0x01,0xE1,0xFF,0xFF,0x07,0x00,0x00,0x00,0x00,0x81,
0xE1,0xFF,0x7F,0x03,
0x1C,0x3F,0x3F,0x30,0x30,0x18,0x08,0x04,0x03,0x3C,
0x3F,0x3F,0x20,0x20,

// v (118): w=15, h=14
0x2E,0xAC,
0x01,0x01,0x03,0x0F,0xFF,0xFC,0xC0,0x00,0x00,0x00,
0x80,0x61,0x3F,0x1F,0x07,
0x00,0x00,0x00,0x00,0x01,0x3F,0x1F,0x0C,0x06,0x03,
0x00,0x00,0x00,0x00,0x00,

// w (119): w=20, h=14
0x33,0xB3,
0x01,0x01,0x07,0x3F,0xFE,0xF0,0x00,0x00,0xC0,0x30,
0x1E,0xFF,0xFC,0xC0,0x00,0x00,0xC0,0x71,0x3F,0x0F,
0x00,0x00,0x00,0x00,0x3F,0x1F,0x0E,0x03,0x00,0x00,
0x00,0x01,0x3F,0x1F,0x06,0x03,0x01,0x00,0x00,0x00,

// x (120): w=13, h=14
0x2C,0xAD,
0x00,0x01,0x01,0x07,0x1F,0xFE,0xF8,0xE0,0xA0,0x10,
0x0D,0x07,0x03,
0x30,0x3C,0x2E,0x02,0x01,0x00,0x01,0x07,0x1F,0x3E,
0x38,0x20,0x20,

// y (121): w=16, h=19
0x4F,0xA6,
0x00,0x01,0x01,0x03,0x07,0x7F,0xFE,0xF0,0x00,0x00,
0x00,0x80,0x40,0x31,0x1F,0x07,
0x00,0x00,0x00,0x00,0x80,0xC0,0x7F,0x1F,0x08,0x04,
0x03,0x01,0x00,0x00,0x00,0x00,
0x04,0x04,0x06,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=14, h=14
0x2D,0xAD,
0x00,0x00,0x00,0x07,0x03,0x81,0xC1,0xE1,0x71,0x3D,
0x1F,0x07,0x03,0x01,
0x20,0x30,0x3C,0x2E,0x27,0x23,0x21,0x20,0x20,0x20,
0x30,0x38,0x00,0x00,

// braceleft (123): w=9, h=23
0x48,0x12,
0x00,0x00,0x00,0x00,0xFC,0xFE,0x03,0x01,0x01,
0x08,0x08,0xF8,0xE6,0x03,0x00,0x00,0x00,0x00,
0x1C,0x3F,0x67,0x41,0x00,0x00,0x00,0x00,0x00,

// bar (124): w=6, h=23
0x45,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x07,
0x00,0x80,0xFE,0x1F,0x00,0x00,
0x70,0x7F,0x07,0x00,0x00,0x00,

// braceright (125): w=9, h=23
0x48,0x12,
0x00,0x00,0x00,0x00,0x00,0xC1,0xF3,0x7E,0x1C,
0x00,0x00,0x00,0x80,0xE0,0x37,0x0F,0x08,0x08,
0x40,0x40,0x60,0x3F,0x1F,0x00,0x00,0x00,0x00,

// asciitilde (126): w=16, h=6
0x8F,0x08,0x54,
0x30,0x0C,0x02,0x03,0x03,0x07,0x06,0x0E,0x1C,0x18,
0x30,0x30,0x30,0x10,0x0C,0x02

};
// 3740 bytes
// 3930 bytes with FAST_FONT_INDEX
