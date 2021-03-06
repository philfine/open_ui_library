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

const char font_luBS14[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCC,0x00,
0xD7,0x00,
0xF3,0x00,
0x13,0x01,
0x37,0x01,
0x57,0x01,
0x5D,0x01,
0x6E,0x01,
0x7F,0x01,
0x89,0x01,
0xA3,0x01,
0xAA,0x01,
0xB0,0x01,
0xB7,0x01,
0xDD,0x01,
0xF7,0x01,
0x04,0x02,
0x1C,0x02,
0x32,0x02,
0x4A,0x02,
0x60,0x02,
0x7A,0x02,
0x90,0x02,
0xAA,0x02,
0xC4,0x02,
0xCC,0x02,
0xD4,0x02,
0xEE,0x02,
0xFC,0x02,
0x16,0x03,
0x2C,0x03,
0x4E,0x03,
0x6E,0x03,
0x84,0x03,
0xA0,0x03,
0xBE,0x03,
0xD4,0x03,
0xE8,0x03,
0x04,0x04,
0x20,0x04,
0x28,0x04,
0x3F,0x04,
0x5B,0x04,
0x71,0x04,
0x91,0x04,
0xAB,0x04,
0xCD,0x04,
0xE3,0x04,
0x1B,0x05,
0x37,0x05,
0x4F,0x05,
0x6B,0x05,
0x85,0x05,
0xA3,0x05,
0xC9,0x05,
0xE5,0x05,
0x01,0x06,
0x19,0x06,
0x2A,0x06,
0x50,0x06,
0x61,0x06,
0x7B,0x06,
0x87,0x06,
0x8F,0x06,
0xA7,0x06,
0xC1,0x06,
0xD3,0x06,
0xED,0x06,
0x05,0x07,
0x17,0x07,
0x31,0x07,
0x49,0x07,
0x51,0x07,
0x68,0x07,
0x80,0x07,
0x88,0x07,
0xAC,0x07,
0xC4,0x07,
0xDE,0x07,
0xF8,0x07,
0x12,0x08,
0x22,0x08,
0x38,0x08,
0x46,0x08,
0x5E,0x08,
0x78,0x08,
0x9C,0x08,
0xB4,0x08,
0xCE,0x08,
0xE4,0x08,
0xF8,0x08,
0x00,0x09,
0x14,0x09,

// space (32): w=1, h=1
0x80,0x0D,0x4B,
0x00,

// exclam (33): w=3, h=14
0x22,0x16,
0x3F,0xFF,0xFF,
0x30,0x33,0x33,

// quotedbl (34): w=9, h=6
0x08,0x0F,
0x07,0x3F,0x3F,0x03,0x00,0x00,0x3F,0x3F,0x07,

// numbersign (35): w=13, h=14
0x2C,0x09,
0x00,0x18,0x18,0xF8,0xFC,0x3F,0x1B,0x98,0xF8,0xFF,
0x1F,0x19,0x18,
0x03,0x23,0x3F,0x3F,0x03,0x03,0x3B,0x3F,0x0F,0x03,
0x03,0x03,0x00,

// dollar (36): w=10, h=17
0x49,0x16,
0x18,0x3E,0x7F,0xFF,0xF3,0xFF,0xC3,0xC3,0x87,0x00,
0x38,0x38,0x30,0x30,0xFF,0xF1,0x3B,0x3F,0x1F,0x0E,
0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,

// percent (37): w=17, h=14
0x30,0x09,
0x3C,0x7E,0xC3,0xC3,0xE7,0x7E,0x3C,0x80,0xE0,0x70,
0x38,0x1C,0x0F,0x03,0x01,0x00,0x00,
0x00,0x00,0x20,0x30,0x3C,0x0E,0x07,0x03,0x01,0x00,
0x1E,0x3F,0x33,0x33,0x33,0x3F,0x1E,

// ampersand (38): w=15, h=14
0x2E,0x09,
0x00,0x80,0xC0,0xDE,0xFE,0xFF,0xF3,0xE3,0xB3,0x33,
0x1E,0x0C,0x80,0xC0,0xC0,
0x0F,0x1F,0x1F,0x38,0x30,0x30,0x31,0x37,0x3F,0x1F,
0x3C,0x3E,0x37,0x23,0x00,

// quotesingle (39): w=4, h=6
0x03,0x0E,
0x07,0x3F,0x3F,0x07,

// parenleft (40): w=5, h=18
0x44,0x10,
0xC0,0xF8,0xFC,0x1E,0x07,
0x0F,0x7F,0xFF,0xE0,0x80,
0x00,0x00,0x00,0x01,0x03,

// parenright (41): w=5, h=18
0x44,0x15,
0x07,0x1E,0xFC,0xF8,0xC0,
0x80,0xE0,0xFF,0x7F,0x0F,
0x03,0x01,0x00,0x00,0x00,

// asterisk (42): w=8, h=6
0x07,0x0E,
0x04,0x16,0x34,0x1B,0x13,0x3C,0x16,0x04,

// plus (43): w=12, h=12
0x2B,0x4F,
0x60,0x60,0x60,0x60,0x60,0xFF,0xFF,0x60,0x60,0x60,
0x60,0x60,
0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=4, h=7
0x83,0x0A,0x57,
0x4F,0x7F,0x3F,0x1F,

// hyphen (45): w=4, h=2
0x03,0xCF,
0x03,0x03,0x03,0x03,

// period (46): w=4, h=3
0x83,0x0B,0x57,
0x07,0x07,0x07,0x07,

// slash (47): w=12, h=17
0x4B,0x08,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0x3C,0x0F,
0x03,0x01,
0x00,0x80,0xE0,0x78,0x1E,0x0F,0x03,0x00,0x00,0x00,
0x00,0x00,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// zero (48): w=12, h=14
0x2B,0x0F,
0xF0,0xFC,0xFE,0x06,0x03,0x03,0x03,0x03,0x06,0xFE,
0xFC,0xF0,
0x03,0x0F,0x1F,0x18,0x30,0x30,0x30,0x30,0x18,0x1F,
0x0F,0x03,

// one (49): w=5, h=14
0xA4,0x00,0x8A,
0x03,0x03,0xFF,0xFF,0xFF,
0x00,0x00,0x3F,0x3F,0x3F,

// two (50): w=11, h=14
0x2A,0x10,
0x06,0x07,0x03,0x03,0x03,0x03,0x83,0xC7,0xFE,0x7E,
0x3C,
0x38,0x3C,0x3C,0x3E,0x3F,0x33,0x33,0x31,0x30,0x30,
0x30,

// three (51): w=10, h=14
0x29,0x16,
0x06,0xC3,0xC3,0xC3,0xC3,0xC3,0xE7,0xBF,0x3E,0x1C,
0x38,0x30,0x30,0x30,0x30,0x30,0x39,0x3F,0x1F,0x0E,

// four (52): w=11, h=14
0x2A,0x10,
0x80,0xC0,0xE0,0x70,0x38,0x1C,0x07,0xFF,0xFF,0xFF,
0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x3F,0x3F,0x3F,
0x03,

// five (53): w=10, h=14
0x29,0x16,
0x7F,0x7F,0x63,0x63,0x63,0xE3,0xC3,0xC3,0x83,0x03,
0x38,0x30,0x30,0x30,0x30,0x30,0x38,0x1F,0x1F,0x0F,

// six (54): w=12, h=14
0x2B,0x0F,
0xF0,0xFC,0xFE,0xCE,0x67,0x63,0x63,0x63,0xE3,0xC3,
0xC7,0x80,
0x03,0x0F,0x1F,0x18,0x30,0x30,0x30,0x30,0x38,0x1F,
0x1F,0x07,

// seven (55): w=10, h=14
0x29,0x1B,
0x03,0x03,0x03,0x83,0xC3,0xE3,0x7B,0x3F,0x0F,0x07,
0x20,0x38,0x3E,0x3F,0x0F,0x01,0x00,0x00,0x00,0x00,

// eight (56): w=12, h=14
0x2B,0x0F,
0x00,0x1C,0xBE,0xFF,0xF3,0xE3,0xE3,0xE7,0xFF,0xBE,
0x9C,0x00,
0x0E,0x1F,0x1F,0x38,0x30,0x30,0x30,0x31,0x3B,0x1F,
0x1F,0x0F,

// nine (57): w=12, h=14
0x2B,0x0F,
0x78,0xFE,0xFE,0xC7,0x83,0x83,0x83,0x83,0xC7,0xFE,
0xFC,0xF0,
0x00,0x38,0x30,0x31,0x31,0x31,0x31,0x39,0x1C,0x1F,
0x0F,0x03,

// colon (58): w=3, h=11
0x22,0x76,
0x07,0x07,0x07,
0x07,0x07,0x07,

// semicolon (59): w=3, h=14
0x22,0x76,
0x87,0x87,0x87,
0x27,0x3F,0x0F,

// less (60): w=12, h=12
0x2B,0x4F,
0x20,0x60,0x60,0xF0,0xF0,0xF8,0x98,0x9C,0x0C,0x0E,
0x06,0x07,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x07,
0x06,0x0E,

// equal (61): w=12, h=8
0x0B,0x8F,
0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,
0xC3,0xC3,

// greater (62): w=12, h=12
0x2B,0x4F,
0x07,0x06,0x0E,0x0C,0x9C,0x98,0xF8,0xF0,0xF0,0x60,
0x60,0x40,
0x0E,0x06,0x07,0x03,0x03,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,

// question (63): w=10, h=14
0x29,0x0E,
0x07,0x03,0x03,0x03,0x83,0xC3,0x67,0x3F,0x1E,0x1C,
0x00,0x00,0x33,0x33,0x33,0x00,0x00,0x00,0x00,0x00,

// at (64): w=16, h=14
0x2F,0x13,
0xC0,0x30,0x18,0x84,0xE6,0x32,0x13,0x09,0x89,0xF9,
0xF9,0x79,0x02,0x02,0x0C,0xF8,
0x07,0x08,0x10,0x13,0x27,0x26,0x26,0x23,0x21,0x36,
0x07,0x04,0x04,0x02,0x01,0x00,

// A (65): w=15, h=14
0x2E,0x08,
0x00,0x00,0x00,0xC0,0xF8,0x3F,0x07,0x0F,0x3F,0xFE,
0xF8,0xC0,0x00,0x00,0x00,
0x20,0x38,0x3F,0x07,0x03,0x03,0x03,0x03,0x03,0x03,
0x0F,0x3F,0x3F,0x38,0x20,

// B (66): w=10, h=14
0x29,0x15,
0xFF,0xFF,0xFF,0xC3,0xC3,0xE3,0xBF,0xBF,0x1C,0x00,
0x3F,0x3F,0x3F,0x30,0x30,0x30,0x31,0x3F,0x1F,0x0F,

// C (67): w=13, h=14
0x2C,0x0F,
0xF0,0xFC,0xFC,0x1E,0x06,0x07,0x03,0x03,0x03,0x03,
0x03,0x07,0x07,
0x03,0x0F,0x0F,0x1E,0x38,0x38,0x30,0x30,0x30,0x30,
0x30,0x30,0x18,

// D (68): w=14, h=14
0x2D,0x14,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x07,0x07,
0x1E,0xFE,0xFC,0xF0,
0x3F,0x3F,0x3F,0x30,0x30,0x30,0x30,0x30,0x30,0x38,
0x1C,0x1F,0x0F,0x03,

// E (69): w=10, h=14
0x29,0x15,
0xFF,0xFF,0xFF,0xC3,0xC3,0xC3,0xC3,0xC3,0x03,0x03,
0x3F,0x3F,0x3F,0x30,0x30,0x30,0x30,0x30,0x30,0x30,

// F (70): w=9, h=14
0x28,0x15,
0xFF,0xFF,0xFF,0xC3,0xC3,0xC3,0xC3,0xC3,0x03,
0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=13, h=14
0x2C,0x0F,
0xF0,0xF8,0xFC,0x1E,0x06,0x07,0x03,0x03,0x03,0x03,
0x83,0x87,0x87,
0x03,0x0F,0x0F,0x1E,0x18,0x38,0x30,0x30,0x30,0x30,
0x3F,0x3F,0x1F,

// H (72): w=13, h=14
0x2C,0x15,
0xFF,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
0xFF,0xFF,0xFF,
0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3F,0x3F,0x3F,

// I (73): w=3, h=14
0x22,0x16,
0xFF,0xFF,0xFF,
0x3F,0x3F,0x3F,

// J (74): w=7, h=17
0x46,0x10,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xC0,0x80,0x80,0x80,0xFF,0xFF,0x7F,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// K (75): w=13, h=14
0x2C,0x14,
0xFF,0xFF,0xFF,0x40,0xE0,0xF0,0xB8,0x1C,0x0F,0x03,
0x01,0x01,0x00,
0x3F,0x3F,0x3F,0x00,0x01,0x03,0x07,0x1F,0x3E,0x3C,
0x30,0x20,0x20,

// L (76): w=10, h=14
0x29,0x14,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3F,0x3F,0x3F,0x30,0x30,0x30,0x30,0x30,0x30,0x30,

// M (77): w=15, h=14
0x2E,0x16,
0xFF,0xFF,0x0F,0x7F,0xFF,0xF8,0xC0,0x00,0x80,0xF0,
0xFE,0x1F,0xFF,0xFF,0xFF,
0x3F,0x3F,0x00,0x00,0x03,0x0F,0x1F,0x1E,0x1F,0x03,
0x00,0x00,0x3F,0x3F,0x3F,

// N (78): w=12, h=14
0x2B,0x16,
0xFF,0xFF,0x1F,0x3E,0x78,0xF0,0xE0,0x80,0x00,0x00,
0xFF,0xFF,
0x3F,0x3F,0x00,0x00,0x00,0x01,0x03,0x07,0x1F,0x3E,
0x3F,0x3F,

// O (79): w=16, h=14
0x2F,0x0E,
0xF0,0xF8,0xFC,0x1E,0x06,0x07,0x03,0x03,0x03,0x03,
0x07,0x06,0x1E,0xFC,0xF8,0xF0,
0x03,0x07,0x0F,0x1E,0x18,0x38,0x30,0x30,0x30,0x30,
0x38,0x18,0x1E,0x0F,0x07,0x03,

// P (80): w=10, h=14
0x29,0x15,
0xFF,0xFF,0xFF,0x83,0x83,0x83,0xC7,0xFF,0xFE,0x3E,
0x3F,0x3F,0x3F,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// Q (81): w=18, h=18
0x51,0x0C,
0xF0,0xF8,0xFC,0x1E,0x06,0x07,0x03,0x03,0x03,0x03,
0x07,0x06,0x1E,0xFC,0xF8,0xF0,0x00,0x00,
0x03,0x0F,0x0F,0x1E,0x18,0x38,0x30,0x30,0x30,0x70,
0xF8,0xF8,0xFE,0xDF,0xCF,0xC3,0xC0,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x03,0x03,0x01,0x00,

// R (82): w=13, h=14
0x2C,0x14,
0xFF,0xFF,0xFF,0xC3,0xC3,0xC3,0xC3,0xE3,0x7F,0x3E,
0x1C,0x00,0x00,
0x3F,0x3F,0x3F,0x00,0x00,0x01,0x07,0x1F,0x3E,0x3C,
0x38,0x20,0x20,

// S (83): w=11, h=14
0x2A,0x0E,
0x1C,0x3E,0x7E,0xFF,0xF3,0xE3,0xE3,0xC3,0x83,0x87,
0x00,
0x38,0x38,0x30,0x30,0x30,0x30,0x31,0x39,0x1F,0x1F,
0x0F,

// T (84): w=13, h=14
0x2C,0x0F,
0x03,0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,
0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x3F,0x00,0x00,
0x00,0x00,0x00,

// U (85): w=12, h=14
0x2B,0x16,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0xFF,
0x07,0x1F,0x1F,0x38,0x30,0x30,0x30,0x30,0x38,0x1F,
0x1F,0x07,

// V (86): w=14, h=14
0x2D,0x09,
0x01,0x07,0x3F,0xFF,0xFC,0xE0,0x00,0x00,0x00,0xC0,
0xF8,0x3E,0x0F,0x01,
0x00,0x00,0x00,0x00,0x07,0x3F,0x3F,0x38,0x3E,0x0F,
0x01,0x00,0x00,0x00,

// W (87): w=18, h=14
0x31,0x09,
0x01,0x1F,0xFF,0xFE,0xE0,0x00,0x80,0xF8,0x7F,0x7F,
0xFF,0xF8,0x80,0x00,0xE0,0xFE,0x1F,0x01,
0x00,0x00,0x01,0x1F,0x3F,0x3E,0x3F,0x0F,0x00,0x00,
0x0F,0x3F,0x3F,0x3E,0x1F,0x01,0x00,0x00,

// X (88): w=13, h=14
0x2C,0x0E,
0x00,0x01,0x07,0x1F,0x7E,0xFC,0xF0,0xF0,0xBC,0x1E,
0x07,0x03,0x01,
0x20,0x30,0x38,0x1E,0x07,0x03,0x03,0x07,0x1F,0x3E,
0x38,0x30,0x20,

// Y (89): w=13, h=14
0x2C,0x0F,
0x01,0x03,0x0F,0x1F,0x7E,0xF8,0xE0,0xE0,0x78,0x3C,
0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x3F,0x00,0x00,
0x00,0x00,0x00,

// Z (90): w=11, h=14
0x2A,0x0F,
0x03,0x03,0x03,0x83,0xC3,0xF3,0xFB,0x7F,0x1F,0x0F,
0x03,
0x30,0x3C,0x3E,0x3F,0x37,0x33,0x30,0x30,0x30,0x30,
0x30,

// bracketleft (91): w=5, h=17
0x44,0x15,
0xFF,0xFF,0xFF,0x03,0x03,
0xFF,0xFF,0xFF,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,

// backslash (92): w=12, h=17
0x4B,0x08,
0x01,0x03,0x0F,0x3C,0xF0,0xE0,0x80,0x00,0x00,0x00,
0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x1E,0x78,0xE0,
0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x01,

// bracketright (93): w=5, h=17
0x44,0x10,
0x03,0x03,0xFF,0xFF,0xFF,
0x80,0x80,0xFF,0xFF,0xFF,
0x01,0x01,0x01,0x01,0x01,

// asciicircum (94): w=12, h=12
0x2B,0x0F,
0x00,0x00,0x80,0xE0,0xF8,0x3E,0x3F,0xF8,0xE0,0x80,
0x00,0x00,
0x08,0x0E,0x0F,0x03,0x00,0x00,0x00,0x00,0x03,0x0F,
0x0E,0x08,

// underscore (95): w=9, h=2
0x88,0x0F,0x55,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=5, h=2
0x84,0x00,0x89,
0x01,0x01,0x03,0x02,0x02,

// a (97): w=11, h=11
0x2A,0x6E,
0xC0,0xE6,0xF3,0x73,0x33,0x33,0x33,0xFF,0xFE,0xFC,
0x00,
0x03,0x07,0x07,0x06,0x06,0x02,0x03,0x07,0x07,0x07,
0x06,

// b (98): w=12, h=14
0x2B,0x0F,
0xFF,0xFF,0xFF,0x20,0x10,0x18,0x18,0x18,0x38,0xF0,
0xF0,0xC0,
0x3F,0x3F,0x3F,0x18,0x10,0x30,0x30,0x30,0x3C,0x1F,
0x1F,0x07,

// c (99): w=8, h=11
0x27,0x75,
0xF8,0xFE,0xFE,0x07,0x03,0x03,0x03,0x07,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x06,

// d (100): w=12, h=14
0x2B,0x0A,
0xC0,0xF0,0xF0,0x78,0x18,0x18,0x18,0x18,0x30,0xFF,
0xFF,0xFF,
0x07,0x1F,0x3F,0x38,0x30,0x30,0x30,0x10,0x08,0x3F,
0x3F,0x3F,

// e (101): w=11, h=11
0x2A,0x69,
0xF8,0xFC,0xFE,0xEF,0x67,0x63,0x63,0x67,0x7E,0x7E,
0x78,
0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x06,0x06,0x06,
0x03,

// f (102): w=8, h=14
0x27,0x0E,
0x18,0xFE,0xFF,0xFF,0x1B,0x1B,0x1B,0x03,
0x00,0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,

// g (103): w=12, h=15
0x2B,0x6A,
0xF8,0xFE,0xFE,0x0F,0x03,0x03,0x03,0x02,0x07,0xFF,
0xFF,0xFF,
0x00,0x33,0x63,0x67,0x66,0x66,0x66,0x72,0x79,0x3F,
0x3F,0x1F,

// h (104): w=11, h=14
0x2A,0x10,
0xFF,0xFF,0xFF,0x20,0x10,0x18,0x18,0x18,0xF8,0xF0,
0xE0,
0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,
0x3F,

// i (105): w=3, h=14
0x22,0x16,
0xFB,0xFB,0xFB,
0x3F,0x3F,0x3F,

// j (106): w=7, h=18
0x46,0x03,
0x00,0x00,0x00,0x00,0xFB,0xFB,0xFB,
0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x01,

// k (107): w=11, h=14
0x2A,0x15,
0xFF,0xFF,0xFF,0x00,0x80,0xE0,0x70,0x38,0x18,0x08,
0x00,
0x3F,0x3F,0x3F,0x01,0x03,0x0F,0x3F,0x3C,0x38,0x30,
0x20,

// l (108): w=3, h=14
0x22,0x16,
0xFF,0xFF,0xFF,
0x3F,0x3F,0x3F,

// m (109): w=17, h=11
0x30,0x75,
0xFF,0xFF,0xFF,0x04,0x02,0x03,0x03,0xFF,0xFF,0xFE,
0x04,0x02,0x03,0x03,0xFF,0xFF,0xFE,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x07,0x07,0x07,
0x00,0x00,0x00,0x00,0x07,0x07,0x07,

// n (110): w=11, h=11
0x2A,0x70,
0xFF,0xFF,0xFF,0x06,0x02,0x03,0x03,0x03,0xFF,0xFE,
0xFC,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x07,

// o (111): w=12, h=11
0x2B,0x6E,
0xF8,0xFC,0xFE,0x07,0x03,0x03,0x03,0x03,0x07,0xFE,
0xFC,0xF8,
0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x06,0x07,0x03,
0x01,0x00,

// p (112): w=12, h=15
0x2B,0x6F,
0xFF,0xFF,0xFF,0x04,0x02,0x03,0x03,0x03,0x87,0xFF,
0xFE,0xF8,
0x7F,0x7F,0x7F,0x03,0x06,0x06,0x06,0x06,0x07,0x03,
0x03,0x00,

// q (113): w=12, h=15
0x2B,0x6A,
0xF8,0xFE,0xFE,0x0F,0x03,0x03,0x03,0x02,0x07,0xFF,
0xFF,0xFF,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x02,0x01,0x7F,
0x7F,0x7F,

// r (114): w=7, h=11
0x26,0x75,
0xFF,0xFF,0xFF,0x0E,0x06,0x07,0x07,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// s (115): w=10, h=11
0x29,0x6F,
0x1C,0x3E,0x3F,0x7F,0x73,0xF3,0xF3,0xE3,0xE7,0xC0,
0x07,0x06,0x06,0x06,0x06,0x06,0x07,0x07,0x03,0x01,

// t (116): w=6, h=13
0x25,0x30,
0x0C,0xFF,0xFF,0xFF,0x0C,0x0C,
0x00,0x0F,0x1F,0x1F,0x18,0x1C,

// u (117): w=11, h=11
0x2A,0x70,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,
0x01,0x03,0x07,0x06,0x06,0x06,0x02,0x03,0x07,0x07,
0x07,

// v (118): w=12, h=11
0x2B,0x6E,
0x01,0x07,0x1F,0xFF,0xFC,0xE0,0x00,0xC0,0xF8,0x3F,
0x0F,0x01,
0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x07,0x01,0x00,
0x00,0x00,

// w (119): w=17, h=11
0x30,0x69,
0x01,0x1F,0xFF,0xFE,0xE0,0x80,0xF8,0x7F,0x0F,0xFF,
0xFF,0xF8,0x80,0xF0,0xFE,0x0F,0x01,
0x00,0x00,0x01,0x07,0x07,0x07,0x03,0x00,0x00,0x00,
0x07,0x07,0x07,0x07,0x00,0x00,0x00,

// x (120): w=11, h=11
0x2A,0x68,
0x01,0x03,0x0F,0xFF,0xFF,0xFC,0xF8,0xFE,0x87,0x03,
0x00,
0x04,0x06,0x07,0x03,0x00,0x01,0x07,0x07,0x07,0x07,
0x04,

// y (121): w=12, h=15
0x2B,0x69,
0x01,0x07,0x3F,0xFF,0xFC,0xE0,0x80,0xE0,0x7C,0x1F,
0x07,0x01,
0x00,0x40,0x60,0x70,0x7F,0x3F,0x0F,0x01,0x00,0x00,
0x00,0x00,

// z (122): w=10, h=11
0x29,0x6F,
0x03,0x83,0xC3,0xE3,0xF3,0x7F,0x3F,0x1F,0x07,0x03,
0x07,0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,

// braceleft (123): w=6, h=17
0x45,0x0F,
0x00,0x00,0x1E,0xFF,0xFF,0x73,
0x03,0x03,0xE3,0xFE,0xFE,0x9C,
0x00,0x00,0x00,0x01,0x01,0x01,

// bar (124): w=2, h=17
0x41,0x15,
0xFF,0xFF,
0xFF,0xFF,
0x01,0x01,

// braceright (125): w=6, h=17
0x45,0x0F,
0x7F,0xFF,0xFE,0x00,0x00,0x00,
0xFC,0xFE,0xFE,0x03,0x03,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,

// asciitilde (126): w=12, h=5
0x0B,0xCF,
0x1C,0x1F,0x03,0x03,0x07,0x06,0x0C,0x1C,0x18,0x18,
0x1F,0x07

};
// 2148 bytes
// 2338 bytes with FAST_FONT_INDEX
