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

const char font_luBS19[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD5,0x00,
0xEF,0x00,
0x21,0x01,
0x4A,0x01,
0x8E,0x01,
0xC9,0x01,
0xD5,0x01,
0xF7,0x01,
0x19,0x02,
0x2F,0x02,
0x4F,0x02,
0x5C,0x02,
0x65,0x02,
0x6D,0x02,
0x9C,0x02,
0xCE,0x02,
0xE9,0x02,
0x15,0x03,
0x41,0x03,
0x73,0x03,
0x9C,0x03,
0xCE,0x03,
0xFA,0x03,
0x29,0x04,
0x5B,0x04,
0x67,0x04,
0x78,0x04,
0x98,0x04,
0xB9,0x04,
0xD9,0x04,
0x02,0x05,
0x40,0x05,
0x7B,0x05,
0xAA,0x05,
0xDF,0x05,
0x17,0x06,
0x40,0x06,
0x69,0x06,
0x9E,0x06,
0xD3,0x06,
0xE4,0x06,
0x07,0x07,
0x3C,0x07,
0x65,0x07,
0xA3,0x07,
0xD5,0x07,
0x13,0x08,
0x3F,0x08,
0x86,0x08,
0xBB,0x08,
0xE7,0x08,
0x22,0x09,
0x54,0x09,
0x8C,0x09,
0xD6,0x09,
0x0B,0x0A,
0x40,0x0A,
0x6C,0x0A,
0x80,0x0A,
0xAF,0x0A,
0xC6,0x0A,
0xE6,0x0A,
0xF4,0x0A,
0xFE,0x0A,
0x1C,0x0B,
0x4B,0x0B,
0x65,0x0B,
0x94,0x0B,
0xB2,0x0B,
0xD8,0x0B,
0x07,0x0C,
0x33,0x0C,
0x44,0x0C,
0x6F,0x0C,
0x9E,0x0C,
0xAF,0x0C,
0xDB,0x0C,
0xF9,0x0C,
0x1B,0x0D,
0x4A,0x0D,
0x79,0x0D,
0x8F,0x0D,
0xAB,0x0D,
0xC8,0x0D,
0xE6,0x0D,
0x08,0x0E,
0x34,0x0E,
0x52,0x0E,
0x84,0x0E,
0xA0,0x0E,
0xB7,0x0E,
0xC2,0x0E,
0xD9,0x0E,

// space (32): w=1, h=1
0x80,0x13,0x4D,
0x00,

// exclam (33): w=5, h=19
0x44,0x36,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x01,0x1F,0x1F,0x1F,0x01,
0x07,0x07,0x07,0x07,0x07,

// quotedbl (34): w=12, h=9
0x2B,0x0F,
0x1F,0xFF,0xFF,0xFF,0x1F,0x00,0x00,0x1F,0xFF,0xFF,
0xFF,0x1F,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x00,

// numbersign (35): w=16, h=19
0x4F,0x2F,
0x00,0x40,0x60,0x60,0x60,0xF0,0xFF,0x6F,0x61,0x60,
0xE0,0xFC,0x7F,0x63,0x60,0x60,
0x18,0x18,0x18,0xF8,0xFF,0x1F,0x18,0x18,0xD8,0xFC,
0x3F,0x1B,0x18,0x18,0x08,0x00,
0x00,0x00,0x07,0x07,0x00,0x00,0x00,0x04,0x07,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=13, h=23
0x4C,0x17,
0x00,0xF8,0xFC,0xFE,0xFE,0x8F,0xFF,0xFF,0x0E,0x0E,
0x0E,0x1E,0x00,
0x00,0x01,0x03,0x07,0x07,0xFF,0xFF,0x3F,0x3E,0xFC,
0xFC,0xF8,0xE0,
0x07,0x0F,0x0E,0x0E,0x0E,0xFF,0xFF,0xFE,0x0E,0x0F,
0x07,0x07,0x01,

// percent (37): w=22, h=19
0x55,0x2E,
0x78,0xFE,0xFF,0x87,0x87,0xCF,0xFF,0xFE,0x78,0x00,
0x00,0xC0,0xE0,0xF0,0x78,0x3E,0x1F,0x07,0x03,0x01,
0x00,0x00,
0x00,0x01,0x03,0x03,0x03,0xC3,0xE3,0xF1,0x7C,0x3E,
0x1F,0x07,0x03,0xF1,0xF8,0xFC,0x1C,0x1C,0x1C,0xFC,
0xF8,0xF0,
0x00,0x00,0x04,0x06,0x07,0x07,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x07,0x07,0x07,
0x03,0x01,

// ampersand (38): w=19, h=19
0x52,0x2F,
0x00,0x00,0x00,0x3C,0x7E,0xFE,0xFF,0xFF,0xE7,0xC7,
0xE7,0xFF,0x7E,0x7E,0x3C,0x00,0x00,0x00,0x00,
0x78,0xFC,0xFE,0xFF,0xFF,0xC7,0x03,0x0F,0x3F,0x7F,
0xFF,0xFE,0xF8,0xF0,0xF0,0xFF,0x7F,0x1F,0x07,
0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,
0x03,0x03,0x03,0x07,0x07,0x07,0x06,0x04,0x00,

// quotesingle (39): w=5, h=9
0x24,0x0F,
0x1F,0xFF,0xFF,0xFF,0x1F,
0x00,0x01,0x01,0x01,0x00,

// parenleft (40): w=8, h=25
0x67,0x0F,
0x00,0xC0,0xE0,0xF8,0xFC,0xFE,0x1E,0x0F,
0xFE,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x07,0x0F,0x3F,0x7F,0xFE,0xF0,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,

// parenright (41): w=8, h=25
0x67,0x0F,
0x0F,0x1E,0xFE,0xFC,0xF8,0xE0,0xC0,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFE,
0xE0,0xF0,0xFE,0x7F,0x3F,0x0F,0x07,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// asterisk (42): w=10, h=10
0x29,0x2F,
0x10,0x9C,0xD8,0xD9,0x4F,0xCF,0xD9,0xD8,0x9C,0x10,
0x00,0x00,0x01,0x03,0x00,0x00,0x03,0x01,0x00,0x00,

// plus (43): w=15, h=16
0x2E,0x90,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0xC0,
0xC0,0xC0,0xC0,0xC0,0xC0,
0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0xFF,0x01,
0x01,0x01,0x01,0x01,0x01,

// comma (44): w=5, h=9
0xA4,0x0F,0x67,
0x9F,0xDF,0xFF,0xFF,0x3F,
0x01,0x01,0x00,0x00,0x00,

// hyphen (45): w=6, h=3
0x85,0x0A,0x56,
0x07,0x07,0x07,0x07,0x07,0x07,

// period (46): w=5, h=5
0x84,0x0F,0x67,
0x1F,0x1F,0x1F,0x1F,0x1F,

// slash (47): w=15, h=24
0x4E,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,
0xFC,0x7F,0x1F,0x07,0x01,
0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0x7E,0x1F,0x07,
0x01,0x00,0x00,0x00,0x00,
0x80,0xE0,0xF8,0xFE,0x3F,0x0F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// zero (48): w=16, h=19
0x4F,0x2F,
0xC0,0xF0,0xFC,0xFE,0xFE,0x1F,0x07,0x07,0x07,0x07,
0x1F,0xFE,0xFE,0xFC,0xF0,0xC0,
0x1F,0x7F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
0xC0,0xFF,0xFF,0xFF,0x7F,0x1F,
0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,0x07,
0x07,0x03,0x03,0x01,0x00,0x00,

// one (49): w=8, h=19
0xC7,0x01,0x8B,
0x07,0x07,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x07,0x07,0x07,0x07,0x07,

// two (50): w=14, h=19
0x4D,0x36,
0x00,0x0E,0x07,0x07,0x07,0x07,0x07,0x07,0x8F,0xFF,
0xFE,0xFE,0xFC,0xF8,
0x80,0xC0,0xE0,0xE0,0xF0,0xF8,0x3C,0x1E,0x1F,0x0F,
0x07,0x03,0x01,0x00,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,

// three (51): w=14, h=19
0x4D,0x36,
0x0E,0x0E,0x07,0x07,0x07,0x07,0x07,0x8F,0xFF,0xFF,
0xFE,0xFE,0x78,0x00,
0x80,0x80,0x07,0x07,0x07,0x07,0x07,0x0F,0x9F,0xFF,
0xFE,0xFC,0xF8,0xF0,
0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x03,0x03,0x01,0x00,

// four (52): w=16, h=19
0x4F,0x2F,
0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0x3C,0x1E,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x3C,0x3E,0x3F,0x3F,0x3B,0x39,0x38,0x38,0x38,0xFF,
0xFF,0xFF,0xFF,0xFF,0x38,0x38,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,
0x07,0x07,0x07,0x07,0x00,0x00,

// five (53): w=13, h=19
0x4C,0x3C,
0xFF,0xFF,0xFF,0xC7,0xC7,0xC7,0xC7,0xC7,0x87,0x87,
0x07,0x07,0x07,
0x81,0x81,0x01,0x01,0x01,0x03,0x03,0x87,0xFF,0xFF,
0xFF,0xFE,0x7C,
0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x03,
0x03,0x01,0x00,

// six (54): w=16, h=19
0x4F,0x2F,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x8F,0x87,0x87,
0x87,0x87,0x07,0x0F,0x0E,0x00,
0x3F,0xFF,0xFF,0xFF,0xFF,0x87,0x03,0x03,0x03,0x03,
0x87,0xFF,0xFF,0xFF,0xFE,0x7C,
0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x03,0x03,0x01,0x00,

// seven (55): w=14, h=19
0x4D,0x3B,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0xC7,0xE7,0xF7,
0xFF,0x7F,0x1F,0x0F,
0x00,0x00,0xC0,0xF0,0xFC,0xFE,0xFF,0x1F,0x07,0x01,
0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// eight (56): w=15, h=19
0x4E,0x30,
0x00,0x78,0xFC,0xFE,0xFF,0xCF,0xC7,0x87,0x87,0x8F,
0xFF,0xFE,0xFE,0x3C,0x00,
0xF0,0xF8,0xFC,0xFF,0xFF,0x87,0x03,0x07,0x07,0x0F,
0x9F,0xFE,0xFE,0xFC,0xF0,
0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x03,0x03,0x01,0x00,

// nine (57): w=16, h=19
0x4F,0x2F,
0xF0,0xFC,0xFC,0xFE,0xFE,0x0F,0x07,0x07,0x07,0x07,
0x0F,0xFE,0xFE,0xFC,0xF8,0xE0,
0x01,0x83,0x87,0x07,0x0F,0x0F,0x0E,0x0E,0x8E,0xC6,
0xE7,0xFF,0xFF,0xFF,0x7F,0x1F,
0x00,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x03,0x03,0x01,0x00,0x00,0x00,

// colon (58): w=5, h=14
0x24,0xD6,
0x1F,0x1F,0x1F,0x1F,0x1F,
0x3E,0x3E,0x3E,0x3E,0x3E,

// semicolon (59): w=5, h=18
0x44,0xD6,
0x1F,0x1F,0x1F,0x1F,0x1F,
0x3E,0xBE,0xFE,0xFE,0x7E,
0x03,0x03,0x01,0x01,0x00,

// less (60): w=15, h=16
0x2E,0x90,
0x80,0x80,0x80,0xC0,0xC0,0xE0,0xE0,0x70,0x78,0x38,
0x3C,0x1C,0x1E,0x0E,0x0F,
0x00,0x01,0x01,0x03,0x03,0x07,0x07,0x0E,0x1E,0x1C,
0x3C,0x38,0x78,0x70,0xF0,

// equal (61): w=15, h=10
0xAE,0x08,0x57,
0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,
0x87,0x87,0x87,0x87,0x87,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,

// greater (62): w=15, h=16
0x2E,0x90,
0x0F,0x0E,0x1E,0x1C,0x3C,0x38,0x78,0x70,0xE0,0xE0,
0xC0,0xC0,0x80,0x80,0x00,
0xF0,0x70,0x78,0x38,0x3C,0x1C,0x1E,0x0E,0x07,0x07,
0x03,0x03,0x01,0x01,0x01,

// question (63): w=13, h=19
0x4C,0x2F,
0x0E,0x0F,0x07,0x07,0x07,0x07,0x07,0x8F,0xFF,0xFF,
0xFE,0x7E,0x3C,
0x00,0x00,0x00,0x10,0x1C,0x1E,0x1F,0x1F,0x07,0x01,
0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x07,0x07,0x07,0x07,0x00,0x00,
0x00,0x00,0x00,

// at (64): w=20, h=19
0x53,0x39,
0x00,0xC0,0xE0,0x78,0x18,0x0C,0x8E,0xC6,0xC7,0x63,
0x63,0x63,0xE3,0xE3,0x27,0x06,0x0E,0x3C,0xF8,0xE0,
0x3F,0xFF,0xC1,0x80,0x3C,0x7F,0x7F,0x71,0x30,0x18,
0x0C,0x3E,0x7F,0x63,0x60,0x60,0x30,0x1C,0x0F,0x07,
0x00,0x00,0x01,0x03,0x03,0x06,0x06,0x06,0x06,0x06,
0x06,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=19, h=19
0x52,0x2E,
0x00,0x00,0x00,0x00,0x80,0xF0,0xFC,0xFF,0x1F,0x7F,
0xFF,0xFF,0xFE,0xF0,0xC0,0x00,0x00,0x00,0x00,
0x00,0x80,0xF0,0xFC,0xFF,0x3F,0x3B,0x38,0x38,0x38,
0x3B,0x3F,0x7F,0xFF,0xFF,0xFE,0xF0,0xC0,0x00,
0x04,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x07,0x07,0x07,0x07,0x06,

// B (66): w=15, h=19
0x4E,0x34,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x8F,0xFF,
0xFF,0xFE,0x7E,0x3C,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x0F,0x8F,
0xFF,0xFC,0xFC,0xF8,0xF0,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x03,0x03,0x00,

// C (67): w=17, h=19
0x50,0x2F,
0xC0,0xF0,0xF8,0xFC,0xFE,0x7E,0x1E,0x0F,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x0F,0x0E,
0x1F,0x7F,0xFF,0xFF,0xFF,0xF0,0xC0,0x80,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x03,0x03,

// D (68): w=18, h=19
0x51,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x0F,0x1F,0x3F,0xFE,0xFE,0xFC,0xF8,0xC0,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0xE0,0xFF,0xFF,0xFF,0x7F,0x1F,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x03,0x03,0x01,0x01,0x00,0x00,

// E (69): w=13, h=19
0x4C,0x36,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x07,0x00,0x00,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,

// F (70): w=13, h=19
0x4C,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x00,
0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// G (71): w=17, h=19
0x50,0x30,
0xC0,0xF0,0xF8,0xFC,0xFE,0x7E,0x1E,0x0F,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x0F,0x0F,
0x1F,0x7F,0xFF,0xFF,0xFF,0xE0,0xC0,0x80,0x80,0x00,
0x00,0x00,0xFC,0xFC,0xFC,0xFC,0xFC,
0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x07,0x03,

// H (72): w=17, h=19
0x50,0x36,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,
0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x07,0x07,0x07,0x07,

// I (73): w=5, h=19
0x44,0x36,
0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x07,0x07,0x07,0x07,0x07,

// J (74): w=11, h=23
0x4A,0x2A,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,
0x38,0x70,0x70,0x70,0x70,0x78,0x7F,0x7F,0x3F,0x1F,
0x0F,

// K (75): w=17, h=19
0x50,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x80,0xC0,0xF0,0xF8,
0x7C,0x1F,0x0F,0x07,0x01,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x06,0x0F,0x3F,0x7F,0xFF,
0xFC,0xF8,0xF0,0xC0,0x80,0x00,0x00,
0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x01,
0x03,0x07,0x07,0x07,0x07,0x06,0x04,

// L (76): w=13, h=19
0x4C,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,

// M (77): w=20, h=19
0x53,0x36,
0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0xFC,0xE0,0x00,0x00,
0x00,0x00,0xE0,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x01,0x0F,0x7F,0xFF,0xFF,0xF8,
0xF8,0xFF,0x3F,0x07,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x03,0x03,0x03,
0x03,0x01,0x00,0x00,0x00,0x07,0x07,0x07,0x07,0x07,

// N (78): w=16, h=19
0x4F,0x36,
0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF8,0xE0,0xC0,0x80,
0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x01,0x03,0x0F,0x1F,0x3F,0xFF,
0xFE,0xFC,0xF8,0xFF,0xFF,0xFF,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x07,0x07,0x07,0x07,

// O (79): w=20, h=19
0x53,0x2F,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x07,0x07,
0x07,0x07,0x0F,0x1F,0x3E,0xFE,0xFC,0xF8,0xF0,0xC0,
0x1F,0x7F,0xFF,0xFF,0xFF,0xE0,0xC0,0x80,0x00,0x00,
0x00,0x00,0x80,0xC0,0xE0,0xFF,0xFF,0xFF,0x7F,0x1F,
0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x03,0x03,0x01,0x00,0x00,0x00,

// P (80): w=14, h=19
0x4D,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x8F,0xFF,
0xFF,0xFE,0xFE,0xFC,
0xFF,0xFF,0xFF,0xFF,0xFF,0x0E,0x0E,0x0F,0x0F,0x0F,
0x07,0x07,0x03,0x00,
0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// Q (81): w=23, h=23
0x56,0x2C,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x07,0x07,
0x07,0x07,0x0F,0x1F,0x3E,0xFE,0xFC,0xF8,0xF0,0xC0,
0x00,0x00,0x00,
0x1F,0x7F,0xFF,0xFF,0xFF,0xE0,0xC0,0x80,0x00,0x00,
0x00,0x00,0x80,0xC0,0xE0,0xFF,0xFF,0xFF,0x7F,0x1F,
0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,
0x07,0x07,0x0F,0x1F,0x1F,0x3F,0x39,0x38,0x78,0x78,
0x38,0x18,0x08,

// R (82): w=17, h=19
0x50,0x34,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x8F,0xFF,
0xFF,0xFE,0xFE,0x78,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x1F,0x7F,0xFF,
0xFF,0xFB,0xF1,0xC0,0x80,0x00,0x00,
0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x01,
0x07,0x07,0x07,0x07,0x07,0x07,0x04,

// S (83): w=14, h=19
0x4D,0x2E,
0x78,0xFC,0xFE,0xFE,0xFF,0xEF,0xC7,0x87,0x87,0x07,
0x07,0x0F,0x0F,0x00,
0x80,0x81,0x03,0x03,0x07,0x07,0x0F,0x0F,0x9F,0xFF,
0xFF,0xFE,0xFC,0xF8,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x03,0x03,0x01,0x00,

// T (84): w=19, h=19
0x52,0x28,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0xFF,0xFF,0xFF,
0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=16, h=19
0x4F,0x36,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0x7F,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
0xC0,0xFF,0xFF,0xFF,0xFF,0x7F,
0x00,0x01,0x01,0x03,0x03,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x03,0x03,0x01,0x00,

// V (86): w=18, h=19
0x51,0x29,
0x03,0x0F,0x7F,0xFF,0xFF,0xFE,0xF0,0xC0,0x00,0x00,
0x00,0x00,0x80,0xF0,0xFE,0x7F,0x0F,0x01,
0x00,0x00,0x00,0x03,0x1F,0xFF,0xFF,0xFF,0xFE,0xF0,
0xE0,0xFC,0xFF,0x1F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x07,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=24, h=19
0x57,0x28,
0x07,0x7F,0xFF,0xFF,0xFF,0xFC,0xC0,0x00,0x00,0xE0,
0xFE,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0xC0,
0xFC,0xFF,0x3F,0x03,
0x00,0x00,0x07,0x7F,0xFF,0xFF,0xFF,0xF8,0xFC,0xFF,
0x3F,0x03,0x01,0x3F,0xFF,0xFF,0xFE,0xE0,0xFE,0xFF,
0x3F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x07,0x07,0x07,
0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x07,0x07,0x03,
0x00,0x00,0x00,0x00,

// X (88): w=17, h=19
0x50,0x2E,
0x01,0x03,0x0F,0x3F,0x7F,0xFF,0xFE,0xF8,0xF0,0xC0,
0xF0,0xFC,0x3E,0x1F,0x07,0x03,0x01,
0x00,0x00,0x80,0xC0,0xF0,0xF9,0x7F,0x1F,0x3F,0xFF,
0xFF,0xFE,0xF8,0xE0,0x80,0x00,0x00,
0x04,0x06,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,
0x03,0x07,0x07,0x07,0x07,0x07,0x04,

// Y (89): w=17, h=19
0x50,0x2F,
0x01,0x07,0x1F,0x7F,0xFF,0xFF,0xFC,0xF0,0xC0,0x80,
0xC0,0xF0,0xFC,0x3F,0x0F,0x07,0x01,
0x00,0x00,0x00,0x00,0x01,0x03,0xFF,0xFF,0xFF,0xFF,
0xFF,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x07,
0x07,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=14, h=19
0x4D,0x36,
0x07,0x07,0x07,0x07,0x07,0x87,0xC7,0xF7,0xFF,0xFF,
0xFF,0x7F,0x3F,0x0F,
0x80,0xE0,0xF0,0xFC,0xFE,0xFF,0x7F,0x1F,0x0F,0x03,
0x01,0x00,0x00,0x00,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,

// bracketleft (91): w=6, h=24
0x45,0x16,
0xFF,0xFF,0xFF,0xFF,0x07,0x07,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xE0,0xE0,

// backslash (92): w=15, h=24
0x4E,0x08,
0x01,0x07,0x1F,0x7F,0xFC,0xF0,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x1F,0x7E,0xF8,0xE0,
0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,
0x3F,0xFE,0xF8,0xE0,0x80,

// bracketright (93): w=7, h=24
0x46,0x10,
0x07,0x07,0x07,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0xE0,0xE0,0xE0,0xFF,0xFF,0xFF,0xFF,

// asciicircum (94): w=15, h=16
0x2E,0x30,
0x00,0x00,0x00,0x00,0xC0,0xF0,0xFC,0x7F,0xFC,0xF0,
0xC0,0x00,0x00,0x00,0x00,
0x80,0xE0,0xF8,0x7F,0x1F,0x07,0x01,0x00,0x01,0x07,
0x1F,0x7F,0xF8,0xE0,0x80,

// underscore (95): w=11, h=3
0x8A,0x14,0x56,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,

// grave (96): w=7, h=3
0x86,0x00,0x8C,
0x01,0x01,0x03,0x07,0x07,0x06,0x04,

// a (97): w=14, h=14
0x2D,0xCF,
0x00,0x8E,0x86,0xC7,0xC7,0xC7,0xC7,0xCF,0xFF,0xFF,
0xFE,0xFE,0xFC,0x00,
0x0F,0x1F,0x3F,0x3F,0x3F,0x39,0x39,0x19,0x1F,0x3F,
0x3F,0x3F,0x3F,0x38,

// b (98): w=15, h=20
0x4E,0x15,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x80,0xC0,0xC0,0xC0,
0xC0,0xC0,0x80,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0x01,0x01,0x01,0x83,
0xFF,0xFF,0xFF,0xFF,0xFC,
0x0F,0x0F,0x0F,0x0F,0x07,0x07,0x0E,0x0E,0x0E,0x0F,
0x0F,0x07,0x07,0x03,0x00,

// c (99): w=12, h=14
0x2B,0xCF,
0xF0,0xF8,0xFC,0xFE,0xFF,0x1F,0x0F,0x07,0x07,0x07,
0x07,0x0E,
0x03,0x0F,0x1F,0x1F,0x3F,0x3E,0x3C,0x38,0x38,0x38,
0x38,0x3C,

// d (100): w=15, h=20
0x4E,0x10,
0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x80,
0xFF,0xFF,0xFF,0xFF,0xFF,
0xFC,0xFF,0xFF,0xFF,0xFF,0x07,0x01,0x01,0x01,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x03,0x07,0x0F,0x0F,0x0F,0x0E,0x0E,0x06,0x03,
0x0F,0x0F,0x0F,0x0F,0x0F,

// e (101): w=14, h=14
0x2D,0xCF,
0xF0,0xFC,0xFE,0xFE,0xFF,0xEF,0xE7,0xE7,0xEF,0xFF,
0xFF,0xFE,0xFC,0xF0,
0x03,0x07,0x0F,0x1F,0x1F,0x3E,0x3C,0x38,0x38,0x38,
0x38,0x38,0x38,0x1C,

// f (102): w=12, h=20
0x4B,0x08,
0xC0,0xC0,0xF8,0xFE,0xFE,0xFF,0xFF,0xC7,0xC7,0xC7,
0xC7,0x07,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,
0x01,0x00,
0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,

// g (103): w=15, h=19
0x4E,0xD0,
0xF0,0xFC,0xFE,0xFE,0xFF,0x1F,0x07,0x07,0x07,0x0E,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x0F,0x9F,0x3F,0x3F,0x3C,0x38,0x18,0x18,0x84,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x02,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x03,0x03,0x01,0x00,

// h (104): w=14, h=20
0x4D,0x16,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x80,0xC0,0xC0,0xC0,
0xC0,0xC0,0x80,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x03,0x03,0x03,0xFF,
0xFF,0xFF,0xFF,0xFF,
0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x0F,
0x0F,0x0F,0x0F,0x0F,

// i (105): w=5, h=20
0x44,0x16,
0xC7,0xC7,0xC7,0xC7,0xC7,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x0F,0x0F,0x0F,0x0F,0x0F,

// j (106): w=10, h=25
0xE9,0x00,0x26,
0x00,0x00,0x00,0x00,0x00,0xC7,0xC7,0xC7,0xC7,0xC7,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0xE0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0x3F,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// k (107): w=15, h=20
0x4E,0x15,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xC0,
0xC0,0xC0,0x40,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x10,0x78,0xFE,0xFF,0xFF,
0xE3,0xC1,0x00,0x00,0x00,
0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x01,0x07,0x0F,
0x0F,0x0F,0x0F,0x0E,0x08,

// l (108): w=5, h=20
0x44,0x16,
0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x0F,0x0F,0x0F,0x0F,0x0F,

// m (109): w=21, h=14
0x34,0xDC,
0xFF,0xFF,0xFF,0xFF,0xFD,0x1E,0x0F,0x0F,0xFF,0xFF,
0xFF,0xFE,0xFC,0x1C,0x0E,0x0F,0xFF,0xFF,0xFF,0xFF,
0xFE,
0x3F,0x3F,0x3F,0x3F,0x3F,0x00,0x00,0x00,0x3F,0x3F,
0x3F,0x3F,0x3F,0x00,0x00,0x00,0x3F,0x3F,0x3F,0x3F,
0x3F,

// n (110): w=14, h=14
0x2D,0xD6,
0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x0E,0x0F,0x0F,0xFF,
0xFF,0xFF,0xFE,0xFC,
0x3F,0x3F,0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x3F,
0x3F,0x3F,0x3F,0x3F,

// o (111): w=16, h=14
0x2F,0xCF,
0xF0,0xFC,0xFC,0xFE,0xFE,0x1F,0x07,0x07,0x07,0x07,
0x1F,0xFE,0xFE,0xFC,0xFC,0xF0,
0x03,0x0F,0x0F,0x1F,0x1F,0x3E,0x38,0x38,0x38,0x38,
0x3E,0x1F,0x1F,0x0F,0x0F,0x03,

// p (112): w=15, h=19
0x4E,0xD5,
0xFF,0xFF,0xFF,0xFF,0xFF,0x0C,0x06,0x07,0x07,0x0F,
0xFF,0xFF,0xFE,0xFC,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x18,0x38,0x38,0x3E,
0x3F,0x3F,0x1F,0x0F,0x03,
0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// q (113): w=15, h=19
0x4E,0xD0,
0xF0,0xFC,0xFE,0xFE,0xFF,0x1F,0x07,0x07,0x07,0x0E,
0xFE,0xFF,0xFF,0xFF,0xFF,
0x03,0x0F,0x1F,0x3F,0x3F,0x3C,0x38,0x38,0x18,0x0C,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x07,0x07,0x07,0x07,

// r (114): w=10, h=14
0x29,0xD5,
0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x0E,0x0F,0x0F,0x0F,
0x3F,0x3F,0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,

// s (115): w=13, h=14
0x2C,0xD5,
0x3C,0x7E,0x7E,0xFF,0xFF,0xE7,0xE7,0xE7,0xC7,0xC7,
0x8F,0x8E,0x00,
0x1C,0x3C,0x38,0x38,0x38,0x39,0x39,0x3B,0x3F,0x3F,
0x1F,0x1F,0x07,

// t (116): w=9, h=18
0x48,0x4F,
0x70,0xFE,0xFE,0xFF,0xFF,0xFF,0x70,0x70,0x70,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,
0x00,0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,

// u (117): w=14, h=14
0x2D,0xD6,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,
0xFF,0xFF,0xFF,0xFF,
0x0F,0x1F,0x3F,0x3F,0x3F,0x38,0x38,0x18,0x0C,0x3F,
0x3F,0x3F,0x3F,0x3F,

// v (118): w=16, h=14
0x2F,0xCE,
0x01,0x0F,0x3F,0xFF,0xFF,0xFF,0xF8,0xE0,0x00,0x00,
0xC0,0xF8,0xFF,0x3F,0x0F,0x01,
0x00,0x00,0x00,0x01,0x07,0x3F,0x3F,0x3F,0x3F,0x3F,
0x3F,0x07,0x01,0x00,0x00,0x00,

// w (119): w=21, h=14
0x34,0xCF,
0x03,0x3F,0xFF,0xFF,0xFE,0xE0,0x00,0xE0,0xFC,0xFF,
0x3F,0xFF,0xFF,0xFE,0xE0,0x00,0xE0,0xFC,0xFF,0x1F,
0x03,
0x00,0x00,0x03,0x3F,0x3F,0x3F,0x3E,0x3F,0x1F,0x01,
0x00,0x01,0x3F,0x3F,0x3F,0x3E,0x3F,0x1F,0x01,0x00,
0x00,

// x (120): w=14, h=14
0x2D,0xCE,
0x01,0x03,0x0F,0x3F,0xFF,0xFF,0xFE,0xF8,0xF8,0xFE,
0x1F,0x0F,0x03,0x01,
0x20,0x30,0x3C,0x3E,0x1F,0x07,0x07,0x0F,0x3F,0x3F,
0x3F,0x3C,0x38,0x20,

// y (121): w=16, h=19
0x4F,0xC9,
0x01,0x0F,0x3F,0xFF,0xFF,0xFF,0xF8,0xE0,0x00,0xC0,
0xF0,0xFC,0x7F,0x1F,0x07,0x01,
0x00,0x00,0x00,0x01,0x87,0xFF,0xFF,0xFF,0x7F,0x1F,
0x07,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x04,0x06,0x07,0x07,0x07,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=13, h=14
0x2C,0xD5,
0x07,0x07,0x07,0x87,0xE7,0xF7,0xFF,0xFF,0xFF,0x7F,
0x3F,0x1F,0x0F,
0x3C,0x3E,0x3F,0x3F,0x3F,0x3F,0x3F,0x3B,0x38,0x38,
0x38,0x38,0x38,

// braceleft (123): w=7, h=24
0x46,0x15,
0x00,0xFC,0xFE,0xFF,0xFF,0xFF,0x07,
0x38,0xFF,0xFF,0xFF,0xE7,0xC3,0x00,
0x00,0x3F,0x7F,0xFF,0xFF,0xFF,0xE0,

// bar (124): w=3, h=24
0x42,0x16,
0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,

// braceright (125): w=7, h=24
0x46,0x10,
0x07,0xFF,0xFF,0xFF,0xFE,0xFC,0x00,
0x00,0xC3,0xE7,0xFF,0xFF,0xFF,0x38,
0xE0,0xFF,0xFF,0xFF,0x7F,0x3F,0x00,

// asciitilde (126): w=15, h=7
0x8E,0x09,0x57,
0x78,0x7E,0x7F,0x0F,0x07,0x0F,0x1E,0x1C,0x3C,0x78,
0x70,0x78,0x7F,0x3F,0x0F

};
// 3629 bytes
// 3819 bytes with FAST_FONT_INDEX