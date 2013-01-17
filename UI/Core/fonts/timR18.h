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

// timR18 = "Times Roman"

const char font_timR18[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCF,0x00,
0xD7,0x00,
0xFA,0x00,
0x1D,0x01,
0x41,0x01,
0x76,0x01,
0x7A,0x01,
0x8E,0x01,
0xA2,0x01,
0xB6,0x01,
0xD0,0x01,
0xD6,0x01,
0xDF,0x01,
0xE4,0x01,
0x02,0x02,
0x22,0x02,
0x3C,0x02,
0x5C,0x02,
0x79,0x02,
0x99,0x02,
0xB9,0x02,
0xD9,0x02,
0xF9,0x02,
0x19,0x03,
0x39,0x03,
0x3F,0x03,
0x47,0x03,
0x5F,0x03,
0x6B,0x03,
0x83,0x03,
0x9D,0x03,
0xD5,0x03,
0x0A,0x04,
0x36,0x04,
0x62,0x04,
0x91,0x04,
0xBA,0x04,
0xE0,0x04,
0x12,0x05,
0x47,0x05,
0x5B,0x05,
0x78,0x05,
0xAA,0x05,
0xD3,0x05,
0x14,0x06,
0x46,0x06,
0x78,0x06,
0xA1,0x06,
0xD3,0x06,
0x02,0x07,
0x25,0x07,
0x51,0x07,
0x83,0x07,
0xB8,0x07,
0xFF,0x07,
0x37,0x08,
0x69,0x08,
0x92,0x08,
0xA3,0x08,
0xBA,0x08,
0xCB,0x08,
0xDF,0x08,
0xEE,0x08,
0xF5,0x08,
0x09,0x09,
0x2C,0x09,
0x40,0x09,
0x60,0x09,
0x74,0x09,
0x8B,0x09,
0xAE,0x09,
0xD4,0x09,
0xE2,0x09,
0xF7,0x09,
0x1D,0x0A,
0x2E,0x0A,
0x54,0x0A,
0x6C,0x0A,
0x82,0x0A,
0xA2,0x0A,
0xC2,0x0A,
0xD0,0x0A,
0xE2,0x0A,
0xF2,0x0A,
0x0A,0x0B,
0x22,0x0B,
0x46,0x0B,
0x5E,0x0B,
0x84,0x0B,
0x96,0x0B,
0xB0,0x0B,
0xB8,0x0B,
0xD2,0x0B,

// space (32): w=1, h=1
0x80,0x10,0x4A,
0x00,

// exclam (33): w=3, h=17
0x42,0x1C,
0xFE,0xFF,0xFE,
0x80,0x8F,0x00,
0x01,0x01,0x00,

// quotedbl (34): w=6, h=5
0x05,0x11,
0x1F,0x0F,0x00,0x00,0x1F,0x0F,

// numbersign (35): w=11, h=17
0x4A,0x0F,
0x00,0x60,0x60,0xE0,0x7F,0x60,0x60,0xE0,0x7F,0x60,
0x60,
0x0C,0x0C,0xFC,0x0F,0x0C,0x0C,0xFC,0x0F,0x0C,0x0C,
0x00,
0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,

// dollar (36): w=11, h=19
0x4A,0x09,
0x3C,0x7E,0x63,0xC1,0xC1,0xFF,0x81,0x03,0x06,0x1E,
0x00,
0xF0,0xC0,0x80,0x00,0x00,0xFF,0x01,0x83,0xC7,0xFE,
0x3C,
0x00,0x00,0x01,0x01,0x01,0x1F,0x01,0x01,0x00,0x00,
0x00,

// percent (37): w=17, h=16
0x30,0x2F,
0x78,0xFC,0xC6,0x83,0x81,0x41,0x23,0x1E,0x82,0xE2,
0x32,0x1E,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0x60,0x38,0x0C,0x07,0x01,0x78,
0xFC,0xC6,0x83,0x81,0x41,0x23,0x1E,

// ampersand (38): w=17, h=17
0x50,0x0F,
0x00,0x00,0x00,0x1C,0x7E,0xE1,0xC1,0xC1,0x61,0x33,
0x1E,0x40,0xC0,0xC0,0x40,0x00,0x00,
0x78,0xFC,0xC6,0x82,0x81,0x81,0x83,0x87,0xDE,0x78,
0xF0,0xCC,0x83,0x80,0x80,0x80,0x40,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,

// quotesingle (39): w=2, h=5
0x01,0x16,
0x1F,0x0F,

// parenleft (40): w=6, h=22
0x45,0x0F,
0x80,0xE0,0x78,0x0C,0x02,0x01,
0x7F,0xFF,0x80,0x00,0x00,0x00,
0x00,0x01,0x07,0x0C,0x10,0x20,

// parenright (41): w=6, h=22
0x45,0x0F,
0x01,0x02,0x0C,0x78,0xE0,0x80,
0x00,0x00,0x00,0x80,0xFF,0x7F,
0x20,0x10,0x0C,0x07,0x01,0x00,

// asterisk (42): w=9, h=9
0x28,0x15,
0x6C,0x6C,0x28,0x93,0xFF,0x93,0x28,0x6C,0x6C,
0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,

// plus (43): w=12, h=12
0x2B,0xA8,
0x60,0x60,0x60,0x60,0x60,0xFF,0xFF,0x60,0x60,0x60,
0x60,0x60,
0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=3, h=5
0x82,0x0F,0x67,
0x13,0x1B,0x0E,

// hyphen (45): w=6, h=2
0x85,0x0A,0x47,
0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=2, h=2
0x81,0x0F,0x67,
0x03,0x03,

// slash (47): w=9, h=21
0xC8,0x00,0x25,
0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0x1F,0x03,
0x00,0x00,0x80,0xF0,0x3E,0x07,0x00,0x00,0x00,
0x10,0x1E,0x07,0x01,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=10, h=17
0x49,0x0F,
0xF0,0xFC,0x0E,0x03,0x01,0x01,0x03,0x0E,0xFC,0xF0,
0x1F,0x7F,0xF0,0x80,0x00,0x00,0x80,0xF0,0x7F,0x1F,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// one (49): w=8, h=17
0x47,0x16,
0x00,0x04,0x04,0xFE,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// two (50): w=10, h=17
0x49,0x0F,
0x18,0x06,0x02,0x03,0x03,0x03,0x86,0xFE,0x7C,0x00,
0x80,0xC0,0xE0,0xB0,0x98,0x8E,0x83,0x81,0x80,0xC0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// three (51): w=9, h=17
0x48,0x10,
0x18,0x06,0x02,0x83,0xC3,0xE7,0xBE,0x1C,0x00,
0xC0,0xC0,0x80,0x00,0x00,0x81,0xC3,0x7F,0x1E,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// four (52): w=10, h=17
0x49,0x0F,
0x00,0x00,0xC0,0x70,0x18,0x06,0xFF,0xFF,0x00,0x00,
0x1C,0x1F,0x19,0x18,0x18,0x18,0xFF,0xFF,0x18,0x18,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,

// five (53): w=10, h=17
0x49,0x0F,
0x00,0x70,0x7C,0x63,0xE3,0xC3,0xC3,0x83,0x83,0x01,
0xC0,0xC0,0x80,0x00,0x00,0x00,0x81,0xC3,0xFF,0x3E,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// six (54): w=10, h=17
0x49,0x0F,
0xC0,0xF0,0xF8,0x9C,0x46,0x42,0xC3,0x81,0x81,0x01,
0x3F,0xFF,0xE0,0x80,0x80,0x00,0x80,0xC1,0xFF,0x3E,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// seven (55): w=10, h=17
0x49,0x0F,
0x0E,0x07,0x03,0x03,0x03,0x03,0xC3,0xFB,0x1F,0x07,
0x00,0x00,0x00,0x80,0xF0,0x7E,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=10, h=17
0x49,0x0F,
0x00,0x3C,0x7E,0xE3,0xC1,0xC1,0xE3,0x3E,0x1C,0x00,
0x78,0xFE,0xC3,0x81,0x01,0x01,0x83,0xC7,0xFE,0x3C,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// nine (57): w=10, h=17
0x49,0x0F,
0xF8,0xFE,0x06,0x03,0x01,0x03,0x03,0x0E,0xFE,0xF8,
0x00,0x03,0x03,0x86,0x84,0xC4,0x72,0x3F,0x1F,0x03,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// colon (58): w=2, h=11
0x21,0xD6,
0x03,0x03,
0x06,0x06,

// semicolon (59): w=3, h=14
0x22,0xD6,
0x03,0x03,0x00,
0x26,0x36,0x1C,

// less (60): w=11, h=11
0x2A,0xD0,
0x20,0x70,0x50,0xD8,0x88,0x8C,0x04,0x06,0x02,0x03,
0x01,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x06,
0x04,

// equal (61): w=9, h=5
0x88,0x09,0x67,
0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,

// greater (62): w=11, h=11
0x2A,0xCF,
0x01,0x03,0x02,0x06,0x04,0x8C,0x88,0xD8,0x50,0x70,
0x20,
0x04,0x06,0x02,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,

// question (63): w=8, h=17
0x47,0x15,
0x1E,0x1B,0x01,0x01,0xC1,0xE3,0x7E,0x3C,
0x00,0x00,0x80,0x9F,0x07,0x01,0x00,0x00,
0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,

// at (64): w=18, h=20
0x51,0x16,
0xC0,0xF0,0x78,0x1C,0x0E,0x06,0x83,0xC3,0xE1,0x61,
0x61,0x41,0xE3,0xE2,0x06,0x0C,0x38,0xE0,
0x3F,0xFF,0xC0,0x00,0x00,0x3E,0x7F,0xC1,0x80,0xC0,
0x60,0xFC,0xFF,0x83,0xC0,0x60,0x38,0x0F,
0x00,0x00,0x01,0x03,0x06,0x04,0x0C,0x08,0x08,0x08,
0x08,0x08,0x04,0x04,0x00,0x00,0x00,0x00,

// A (65): w=17, h=17
0x50,0x08,
0x00,0x00,0x00,0x00,0x00,0xC0,0x70,0x0E,0x07,0x1E,
0xF8,0xE0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xF0,0x1E,0x07,0x04,0x04,0x04,0x04,
0x04,0x07,0x3F,0xF8,0xC0,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// B (66): w=14, h=17
0x4D,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x83,
0x46,0x7E,0x38,0x00,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x81,
0x83,0xC6,0xFE,0x38,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,

// C (67): w=14, h=17
0x4D,0x0F,
0xE0,0xF8,0x1C,0x06,0x06,0x03,0x01,0x01,0x01,0x01,
0x03,0x02,0x06,0x1F,
0x0F,0x3F,0x70,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,
0x80,0x80,0xC0,0x20,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,

// D (68): w=15, h=17
0x4E,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x03,
0x06,0x06,0x1C,0xF8,0xE0,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x80,
0xC0,0xC0,0x70,0x3F,0x0F,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,

// E (69): w=13, h=17
0x4C,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0xC1,
0x03,0x0F,0x00,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x07,
0x00,0x80,0xE0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,

// F (70): w=12, h=17
0x4B,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,
0xC3,0x0F,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,
0x07,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,

// G (71): w=16, h=17
0x4F,0x0F,
0xE0,0xF8,0x1C,0x06,0x06,0x03,0x01,0x01,0x01,0x01,
0x03,0x02,0x06,0x1F,0x00,0x00,
0x0F,0x3F,0x70,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,
0x82,0xC2,0xFE,0x7E,0x02,0x02,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// H (72): w=17, h=17
0x50,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// I (73): w=6, h=17
0x45,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,

// J (74): w=9, h=17
0x48,0x0F,
0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0x01,0x01,
0xC0,0xC0,0x00,0x00,0x80,0xFF,0x7F,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// K (75): w=16, h=17
0x4F,0x0E,
0x01,0x01,0xFF,0xFF,0x81,0x81,0xC0,0x60,0x30,0x19,
0x0D,0x07,0x03,0x01,0x01,0x00,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x03,0x07,0x0E,0x1C,
0x38,0x70,0xE0,0xC0,0x80,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,

// L (76): w=13, h=17
0x4C,0x0E,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xE0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,

// M (77): w=21, h=17
0x54,0x0E,
0x01,0x01,0xFF,0x0F,0x3C,0xF0,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0x70,0x0C,0x03,0xFF,0xFF,0x01,
0x01,
0x00,0x00,0xFF,0x00,0x00,0x00,0x03,0x0F,0x3C,0xF0,
0xC0,0x30,0x0E,0x01,0x00,0x00,0x00,0xFF,0xFF,0x00,
0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x01,
0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,

// N (78): w=16, h=17
0x4F,0x0F,
0x01,0x01,0xFF,0x0F,0x1C,0x70,0xE0,0x80,0x00,0x00,
0x00,0x01,0x01,0xFF,0x01,0x01,
0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x03,0x07,0x1C,
0x38,0xE0,0xC0,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x00,0x00,

// O (79): w=16, h=17
0x4F,0x0F,
0xE0,0xF8,0x1C,0x06,0x06,0x03,0x01,0x01,0x01,0x01,
0x03,0x06,0x06,0x1C,0xF8,0xE0,
0x0F,0x3F,0x70,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,
0x80,0xC0,0xC0,0x70,0x3F,0x0F,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// P (80): w=13, h=17
0x4C,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x83,
0xC6,0xFE,0x38,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// Q (81): w=16, h=22
0x4F,0x0F,
0xE0,0xF8,0x1C,0x06,0x06,0x03,0x01,0x01,0x01,0x01,
0x03,0x06,0x06,0x1C,0xF8,0xE0,
0x0F,0x3F,0x70,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,
0x80,0xC0,0xC0,0x70,0x3F,0x0F,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x07,0x0F,
0x1D,0x18,0x30,0x20,0x20,0x20,

// R (82): w=15, h=17
0x4E,0x0E,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x83,
0xC6,0xFE,0x38,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x01,0x01,0x03,0x07,0x0F,0x39,
0x70,0xE0,0xC0,0x80,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,

// S (83): w=11, h=17
0x4A,0x0F,
0x3C,0x7E,0x62,0xC1,0xC1,0x81,0x83,0x02,0x06,0x1F,
0x00,
0xF0,0xC0,0x80,0x80,0x01,0x01,0x03,0x83,0xC7,0x7E,
0x3C,
0x01,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,

// T (84): w=14, h=17
0x4D,0x0F,
0x0F,0x03,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x01,0x01,0x03,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,

// U (85): w=16, h=17
0x4F,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0xFF,0x01,0x01,
0x00,0x00,0x3F,0xFF,0xC0,0x80,0x00,0x00,0x00,0x00,
0x80,0x80,0x60,0x1F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// V (86): w=17, h=17
0x50,0x08,
0x01,0x01,0x07,0x3F,0xF9,0xC1,0x00,0x00,0x00,0x00,
0x00,0xC1,0x79,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x07,0x3F,0xF8,0xE0,0x38,
0x0F,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=23, h=17
0x56,0x08,
0x01,0x01,0x07,0x3F,0xF9,0xC1,0x00,0x00,0x00,0x01,
0xE1,0x1F,0xFF,0xE1,0x01,0x00,0x00,0x81,0xF1,0x1F,
0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x07,0x3F,0xF8,0xE0,0x1F,
0x00,0x00,0x03,0x3F,0xFC,0xE0,0x78,0x0F,0x01,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// X (88): w=18, h=17
0x51,0x08,
0x00,0x01,0x01,0x03,0x07,0x0F,0x1D,0x70,0xE0,0xC0,
0x20,0x10,0x0D,0x07,0x03,0x01,0x01,0x00,
0x00,0x00,0x80,0xC0,0x60,0x18,0x0C,0x02,0x01,0x03,
0x07,0x0E,0x3C,0x70,0xE0,0xC0,0x80,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// Y (89): w=16, h=17
0x4F,0x0F,
0x01,0x01,0x07,0x1F,0x3D,0xF1,0xC0,0x00,0x00,0x80,
0xE1,0x39,0x0F,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFE,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=13, h=17
0x4C,0x0F,
0x0F,0x03,0x01,0x01,0x01,0x81,0xE1,0xF1,0x3D,0x1F,
0x07,0x03,0x00,
0x80,0xC0,0xF0,0x7C,0x1E,0x07,0x03,0x00,0x00,0x00,
0x00,0x80,0xE0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,

// bracketleft (91): w=5, h=21
0x44,0x15,
0xFF,0xFF,0x01,0x01,0x01,
0xFF,0xFF,0x00,0x00,0x00,
0x1F,0x1F,0x10,0x10,0x10,

// backslash (92): w=7, h=17
0x46,0x08,
0x03,0x1F,0xF8,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x3E,0xF0,0x80,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// bracketright (93): w=5, h=21
0x44,0x10,
0x01,0x01,0x01,0xFF,0xFF,
0x00,0x00,0x00,0xFF,0xFF,
0x10,0x10,0x10,0x1F,0x1F,

// asciicircum (94): w=9, h=9
0x28,0x0F,
0x80,0xE0,0x38,0x0E,0x03,0x0E,0x38,0xE0,0x80,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,

// underscore (95): w=12, h=2
0x8B,0x14,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,

// grave (96): w=5, h=4
0x04,0x10,
0x03,0x07,0x06,0x0C,0x08,

// a (97): w=9, h=12
0x28,0xAF,
0x80,0xC6,0x67,0x21,0x31,0x13,0xFF,0xFE,0x00,
0x07,0x0F,0x0C,0x0C,0x04,0x02,0x07,0x0F,0x08,

// b (98): w=11, h=17
0x4A,0x09,
0x02,0x02,0xFF,0xFF,0x40,0x20,0x20,0x60,0xC0,0xC0,
0x00,
0x00,0x00,0xFF,0xFF,0x80,0x00,0x00,0x80,0xC0,0xFF,
0x3F,
0x00,0x00,0x01,0x00,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,

// c (99): w=9, h=12
0x28,0xAF,
0xF8,0xFE,0x02,0x01,0x01,0x01,0x03,0x07,0x06,
0x01,0x07,0x07,0x0E,0x0C,0x0C,0x0C,0x04,0x02,

// d (100): w=10, h=17
0x49,0x0F,
0x00,0xC0,0xC0,0x60,0x20,0x22,0x42,0xFF,0xFF,0x00,
0x3F,0xFF,0xC0,0x80,0x80,0x80,0xC0,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x01,0x01,0x01,

// e (101): w=9, h=12
0x28,0xAF,
0xF8,0xFE,0x12,0x11,0x11,0x11,0x13,0x1E,0x1C,
0x01,0x07,0x07,0x0E,0x0C,0x0C,0x0C,0x04,0x02,

// f (102): w=7, h=17
0x46,0x08,
0x20,0x20,0xFC,0xFE,0x21,0x23,0x23,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// g (103): w=11, h=18
0x4A,0xAE,
0x00,0x7C,0xFE,0x81,0x01,0x01,0x83,0xFE,0x7B,0x03,
0x00,
0xC0,0xEE,0x1D,0x19,0x19,0x19,0x18,0x18,0x38,0xF0,
0xE0,
0x01,0x03,0x03,0x02,0x02,0x02,0x02,0x03,0x01,0x01,
0x00,

// h (104): w=12, h=17
0x4B,0x09,
0x02,0x02,0xFF,0xFF,0x80,0x40,0x60,0x60,0xE0,0xC0,
0x80,0x00,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,

// i (105): w=4, h=17
0x43,0x0F,
0x40,0xE3,0xE3,0x00,
0x00,0xFF,0xFF,0x00,
0x01,0x01,0x01,0x01,

// j (106): w=6, h=23
0xC5,0x00,0x27,
0x00,0x00,0x00,0x40,0xE3,0xE3,
0x00,0x00,0x00,0x00,0xFF,0xFF,
0x30,0x70,0x40,0x40,0x3F,0x1F,

// k (107): w=12, h=17
0x4B,0x08,
0x02,0x02,0xFF,0xFF,0x00,0x00,0xA0,0xE0,0x60,0x20,
0x20,0x00,
0x00,0x00,0xFF,0xFF,0x04,0x1E,0x39,0x70,0xE0,0xC0,
0x80,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,

// l (108): w=5, h=17
0x44,0x09,
0x02,0x02,0xFF,0xFF,0x00,
0x00,0x00,0xFF,0xFF,0x00,
0x00,0x01,0x01,0x01,0x01,

// m (109): w=18, h=12
0x31,0xAF,
0x02,0xFF,0xFF,0x04,0x02,0x03,0x03,0x07,0xFE,0xFC,
0x04,0x02,0x03,0x03,0x07,0xFE,0xFC,0x00,
0x08,0x0F,0x0F,0x08,0x00,0x00,0x00,0x08,0x0F,0x0F,
0x08,0x00,0x00,0x00,0x08,0x0F,0x0F,0x08,

// n (110): w=11, h=12
0x2A,0xAF,
0x02,0xFF,0xFF,0x04,0x02,0x03,0x03,0x07,0xFE,0xFC,
0x00,
0x08,0x0F,0x0F,0x08,0x00,0x00,0x00,0x08,0x0F,0x0F,
0x08,

// o (111): w=10, h=12
0x29,0xAF,
0xF8,0xFE,0x06,0x03,0x01,0x01,0x03,0x06,0xFE,0xF8,
0x01,0x07,0x06,0x0C,0x08,0x08,0x0C,0x06,0x07,0x01,

// p (112): w=10, h=18
0x49,0xAF,
0x02,0xFF,0xFF,0x02,0x01,0x01,0x03,0x06,0xFE,0xF8,
0x00,0xFF,0xFF,0x04,0x08,0x08,0x0C,0x06,0x07,0x01,
0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=10, h=18
0x49,0xAF,
0xF8,0xFE,0x06,0x03,0x01,0x01,0x02,0xFF,0xFF,0x00,
0x01,0x07,0x06,0x0C,0x08,0x08,0x04,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x03,0x03,0x02,

// r (114): w=6, h=12
0x25,0xAF,
0x02,0xFF,0xFF,0x04,0x03,0x03,
0x08,0x0F,0x0F,0x08,0x00,0x00,

// s (115): w=8, h=12
0x27,0xAF,
0x0C,0x3E,0x39,0x71,0x61,0xE3,0xC7,0x80,
0x0E,0x0C,0x08,0x08,0x08,0x04,0x07,0x03,

// t (116): w=7, h=15
0x26,0x48,
0x08,0x0C,0xFE,0xFF,0x08,0x08,0x08,
0x00,0x00,0x3F,0x7F,0x40,0x40,0x20,

// u (117): w=11, h=12
0x2A,0xAF,
0x01,0xFF,0xFF,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,
0x00,
0x00,0x03,0x07,0x0E,0x0C,0x0C,0x04,0x02,0x0F,0x0F,
0x08,

// v (118): w=11, h=12
0x2A,0xA8,
0x01,0x07,0x3F,0xF9,0xC0,0x00,0x00,0xE1,0x1F,0x03,
0x01,
0x00,0x00,0x00,0x01,0x07,0x0E,0x07,0x00,0x00,0x00,
0x00,

// w (119): w=17, h=12
0x30,0xA8,
0x01,0x07,0x3F,0xF9,0xC0,0x00,0x80,0x61,0x1F,0xFF,
0xE1,0x00,0x00,0xE1,0x1F,0x03,0x01,
0x00,0x00,0x00,0x01,0x07,0x0E,0x07,0x00,0x00,0x00,
0x07,0x0E,0x07,0x00,0x00,0x00,0x00,

// x (120): w=11, h=12
0x2A,0xAF,
0x01,0x03,0x0F,0x9D,0xF8,0x60,0xD0,0x8D,0x07,0x03,
0x01,
0x08,0x0C,0x0F,0x09,0x00,0x00,0x01,0x0B,0x0F,0x0C,
0x08,

// y (121): w=12, h=18
0x4B,0xA2,
0x00,0x01,0x07,0x3F,0xF9,0xC0,0x00,0x00,0xE1,0x1F,
0x03,0x01,
0x80,0x80,0x00,0x00,0xC1,0x77,0x1E,0x07,0x00,0x00,
0x00,0x00,
0x01,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// z (122): w=8, h=12
0x27,0xAF,
0x07,0x03,0xC1,0xF1,0x79,0x1D,0x0F,0x03,
0x0C,0x0F,0x0B,0x09,0x08,0x08,0x0C,0x0E,

// braceleft (123): w=8, h=22
0x47,0x0F,
0x00,0x00,0x00,0xFC,0x7E,0x03,0x01,0x01,
0x04,0x04,0x1B,0xF1,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x0F,0x1F,0x30,0x20,0x20,

// bar (124): w=2, h=17
0x41,0x10,
0xFF,0xFF,
0xFF,0xFF,
0x01,0x01,

// braceright (125): w=8, h=22
0x47,0x0F,
0x01,0x01,0x03,0x7E,0xFC,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0xF1,0x1B,0x04,0x04,
0x20,0x20,0x30,0x1F,0x0F,0x00,0x00,0x00,

// asciitilde (126): w=11, h=4
0x8A,0x09,0x56,
0x0C,0x06,0x03,0x03,0x03,0x06,0x0C,0x0C,0x0C,0x06,
0x03

};
// 2850 bytes
// 3040 bytes with FAST_FONT_INDEX
