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

// charBI14 = "Bitstream Charter Black Italic"

const char font_charBI14[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD2,0x00,
0xD9,0x00,
0xF5,0x00,
0x0D,0x01,
0x2F,0x01,
0x4D,0x01,
0x54,0x01,
0x66,0x01,
0x78,0x01,
0x82,0x01,
0x9C,0x01,
0xA3,0x01,
0xAC,0x01,
0xB3,0x01,
0xD0,0x01,
0xE8,0x01,
0xFA,0x01,
0x12,0x02,
0x2A,0x02,
0x42,0x02,
0x5A,0x02,
0x70,0x02,
0x88,0x02,
0xA0,0x02,
0xB6,0x02,
0xC0,0x02,
0xCE,0x02,
0xE6,0x02,
0xF3,0x02,
0x0B,0x03,
0x1F,0x03,
0x3F,0x03,
0x5D,0x03,
0x79,0x03,
0x93,0x03,
0xB1,0x03,
0xCD,0x03,
0xE7,0x03,
0x03,0x04,
0x25,0x04,
0x39,0x04,
0x51,0x04,
0x71,0x04,
0x89,0x04,
0xB3,0x04,
0xD5,0x04,
0xF1,0x04,
0x0D,0x05,
0x36,0x05,
0x54,0x05,
0x6C,0x05,
0x86,0x05,
0xA4,0x05,
0xC2,0x05,
0xEA,0x05,
0x0A,0x06,
0x28,0x06,
0x42,0x06,
0x56,0x06,
0x6C,0x06,
0x80,0x06,
0x8E,0x06,
0x9B,0x06,
0xA2,0x06,
0xBE,0x06,
0xD6,0x06,
0xEA,0x06,
0x04,0x07,
0x18,0x07,
0x42,0x07,
0x5C,0x07,
0x76,0x07,
0x82,0x07,
0xA3,0x07,
0xBD,0x07,
0xCB,0x07,
0xF1,0x07,
0x0B,0x08,
0x23,0x08,
0x3F,0x08,
0x57,0x08,
0x6D,0x08,
0x81,0x08,
0x91,0x08,
0xAD,0x08,
0xC5,0x08,
0xE7,0x08,
0x01,0x09,
0x1B,0x09,
0x31,0x09,
0x43,0x09,
0x4C,0x09,
0x5E,0x09,

// space (32): w=1, h=1
0x80,0x0D,0x4A,
0x00,

// exclam (33): w=6, h=14
0x25,0x09,
0x00,0x00,0xFE,0xFF,0x1F,0x07,
0x18,0x3C,0x3D,0x18,0x00,0x00,

// quotedbl (34): w=5, h=6
0x04,0x2F,
0x0F,0x3F,0x00,0x0F,0x3F,

// numbersign (35): w=13, h=14
0x2C,0x2F,
0x00,0x10,0x10,0x90,0xF0,0x3C,0x17,0x91,0xF0,0x3C,
0x1F,0x11,0x10,
0x01,0x21,0x3D,0x0F,0x01,0x21,0x3D,0x0F,0x01,0x01,
0x01,0x01,0x00,

// dollar (36): w=11, h=16
0x2A,0x09,
0x00,0x10,0x7E,0xFE,0xF3,0xE1,0xFF,0xC1,0xC1,0x8F,
0x07,
0x38,0x3C,0x20,0xA0,0xFC,0x2F,0x21,0x3F,0x1F,0x0F,
0x00,

// percent (37): w=16, h=13
0x2F,0x30,
0x7C,0xFE,0x87,0x81,0xE1,0x7F,0x9E,0xC0,0x60,0x30,
0xDC,0xE6,0x23,0x21,0xE0,0xC0,
0x00,0x00,0x10,0x18,0x0C,0x07,0x01,0x00,0x00,0x0F,
0x1F,0x10,0x10,0x1C,0x0F,0x07,

// ampersand (38): w=14, h=14
0x2D,0x09,
0x00,0x00,0xBC,0xFE,0xFF,0xF3,0xC1,0xB1,0x3F,0x3F,
0x5E,0xC0,0xC0,0x40,
0x1E,0x1F,0x3F,0x38,0x30,0x31,0x13,0x1F,0x1F,0x3E,
0x3E,0x31,0x20,0x20,

// quoteright (39): w=5, h=6
0x04,0x4E,
0x20,0x20,0x36,0x1F,0x0F,

// parenleft (40): w=8, h=16
0x27,0x2D,
0x80,0xE0,0xF8,0xFC,0x0E,0x03,0x03,0x01,
0x1F,0x7F,0xFF,0xC0,0x80,0x00,0x00,0x00,

// parenright (41): w=8, h=16
0x27,0x24,
0x00,0x00,0x00,0x01,0x03,0xFE,0xFE,0xF8,
0x80,0xC0,0xC0,0x70,0x3F,0x1F,0x07,0x01,

// asterisk (42): w=8, h=7
0x07,0x34,
0x08,0x6C,0x68,0x16,0x7F,0x68,0x0C,0x04,

// plus (43): w=12, h=12
0x2B,0x56,
0x60,0x60,0x60,0x60,0x60,0xFF,0xFF,0x60,0x60,0x60,
0x60,0x60,
0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=4, h=7
0x83,0x0B,0x38,
0x40,0x26,0x3F,0x0F,

// hyphen (45): w=6, h=2
0x85,0x09,0x46,
0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=4, h=3
0x83,0x0B,0x47,
0x02,0x07,0x07,0x02,

// slash (47): w=13, h=16
0xAC,0x00,0x14,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x70,0x1C,
0x0E,0x03,0x01,
0x80,0xC0,0x70,0x38,0x0E,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,

// zero (48): w=11, h=14
0x2A,0x0E,
0xE0,0xF8,0xFE,0x3E,0x07,0x01,0x01,0x81,0xFF,0xFE,
0xFC,
0x0F,0x1F,0x3F,0x30,0x20,0x20,0x38,0x1F,0x1F,0x07,
0x01,

// one (49): w=8, h=14
0x27,0x11,
0x00,0x04,0x04,0x06,0xFE,0xFF,0xFF,0x07,
0x20,0x20,0x20,0x3F,0x3F,0x3F,0x20,0x20,

// two (50): w=11, h=14
0x2A,0x09,
0x00,0x00,0x0C,0x1E,0x1F,0x0F,0x81,0xC3,0xFF,0x7F,
0x3E,
0x30,0x38,0x38,0x3C,0x3E,0x3B,0x3B,0x39,0x38,0x3E,
0x06,

// three (51): w=11, h=14
0x2A,0x09,
0x00,0x00,0x0E,0x8E,0xCF,0xC1,0xE1,0xF3,0xBF,0xBF,
0x0E,
0x18,0x3C,0x3C,0x20,0x20,0x20,0x30,0x3F,0x1F,0x1F,
0x00,

// four (52): w=11, h=15
0x2A,0x09,
0x00,0x00,0xC0,0xE0,0x70,0x18,0x8C,0xFE,0xFF,0x7F,
0x01,
0x02,0x03,0x03,0x02,0x02,0x62,0x7F,0x7F,0x0F,0x02,
0x02,

// five (53): w=11, h=14
0x2A,0x09,
0x00,0x00,0x7C,0x7F,0x67,0x67,0xE7,0xE7,0xC7,0x87,
0x07,
0x1C,0x3C,0x3C,0x20,0x20,0x20,0x38,0x1F,0x1F,0x07,
0x00,

// six (54): w=10, h=13
0x29,0x2F,
0xC0,0xF0,0xF8,0x3C,0x2C,0x26,0x66,0xE3,0xE3,0xC2,
0x07,0x0F,0x1F,0x18,0x10,0x10,0x18,0x0F,0x0F,0x03,

// seven (55): w=11, h=15
0x2A,0x13,
0x1C,0x1F,0x07,0x07,0x07,0xC7,0xF7,0x3F,0x0F,0x07,
0x01,
0x40,0x60,0x78,0x1E,0x07,0x01,0x00,0x00,0x00,0x00,
0x00,

// eight (56): w=11, h=14
0x2A,0x09,
0x00,0x18,0xFE,0xFE,0xFF,0xE1,0xC1,0xE3,0xBF,0xBF,
0x1E,
0x1E,0x1F,0x3F,0x31,0x20,0x21,0x21,0x3F,0x1F,0x0F,
0x00,

// nine (57): w=10, h=16
0x29,0x0F,
0xF8,0xFE,0xFE,0x87,0x01,0x01,0x03,0xFF,0xFE,0xFC,
0x40,0xC1,0x43,0x63,0x33,0x39,0x1F,0x0F,0x03,0x00,

// colon (58): w=4, h=9
0x23,0xB0,
0xC0,0xC7,0xC7,0x07,
0x01,0x01,0x01,0x00,

// semicolon (59): w=6, h=13
0x25,0xAA,
0x00,0x00,0xC0,0xC7,0xC7,0x07,
0x10,0x18,0x09,0x0F,0x03,0x00,

// less (60): w=11, h=10
0x2A,0x97,
0x30,0x30,0x78,0x78,0x48,0xCC,0x84,0x86,0x86,0x02,
0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x03,

// equal (61): w=11, h=6
0x0A,0xDC,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x33,

// greater (62): w=11, h=10
0x2A,0x9C,
0x03,0x02,0x86,0x86,0x84,0xCC,0x48,0x78,0x78,0x30,
0x30,
0x03,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// question (63): w=9, h=14
0x28,0x0E,
0x06,0x0E,0xC7,0xC1,0x61,0x73,0x7F,0x3F,0x1E,
0x18,0x3C,0x3D,0x18,0x00,0x00,0x00,0x00,0x00,

// at (64): w=15, h=16
0x2E,0x35,
0xC0,0xF0,0x38,0x0C,0x86,0xE2,0x21,0x11,0x11,0xF1,
0xF1,0x32,0x06,0x0C,0xF0,
0x07,0x1F,0x38,0x60,0x47,0xCF,0x8C,0x84,0x82,0x8F,
0x8F,0x4C,0x44,0x03,0x00,

// A (65): w=14, h=14
0x2D,0x02,
0x00,0x00,0x00,0x00,0xC0,0xE0,0x38,0x0E,0x7F,0xFF,
0xFF,0xE0,0x00,0x00,
0x20,0x30,0x3C,0x2F,0x23,0x01,0x01,0x01,0x21,0x3F,
0x3F,0x3F,0x30,0x20,

// B (66): w=13, h=14
0x2C,0x09,
0x00,0x00,0x01,0xF9,0xFF,0xFF,0x5F,0x41,0x41,0xE3,
0xFF,0xBF,0x1E,
0x20,0x20,0x3F,0x3F,0x3F,0x27,0x20,0x20,0x30,0x3D,
0x3F,0x1F,0x07,

// C (67): w=12, h=14
0x2B,0x0E,
0xE0,0xF8,0xFE,0x1E,0x07,0x03,0x01,0x01,0x01,0x01,
0x0F,0x07,
0x07,0x1F,0x3F,0x38,0x30,0x20,0x20,0x20,0x38,0x3C,
0x02,0x00,

// D (68): w=14, h=14
0x2D,0x09,
0x00,0x00,0x01,0xFD,0xFF,0xFF,0x0F,0x01,0x01,0x03,
0x07,0xFF,0xFE,0xF8,
0x20,0x20,0x3F,0x3F,0x3F,0x23,0x20,0x30,0x30,0x38,
0x1F,0x0F,0x07,0x01,

// E (69): w=13, h=14
0x2C,0x08,
0x00,0x00,0x01,0xFD,0xFF,0xFF,0x4F,0x41,0xE1,0xF1,
0x01,0x07,0x03,
0x20,0x20,0x3F,0x3F,0x3F,0x21,0x20,0x20,0x21,0x30,
0x3C,0x0C,0x00,

// F (70): w=12, h=14
0x2B,0x07,
0x00,0x00,0x81,0xFF,0xFF,0x7F,0x41,0x41,0xF1,0x31,
0x07,0x07,
0x20,0x30,0x3F,0x3F,0x3F,0x20,0x00,0x00,0x01,0x00,
0x00,0x00,

// G (71): w=13, h=14
0x2C,0x0F,
0xE0,0xF8,0xFE,0x1E,0x07,0x03,0x83,0x81,0x81,0x81,
0x8F,0x8F,0x81,
0x07,0x1F,0x3F,0x38,0x30,0x20,0x20,0x30,0x3F,0x3F,
0x1F,0x00,0x00,

// H (72): w=16, h=14
0x2F,0x07,
0x00,0x00,0x81,0xFF,0xFF,0xFF,0x43,0x41,0x40,0x40,
0xC1,0xFF,0xFF,0x7F,0x01,0x01,
0x20,0x20,0x3F,0x3F,0x3F,0x20,0x00,0x00,0x20,0x30,
0x3F,0x3F,0x3F,0x20,0x00,0x00,

// I (73): w=9, h=14
0x28,0x07,
0x00,0x00,0x01,0xF9,0xFF,0xFF,0x1F,0x01,0x01,
0x20,0x20,0x3E,0x3F,0x3F,0x27,0x20,0x00,0x00,

// J (74): w=11, h=14
0x2A,0x02,
0x00,0x00,0x00,0x00,0x00,0xC1,0xFF,0xFF,0xFF,0x01,
0x01,
0x38,0x3C,0x20,0x20,0x38,0x1F,0x1F,0x07,0x00,0x00,
0x00,

// K (75): w=15, h=14
0x2E,0x07,
0x00,0x00,0x81,0xFF,0xFF,0xFF,0x87,0xC1,0xF0,0xF8,
0x1D,0x07,0x03,0x01,0x01,
0x20,0x20,0x3F,0x3F,0x3F,0x21,0x00,0x03,0x0F,0x3F,
0x3E,0x38,0x20,0x20,0x00,

// L (76): w=11, h=14
0x2A,0x09,
0x00,0x00,0x81,0xFD,0xFF,0xFF,0x07,0x01,0x00,0x00,
0x00,
0x20,0x20,0x3F,0x3F,0x3F,0x21,0x20,0x20,0x30,0x3C,
0x0C,

// M (77): w=20, h=14
0x33,0x07,
0x00,0x00,0x01,0xF9,0x7F,0x03,0xFF,0xFF,0xFE,0x00,
0x00,0xC0,0x70,0x1C,0xC7,0xFF,0xFF,0x7F,0x01,0x01,
0x20,0x20,0x3F,0x2F,0x20,0x00,0x00,0x3F,0x3F,0x1F,
0x07,0x01,0x20,0x20,0x3F,0x3F,0x3F,0x20,0x00,0x00,

// N (78): w=16, h=14
0x2F,0x07,
0x00,0x00,0x01,0xFD,0x3F,0x0F,0x7F,0xFF,0xF8,0xC0,
0x00,0x01,0xFD,0x3F,0x01,0x01,
0x20,0x20,0x3F,0x2F,0x20,0x00,0x00,0x01,0x0F,0x3F,
0x3E,0x3F,0x0F,0x00,0x00,0x00,

// O (79): w=13, h=14
0x2C,0x0F,
0xE0,0xF8,0xFE,0x1E,0x07,0x03,0x01,0x01,0x01,0x03,
0xFF,0xFE,0xF8,
0x07,0x1F,0x3F,0x38,0x20,0x20,0x20,0x30,0x38,0x1E,
0x1F,0x07,0x01,

// P (80): w=13, h=14
0x2C,0x08,
0x00,0x00,0x01,0xF9,0xFF,0xFF,0x3F,0x01,0x81,0xC3,
0xFF,0xFF,0x3C,
0x20,0x20,0x3F,0x3F,0x3F,0x27,0x21,0x01,0x01,0x01,
0x01,0x00,0x00,

// Q (81): w=13, h=17
0x4C,0x0F,
0xE0,0xF8,0xFE,0x1E,0x07,0x03,0x01,0x01,0x01,0x03,
0xFF,0xFE,0xFC,
0x07,0x1F,0x3F,0x38,0x20,0x20,0x60,0xF0,0xF8,0xDE,
0x8F,0x87,0x81,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x00,

// R (82): w=14, h=14
0x2D,0x08,
0x00,0x00,0x01,0xF9,0xFF,0xFF,0x9F,0x81,0x81,0xE3,
0x7F,0x7F,0x1E,0x00,
0x20,0x20,0x3F,0x3F,0x3F,0x27,0x20,0x00,0x07,0x1F,
0x3F,0x3C,0x20,0x20,

// S (83): w=11, h=14
0x2A,0x08,
0x00,0x00,0x3C,0x7E,0xFF,0xE3,0xE1,0xC1,0x87,0x0F,
0x01,
0x10,0x3C,0x3C,0x20,0x20,0x21,0x31,0x1F,0x1F,0x0F,
0x00,

// T (84): w=12, h=14
0x2B,0x0D,
0x0E,0x0F,0x01,0x81,0xFF,0xFF,0xFF,0x03,0x01,0x01,
0x0F,0x07,
0x00,0x20,0x20,0x3F,0x3F,0x3F,0x20,0x00,0x00,0x00,
0x00,0x00,

// U (85): w=14, h=14
0x2D,0x0D,
0x81,0xFF,0xFF,0x7F,0x01,0x01,0x00,0x00,0x00,0x81,
0xFD,0x3F,0x01,0x01,
0x0F,0x1F,0x3F,0x38,0x30,0x30,0x30,0x18,0x18,0x0F,
0x03,0x00,0x00,0x00,

// V (86): w=14, h=14
0x2D,0x07,
0x01,0x03,0xFF,0xFF,0xFF,0xC1,0x00,0x80,0xC0,0x71,
0x1D,0x0F,0x03,0x01,
0x00,0x00,0x00,0x3F,0x3F,0x3F,0x1E,0x07,0x01,0x00,
0x00,0x00,0x00,0x00,

// W (87): w=19, h=14
0x32,0x0D,
0x01,0x1F,0xFF,0xFF,0xFD,0x01,0xC0,0x70,0x1E,0xFF,
0xFF,0xFF,0x00,0x80,0xE1,0x7D,0x0F,0x03,0x01,
0x00,0x00,0x3F,0x3F,0x3F,0x0F,0x03,0x00,0x00,0x00,
0x3F,0x3F,0x3E,0x0F,0x01,0x00,0x00,0x00,0x00,

// X (88): w=15, h=14
0x2E,0x01,
0x00,0x00,0x01,0x01,0x0F,0x3F,0xFF,0xF9,0xE0,0xB0,
0x1D,0x0F,0x07,0x01,0x01,
0x20,0x20,0x38,0x3C,0x2E,0x03,0x01,0x27,0x3F,0x3F,
0x3C,0x30,0x20,0x00,0x00,

// Y (89): w=14, h=14
0x2D,0x07,
0x01,0x01,0x0F,0x7F,0xFF,0xF9,0xC1,0xC0,0x70,0x39,
0x0F,0x07,0x01,0x01,
0x00,0x20,0x20,0x30,0x3F,0x3F,0x3F,0x20,0x00,0x00,
0x00,0x00,0x00,0x00,

// Z (90): w=12, h=14
0x2B,0x08,
0x00,0x00,0x0F,0x0F,0xC1,0xE1,0xF9,0xFD,0x3F,0x1F,
0x07,0x03,
0x30,0x38,0x3E,0x3F,0x2F,0x27,0x21,0x20,0x30,0x3C,
0x0C,0x00,

// bracketleft (91): w=9, h=16
0x28,0x2E,
0x00,0x00,0xFC,0xFF,0xFF,0x03,0x01,0x01,0x01,
0xE0,0xFF,0xFF,0xBF,0x80,0x80,0x00,0x00,0x00,

// backslash (92): w=10, h=16
0x29,0x07,
0x01,0x07,0x1E,0x78,0xE0,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x1E,0x78,0xE0,0x80,

// bracketright (93): w=9, h=16
0x28,0x23,
0x00,0x00,0x00,0x01,0x01,0xF9,0xFF,0xFF,0x07,
0x80,0x80,0x80,0xC0,0xFF,0xFF,0x3F,0x00,0x00,

// asciicircum (94): w=11, h=5
0x8A,0x01,0x89,
0x10,0x18,0x0C,0x06,0x03,0x01,0x03,0x06,0x0C,0x18,
0x10,

// underscore (95): w=10, h=2
0x89,0x11,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// quoteleft (96): w=5, h=6
0x04,0x54,
0x18,0x3E,0x3E,0x1B,0x01,

// a (97): w=13, h=9
0x2C,0xA8,
0xF8,0xFC,0xFE,0x87,0x83,0x81,0x81,0xF3,0xFF,0xFF,
0xBF,0x83,0x80,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x00,

// b (98): w=11, h=14
0x2A,0x09,
0x02,0xE2,0xFF,0xFF,0x7F,0x41,0x60,0xE0,0xE0,0xE0,
0x80,
0x18,0x3F,0x3F,0x23,0x20,0x20,0x30,0x18,0x1F,0x0F,
0x07,

// c (99): w=9, h=9
0x28,0xA9,
0x78,0xFC,0xFE,0xC7,0x83,0x81,0x83,0x87,0x47,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// d (100): w=12, h=14
0x2B,0x09,
0x00,0x80,0xC0,0xE0,0x60,0x20,0x20,0x22,0xF2,0xFF,
0xFF,0x07,
0x0F,0x3F,0x3F,0x30,0x30,0x10,0x10,0x3E,0x3F,0x3F,
0x31,0x10,

// e (101): w=9, h=9
0x28,0xA9,
0x78,0xFC,0xFE,0xD7,0x91,0x99,0x8F,0xCF,0x06,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// f (102): w=13, h=19
0xCC,0x00,0x12,
0x00,0x00,0x00,0x00,0x20,0xE0,0xFC,0xFE,0x3E,0x23,
0x23,0x07,0x06,
0x00,0x80,0x00,0x00,0xF0,0xFF,0x7F,0x07,0x00,0x00,
0x00,0x00,0x00,
0x03,0x07,0x07,0x02,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// g (103): w=12, h=14
0x2B,0xA7,
0x00,0x1C,0x3E,0xFF,0xE3,0xA1,0x31,0x3F,0x1F,0x0E,
0x02,0x02,
0x1C,0x3E,0x33,0x21,0x23,0x23,0x37,0x1F,0x1E,0x0E,
0x00,0x00,

// h (104): w=12, h=14
0x2B,0x09,
0x00,0x02,0xF2,0xFF,0xFF,0x4F,0x40,0x60,0xE0,0xE0,
0xC0,0x00,
0x20,0x3E,0x3F,0x3F,0x01,0x00,0x00,0x3E,0x3F,0x3F,
0x31,0x10,

// i (105): w=5, h=14
0x24,0x0F,
0x40,0xE0,0xEF,0xEF,0x07,
0x1C,0x3F,0x3F,0x31,0x10,

// j (106): w=10, h=19
0xC9,0x00,0x15,
0x00,0x00,0x00,0x00,0x40,0x40,0xE6,0xEF,0xEF,0x07,
0x00,0x00,0x00,0x00,0x80,0xFE,0xFF,0x7F,0x03,0x00,
0x06,0x06,0x06,0x04,0x03,0x03,0x01,0x00,0x00,0x00,

// k (107): w=12, h=14
0x2B,0x08,
0x00,0x02,0xFA,0xFF,0xFF,0x07,0x80,0x40,0x60,0xE0,
0x60,0x00,
0x20,0x3F,0x3F,0x1F,0x01,0x07,0x1F,0x3F,0x3C,0x30,
0x30,0x10,

// l (108): w=6, h=14
0x25,0x0E,
0x02,0xE2,0xFE,0xFF,0x7F,0x03,
0x1E,0x3F,0x3F,0x3F,0x10,0x10,

// m (109): w=18, h=9
0x31,0xAE,
0x82,0xFA,0xFF,0xFF,0x07,0x02,0x02,0xFF,0xFF,0xFF,
0x0E,0x06,0x02,0xF3,0xFF,0xFF,0x8E,0x80,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// n (110): w=12, h=9
0x2B,0xA9,
0x82,0xFA,0xFF,0xFF,0x07,0x06,0x02,0xF3,0xFF,0xFF,
0x8E,0x80,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x00,

// o (111): w=11, h=9
0x2A,0xA9,
0x78,0xFE,0xFE,0x87,0x03,0x01,0x81,0xC3,0xFF,0xFE,
0x3C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,

// p (112): w=13, h=14
0x2C,0xA3,
0x00,0x00,0xC2,0xFE,0xFF,0x3F,0x05,0x02,0x83,0xC7,
0xFF,0x7F,0x3C,
0x20,0x30,0x3F,0x3F,0x27,0x21,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,

// q (113): w=11, h=14
0x2A,0xA9,
0x78,0xFC,0xFE,0x87,0x83,0x81,0x81,0xF1,0xFF,0xFF,
0x07,
0x00,0x01,0x01,0x01,0x21,0x20,0x3F,0x3F,0x3F,0x23,
0x00,

// r (114): w=10, h=9
0x29,0xA8,
0x02,0xFA,0xFF,0xFF,0x0F,0x04,0x02,0x0F,0x0F,0x06,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// s (115): w=9, h=9
0x28,0xA9,
0xC0,0xCC,0xDE,0x1F,0x39,0xF9,0xF3,0xF7,0x66,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// t (116): w=7, h=12
0x26,0x4E,
0x88,0xF8,0xFE,0x7F,0x0B,0x08,0x08,
0x07,0x0F,0x0F,0x0C,0x04,0x04,0x00,

// u (117): w=13, h=9
0x2C,0xA8,
0x02,0xF2,0xFF,0xFF,0x9F,0x81,0x80,0xC0,0xFE,0xFF,
0xFF,0x07,0x80,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,
0x01,0x01,0x00,

// v (118): w=11, h=9
0x2A,0xA8,
0x02,0x02,0xFF,0xFF,0xFF,0x80,0xC0,0x60,0x3F,0x1F,
0x07,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,

// w (119): w=16, h=9
0x2F,0xA9,
0x02,0x02,0xFF,0xFF,0xFF,0x60,0x30,0x0C,0xFE,0xFF,
0xFF,0x80,0x60,0x3F,0x1F,0x07,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// x (120): w=12, h=9
0x2B,0xA2,
0xC0,0xE2,0xC2,0x43,0x2F,0x7F,0xFC,0xFC,0xC6,0x83,
0x87,0x07,
0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x00,

// y (121): w=12, h=14
0x2B,0xA1,
0x00,0x02,0x03,0x7F,0xFF,0xFE,0x80,0xE0,0x38,0x0F,
0x03,0x03,
0x18,0x38,0x30,0x10,0x19,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,

// z (122): w=10, h=9
0x29,0xA2,
0x00,0x9C,0xDA,0xE3,0xF7,0xBF,0x1E,0x66,0xE3,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// braceleft (123): w=8, h=16
0x27,0x2F,
0x80,0x80,0xC0,0x7E,0x7F,0x3F,0x03,0x01,
0x00,0x00,0x01,0x7F,0xFF,0xFE,0xC0,0x80,

// bar (124): w=2, h=19
0xC1,0x00,0x89,
0xFF,0xFF,
0xFF,0xFF,
0x07,0x07,

// braceright (125): w=8, h=16
0x27,0x2F,
0x01,0x01,0x3F,0x7F,0x7E,0xC0,0x80,0x80,
0x80,0xC0,0xFE,0xFF,0x7F,0x01,0x00,0x00,

// c0126 (126): w=11, h=2
0x8A,0x02,0x89,
0x02,0x02,0x01,0x01,0x01,0x03,0x02,0x02,0x02,0x01,
0x01

};
// 2222 bytes
// 2412 bytes with FAST_FONT_INDEX
