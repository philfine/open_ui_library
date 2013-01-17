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

const char font_12x24[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD0,0x00,
0xDA,0x00,
0xFD,0x00,
0x20,0x01,
0x43,0x01,
0x66,0x01,
0x6C,0x01,
0x81,0x01,
0x96,0x01,
0xAC,0x01,
0xC2,0x01,
0xC8,0x01,
0xD6,0x01,
0xDC,0x01,
0xFF,0x01,
0x22,0x02,
0x3F,0x02,
0x62,0x02,
0x85,0x02,
0xA8,0x02,
0xC8,0x02,
0xEB,0x02,
0x0E,0x03,
0x31,0x03,
0x54,0x03,
0x5D,0x03,
0x66,0x03,
0x86,0x03,
0x93,0x03,
0xB3,0x03,
0xD3,0x03,
0xF6,0x03,
0x1C,0x04,
0x3F,0x04,
0x5F,0x04,
0x82,0x04,
0xA5,0x04,
0xC8,0x04,
0xEB,0x04,
0x0E,0x05,
0x23,0x05,
0x46,0x05,
0x69,0x05,
0x8C,0x05,
0xB2,0x05,
0xD5,0x05,
0xF8,0x05,
0x1B,0x06,
0x3E,0x06,
0x61,0x06,
0x84,0x06,
0xA4,0x06,
0xC7,0x06,
0xEA,0x06,
0x0D,0x07,
0x30,0x07,
0x53,0x07,
0x76,0x07,
0x8B,0x07,
0xAE,0x07,
0xC3,0x07,
0xD0,0x07,
0xDE,0x07,
0xE7,0x07,
0xFF,0x07,
0x22,0x08,
0x38,0x08,
0x5B,0x08,
0x73,0x08,
0x96,0x08,
0xB9,0x08,
0xDC,0x08,
0xF1,0x08,
0x0C,0x09,
0x2F,0x09,
0x44,0x09,
0x5E,0x09,
0x76,0x09,
0x8E,0x09,
0xA6,0x09,
0xBE,0x09,
0xD6,0x09,
0xEE,0x09,
0x11,0x0A,
0x29,0x0A,
0x41,0x0A,
0x59,0x0A,
0x71,0x0A,
0x89,0x0A,
0xA1,0x0A,
0xB3,0x0A,
0xBC,0x0A,
0xCE,0x0A,

// C040 (32): w=1, h=1
0x80,0x16,0xF5,
0x00,

// ! (33): w=3, h=19
0xC2,0x01,0x8A,
0xFF,0xFF,0xFF,
0x01,0x3F,0x01,
0x07,0x07,0x07,

// " (34): w=8, h=5
0x07,0x11,
0x31,0x0F,0x07,0x00,0x00,0x31,0x0F,0x07,

// # (35): w=11, h=22
0x4A,0x09,
0x00,0xC0,0xC0,0xC0,0xFF,0xC0,0xC0,0xC0,0xFF,0xC0,
0xC0,
0xC0,0xC0,0xC0,0xFF,0xC0,0xC0,0xC0,0xFF,0xC0,0xC0,
0x00,
0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,
0x00,

// $ (36): w=11, h=22
0x4A,0x09,
0xF0,0xF8,0x08,0x04,0x04,0xFF,0x04,0x04,0x08,0x38,
0x30,
0x01,0x03,0x03,0x06,0x06,0xFF,0x0C,0x0C,0x18,0xF8,
0xF0,
0x03,0x07,0x04,0x08,0x08,0x3F,0x08,0x08,0x04,0x07,
0x03,

// % (37): w=11, h=22
0x4A,0x09,
0x3E,0x7F,0x41,0x41,0x7F,0x3E,0x00,0xC0,0x30,0x0C,
0x03,
0x00,0x00,0x00,0xC0,0x30,0x0C,0x83,0x80,0x80,0x80,
0x00,
0x30,0x0C,0x03,0x00,0x00,0x1F,0x3F,0x20,0x20,0x3F,
0x1F,

// & (38): w=11, h=19
0x4A,0x29,
0x00,0x7C,0xFE,0x81,0x01,0xC1,0x61,0x3E,0x1C,0x00,
0x00,
0xF0,0xF8,0x04,0x03,0x07,0x1C,0x30,0xE0,0x80,0xD0,
0x70,
0x01,0x03,0x06,0x04,0x04,0x04,0x04,0x06,0x03,0x06,
0x04,

// ' (39): w=3, h=5
0x82,0x00,0x7B,
0x31,0x0F,0x07,

// ( (40): w=6, h=23
0xC5,0x00,0x87,
0x00,0xE0,0x78,0x0E,0x03,0x00,
0x3F,0xFF,0x80,0x00,0x00,0x00,
0x00,0x01,0x07,0x1C,0x30,0xC0,

// ) (41): w=6, h=23
0xC5,0x00,0x5A,
0x00,0x03,0x0E,0x78,0xE0,0x00,
0x00,0x00,0x00,0x80,0xFF,0x3F,
0xC0,0x30,0x1C,0x07,0x01,0x00,

// * (42): w=10, h=12
0x29,0xAA,
0x0C,0x0C,0x98,0x90,0xFF,0xFF,0x90,0x98,0x0C,0x0C,
0x03,0x03,0x01,0x00,0x0F,0x0F,0x00,0x01,0x03,0x03,

// + (43): w=10, h=14
0x29,0x8F,
0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,
0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x00,

// , (44): w=3, h=6
0x82,0x11,0x7B,
0x23,0x1F,0x0F,

// - (45): w=11, h=2
0x8A,0x0A,0x46,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,

// . (46): w=3, h=3
0x82,0x11,0x7B,
0x07,0x07,0x07,

// / (47): w=11, h=22
0x4A,0x09,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x38,0x0E,
0x03,
0x00,0x00,0x80,0xE0,0x38,0x0E,0x03,0x00,0x00,0x00,
0x00,
0x38,0x0E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// 0 (48): w=11, h=20
0x4A,0x29,
0xC0,0xF0,0x1C,0x06,0x03,0x01,0x03,0x06,0x1C,0xF0,
0xC0,
0x3F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,
0x3F,
0x00,0x00,0x03,0x06,0x0C,0x08,0x0C,0x06,0x03,0x00,
0x00,

// 1 (49): w=9, h=20
0x48,0x30,
0x08,0x08,0x0C,0x0E,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x08,0x08,0x08,0x0F,0x0F,0x08,0x08,0x08,

// 2 (50): w=11, h=20
0x4A,0x29,
0x10,0x0C,0x06,0x02,0x01,0x01,0x01,0x02,0x86,0xFC,
0x78,
0x00,0x00,0x80,0x40,0x20,0x10,0x0C,0x06,0x03,0x01,
0x80,
0x0C,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0E,
0x0F,

// 3 (51): w=11, h=20
0x4A,0x29,
0x04,0x02,0x03,0x01,0x01,0x01,0x03,0x86,0x7E,0x38,
0x00,
0x00,0x00,0x02,0x03,0x03,0x03,0x03,0x06,0x0E,0xFC,
0xF8,
0x08,0x08,0x08,0x08,0x08,0x04,0x04,0x06,0x03,0x01,
0x00,

// 4 (52): w=11, h=20
0x4A,0x29,
0x00,0x00,0x00,0x00,0xC0,0x30,0x0C,0xFF,0xFF,0x00,
0x00,
0x40,0x70,0x4C,0x43,0x40,0x40,0x40,0xFF,0xFF,0x40,
0x40,
0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x0F,0x0F,0x08,
0x08,

// 5 (53): w=10, h=20
0x49,0x2F,
0xFF,0x03,0x83,0x83,0x83,0x83,0x83,0x03,0x03,0x01,
0x07,0x03,0x01,0x00,0x00,0x00,0x01,0x03,0xFE,0xFC,
0x08,0x08,0x08,0x08,0x08,0x04,0x04,0x07,0x03,0x00,

// 6 (54): w=11, h=20
0x4A,0x29,
0xC0,0xF0,0x38,0x0C,0x02,0x02,0x01,0x01,0x01,0x00,
0x00,
0xFF,0xFF,0x02,0x02,0x01,0x01,0x01,0x01,0x02,0xFE,
0xFC,
0x00,0x03,0x07,0x04,0x08,0x08,0x08,0x04,0x07,0x03,
0x00,

// 7 (55): w=11, h=20
0x4A,0x29,
0x1F,0x07,0x03,0x03,0x03,0x03,0x03,0xC3,0x33,0x0B,
0x07,
0x00,0x00,0x00,0x00,0xE0,0xFC,0x0F,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,
0x00,

// 8 (56): w=11, h=20
0x4A,0x29,
0x00,0x78,0xFE,0x82,0x01,0x01,0x01,0x02,0xFE,0x78,
0x00,
0xE0,0xF0,0x09,0x07,0x07,0x06,0x0E,0x0D,0x18,0xF8,
0xE0,
0x01,0x07,0x04,0x08,0x08,0x08,0x08,0x08,0x04,0x07,
0x01,

// 9 (57): w=11, h=20
0x4A,0x29,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x02,0x0E,0xFC,
0xF0,
0x01,0x07,0x04,0x08,0x08,0x08,0x08,0x04,0xC4,0xFF,
0x3F,
0x00,0x00,0x08,0x08,0x08,0x04,0x04,0x03,0x01,0x00,
0x00,

// : (58): w=3, h=13
0xA2,0x07,0x8A,
0x07,0x07,0x07,
0x1C,0x1C,0x1C,

// ; (59): w=3, h=16
0xA2,0x07,0x8A,
0x07,0x07,0x07,
0x8C,0x7C,0x3C,

// < (60): w=10, h=20
0x49,0x2F,
0x00,0x00,0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,
0x06,0x0F,0x19,0x30,0x60,0xC0,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x06,0x0C,

// = (61): w=11, h=8
0x0A,0xE9,
0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,
0xC3,

// > (62): w=10, h=20
0x49,0x2F,
0x03,0x06,0x0C,0x18,0x30,0x60,0xC0,0x80,0x00,0x00,
0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x19,0x0F,0x06,
0x0C,0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// ? (63): w=10, h=19
0x49,0x2F,
0x1C,0x3E,0x32,0x01,0x01,0x01,0x01,0xC2,0xFE,0x7C,
0x00,0x00,0x00,0x00,0x38,0x06,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// @ (64): w=11, h=20
0x4A,0x29,
0xF0,0x1C,0x86,0xC1,0x21,0x61,0xC1,0xE1,0x06,0x1C,
0xF0,
0xFF,0x80,0x3F,0x7F,0x40,0x60,0x3F,0x7F,0x40,0x60,
0x3F,
0x00,0x03,0x06,0x08,0x08,0x08,0x08,0x08,0x04,0x04,
0x02,

// A (65): w=12, h=19
0x4B,0x28,
0x00,0x00,0x00,0x80,0x78,0x07,0x3F,0xF8,0xC0,0x00,
0x00,0x00,
0x00,0xC0,0x3C,0x13,0x10,0x10,0x10,0x13,0x3F,0xFC,
0xC0,0x00,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x04,0x07,
0x07,0x04,

// B (66): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x02,0xFE,0x7C,
0x00,
0x00,0xFF,0xFF,0x02,0x02,0x02,0x02,0x05,0x0C,0xF8,
0xF0,
0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x02,0x03,0x01,
0x00,

// C (67): w=10, h=19
0x49,0x2F,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x02,0x06,0x0F,
0x7F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0x00,0x01,0x03,0x02,0x04,0x04,0x04,0x02,0x02,0x01,

// D (68): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x02,0x06,0x1C,0xF8,
0xE0,
0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,
0x3F,
0x04,0x07,0x07,0x04,0x04,0x04,0x02,0x03,0x01,0x00,
0x00,

// E (69): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0xC1,0x03,0x07,
0x08,
0x00,0xFF,0xFF,0x02,0x02,0x02,0x07,0x1F,0x00,0x00,
0x80,
0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x06,0x07,
0x00,

// F (70): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0xC1,0x03,0x07,
0x08,
0x00,0xFF,0xFF,0x02,0x02,0x02,0x07,0x1F,0x00,0x00,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// G (71): w=11, h=19
0x4A,0x29,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x02,0x06,0x0F,
0x00,
0x7F,0xFF,0x80,0x00,0x00,0x00,0x04,0x04,0xFC,0xFC,
0x04,
0x00,0x01,0x03,0x02,0x04,0x04,0x04,0x02,0x03,0x07,
0x00,

// H (72): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x00,0x00,0x00,0x01,0xFF,0xFF,
0x01,
0x00,0xFF,0xFF,0x02,0x02,0x02,0x02,0x02,0xFF,0xFF,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x04,0x07,0x07,
0x04,

// I (73): w=6, h=19
0xC5,0x01,0x69,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x04,0x04,

// J (74): w=11, h=19
0x4A,0x29,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0x01,
0x01,
0xC0,0xE0,0x60,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
0x00,
0x01,0x03,0x02,0x04,0x04,0x04,0x02,0x03,0x01,0x00,
0x00,

// K (75): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x00,0x80,0x60,0x11,0x0D,0x03,
0x01,
0x00,0xFF,0xFF,0x06,0x07,0x1E,0x78,0xE0,0x80,0x00,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x05,0x07,0x06,
0x04,

// L (76): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,
0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,
0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x06,0x07,
0x00,

// M (77): w=12, h=19
0x4B,0x28,
0x01,0xFF,0x3F,0xF8,0xC0,0x00,0x00,0xE0,0x1C,0xFF,
0xFF,0x01,
0x00,0xFF,0x00,0x01,0x0F,0x3E,0x0F,0x01,0x00,0xFF,
0xFF,0x00,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x04,0x07,
0x07,0x04,

// N (78): w=11, h=19
0x4A,0x29,
0x01,0xFF,0x1F,0x7C,0xE0,0x80,0x00,0x00,0x01,0xFF,
0x01,
0x00,0xFF,0x00,0x00,0x01,0x07,0x3E,0xF8,0xC0,0xFF,
0x00,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x03,0x07,
0x00,

// O (79): w=11, h=19
0x4A,0x29,
0xF8,0xFE,0x02,0x01,0x01,0x01,0x01,0x01,0x02,0xFE,
0xF8,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x04,0x02,0x03,
0x00,

// P (80): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x02,0x06,0xFC,
0xF8,
0x00,0xFF,0xFF,0x04,0x04,0x04,0x04,0x02,0x03,0x01,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// Q (81): w=11, h=22
0x4A,0x29,
0xF8,0xFE,0x02,0x01,0x01,0x01,0x01,0x02,0xFE,0xF8,
0x00,
0xFF,0xFF,0x00,0x80,0x40,0x40,0x80,0x00,0xFF,0xFF,
0x00,
0x00,0x03,0x03,0x04,0x04,0x04,0x0F,0x1A,0x33,0x30,
0x18,

// R (82): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x02,0xFE,0x78,
0x00,
0x00,0xFF,0xFF,0x02,0x02,0x02,0x06,0xF9,0xF1,0x00,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x03,0x07,0x04,
0x03,

// S (83): w=11, h=19
0x4A,0x29,
0x7C,0xFE,0xC2,0x81,0x01,0x01,0x01,0x02,0x06,0x0F,
0x00,
0x80,0x00,0x01,0x01,0x03,0x03,0x03,0x06,0x0E,0xFC,
0xF8,
0x07,0x03,0x02,0x04,0x04,0x04,0x04,0x02,0x03,0x01,
0x00,

// T (84): w=10, h=19
0x49,0x2A,
0x1F,0x03,0x01,0x01,0xFF,0xFF,0x01,0x01,0x03,0x1F,
0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x04,0x07,0x07,0x04,0x00,0x00,0x00,

// U (85): w=11, h=19
0x4A,0x29,
0x01,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x01,0xFF,
0x01,
0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0x00,
0x00,0x01,0x03,0x06,0x04,0x04,0x04,0x04,0x02,0x01,
0x00,

// V (86): w=11, h=19
0x4A,0x29,
0x01,0x1F,0xFF,0xE1,0x00,0x00,0x00,0x00,0xE1,0x1F,
0x01,
0x00,0x00,0x01,0x1F,0xFE,0xC0,0xF0,0x1E,0x01,0x00,
0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,
0x00,

// W (87): w=11, h=19
0x4A,0x29,
0xFF,0xFF,0x01,0x00,0x00,0xC0,0xC0,0x00,0x00,0x01,
0xFF,
0x1F,0xFF,0xE0,0x80,0x78,0x0F,0x7F,0xF8,0x00,0xE0,
0x1F,
0x00,0x01,0x07,0x07,0x00,0x00,0x00,0x07,0x07,0x01,
0x00,

// X (88): w=11, h=19
0x4A,0x29,
0x01,0x07,0x1F,0x79,0xE0,0x00,0x80,0x60,0x19,0x07,
0x01,
0x00,0x00,0xC0,0x30,0x0D,0x07,0x3D,0xF0,0xC0,0x00,
0x00,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x04,0x07,0x07,
0x04,

// Y (89): w=11, h=19
0x4A,0x29,
0x01,0x07,0x3F,0xF9,0xC0,0x00,0x00,0xC0,0x39,0x07,
0x01,
0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0x01,0x00,0x00,
0x00,
0x00,0x00,0x00,0x04,0x04,0x07,0x07,0x04,0x04,0x00,
0x00,

// Z (90): w=11, h=19
0x4A,0x29,
0x08,0x07,0x01,0x01,0x01,0x81,0xE1,0x79,0x1F,0x07,
0x01,
0x00,0x00,0xC0,0xF0,0x3C,0x0F,0x03,0x00,0x00,0x00,
0x80,
0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x06,0x07,
0x00,

// [ (91): w=6, h=23
0xC5,0x00,0x87,
0xFE,0xFE,0x03,0x01,0x01,0x00,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x1F,0x1F,0x30,0x20,0xE0,0xC0,

// \ (92): w=11, h=22
0x4A,0x09,
0x03,0x0E,0x38,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0x03,0x0E,0x38,0xE0,0x80,0x00,
0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0E,
0x38,

// ] (93): w=6, h=23
0xC5,0x00,0x5A,
0x01,0x01,0x03,0x03,0xFE,0xFE,
0x00,0x00,0x00,0x00,0xFF,0xFF,
0xE0,0xE0,0x30,0x30,0x1F,0x1F,

// ^ (94): w=11, h=5
0x0A,0x09,
0x30,0x38,0x0C,0x06,0x07,0x03,0x07,0x06,0x0C,0x38,
0x30,

// _ (95): w=11, h=2
0x8A,0x15,0x46,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,

// ` (96): w=7, h=4
0x06,0x17,
0x01,0x03,0x03,0x07,0x06,0x1C,0x18,

// a (97): w=11, h=13
0x2A,0xE9,
0x80,0xC6,0x42,0x23,0x21,0x21,0x22,0xFE,0xFC,0x00,
0x00,
0x07,0x0F,0x18,0x10,0x10,0x10,0x08,0x0F,0x1F,0x10,
0x0C,

// b (98): w=11, h=19
0x4A,0x29,
0x02,0xFF,0xFF,0x80,0x40,0x40,0x40,0x80,0x80,0x00,
0x00,
0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x83,0xFF,
0x7C,
0x00,0x07,0x03,0x02,0x04,0x04,0x04,0x02,0x03,0x01,
0x00,

// c (99): w=10, h=13
0x29,0xEA,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x02,0x0E,0x0C,
0x01,0x07,0x0E,0x08,0x10,0x10,0x10,0x08,0x08,0x04,

// d (100): w=11, h=19
0x4A,0x29,
0x00,0x00,0x80,0x80,0x40,0x40,0x42,0x82,0xFF,0xFF,
0x00,
0x7C,0xFF,0x83,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x00,
0x00,0x01,0x03,0x02,0x04,0x04,0x04,0x02,0x07,0x07,
0x04,

// e (101): w=11, h=13
0x2A,0xE9,
0xF0,0xFC,0x2E,0x22,0x21,0x21,0x21,0x22,0x2E,0x3C,
0x38,
0x01,0x07,0x0E,0x08,0x10,0x10,0x10,0x10,0x08,0x08,
0x04,

// f (102): w=11, h=19
0x4A,0x29,
0x40,0x40,0x40,0x40,0xF8,0xFE,0x42,0x41,0x41,0x47,
0x06,
0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,
0x00,0x00,0x04,0x04,0x07,0x07,0x04,0x04,0x00,0x00,
0x00,

// g (103): w=11, h=17
0x4A,0xC9,
0x00,0x38,0x7C,0x44,0x82,0x82,0x82,0x44,0x7E,0x3B,
0x03,
0x60,0xF0,0x8A,0x07,0x04,0x0C,0x0C,0x0C,0x98,0xF8,
0x70,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,

// h (104): w=11, h=19
0x4A,0x29,
0x02,0xFF,0xFF,0x80,0x40,0x40,0x40,0xC0,0x80,0x00,
0x00,
0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x04,0x07,0x07,
0x04,

// i (105): w=6, h=19
0xC5,0x01,0x69,
0x40,0x47,0xC7,0xC7,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x04,0x04,

// j (106): w=8, h=22
0xC7,0x01,0x49,
0x00,0x00,0x00,0x00,0x40,0x47,0xC7,0xC7,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x18,0x38,0x20,0x20,0x20,0x30,0x1F,0x0F,

// k (107): w=11, h=19
0x4A,0x29,
0x02,0xFF,0xFF,0x00,0x00,0x00,0x00,0x40,0xC0,0x40,
0x40,
0x00,0xFF,0xFF,0x10,0x38,0x64,0xC2,0x81,0x00,0x00,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x05,0x07,0x06,
0x04,

// l (108): w=6, h=19
0xC5,0x01,0x69,
0x02,0x02,0xFF,0xFF,0x00,0x00,
0x00,0x00,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x04,0x04,

// m (109): w=12, h=13
0x2B,0xE8,
0x02,0xFF,0xFF,0x02,0x01,0xFF,0xFE,0x01,0x01,0xFF,
0xFE,0x00,
0x10,0x1F,0x1F,0x00,0x10,0x1F,0x1F,0x10,0x00,0x1F,
0x1F,0x10,

// n (110): w=11, h=13
0x2A,0xE9,
0x02,0xFF,0xFF,0x02,0x02,0x01,0x01,0x02,0xFE,0xFC,
0x00,
0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x10,0x1F,0x1F,
0x10,

// o (111): w=11, h=13
0x2A,0xE9,
0xF0,0xFC,0x06,0x02,0x01,0x01,0x01,0x02,0x06,0xFC,
0xF0,
0x01,0x07,0x0C,0x08,0x10,0x10,0x10,0x08,0x0C,0x07,
0x01,

// p (112): w=11, h=16
0x2A,0xE9,
0x02,0xFF,0xFF,0x02,0x01,0x01,0x01,0x02,0x06,0xFC,
0xF8,
0x80,0xFF,0xFF,0x82,0x04,0x04,0x04,0x02,0x03,0x01,
0x00,

// q (113): w=11, h=16
0x2A,0xE9,
0xF8,0xFC,0x06,0x02,0x01,0x01,0x01,0x02,0xFE,0xFF,
0x00,
0x00,0x01,0x03,0x02,0x04,0x04,0x04,0x82,0xFF,0xFF,
0x80,

// r (114): w=11, h=13
0x2A,0xE9,
0x02,0x02,0xFF,0xFF,0x08,0x04,0x06,0x03,0x03,0x07,
0x06,
0x10,0x10,0x1F,0x1F,0x10,0x10,0x00,0x00,0x00,0x00,
0x00,

// s (115): w=11, h=13
0x2A,0xE9,
0x1C,0x3E,0x32,0x61,0x61,0x61,0xC1,0xC2,0xC6,0x8F,
0x00,
0x1E,0x0C,0x08,0x10,0x10,0x10,0x10,0x10,0x09,0x0F,
0x07,

// t (116): w=11, h=19
0x4A,0x29,
0x40,0x40,0x40,0xFF,0xFF,0x40,0x40,0x40,0x40,0x00,
0x00,
0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x80,
0x00,0x00,0x00,0x01,0x03,0x06,0x04,0x04,0x04,0x02,
0x01,

// u (117): w=11, h=13
0x2A,0xE9,
0x02,0xFF,0xFF,0x00,0x00,0x00,0x00,0x02,0xFF,0xFF,
0x00,
0x00,0x07,0x0F,0x18,0x10,0x10,0x08,0x08,0x1F,0x1F,
0x10,

// v (118): w=11, h=13
0x2A,0xE9,
0x01,0x07,0x3F,0xF9,0xC0,0x00,0x00,0xC0,0x39,0x07,
0x01,
0x00,0x00,0x00,0x01,0x07,0x1E,0x07,0x00,0x00,0x00,
0x00,

// w (119): w=11, h=13
0x2A,0xE9,
0xFF,0xFF,0x01,0x00,0xC0,0x78,0xF8,0x80,0x00,0x01,
0xFF,
0x01,0x0F,0x1C,0x06,0x01,0x00,0x01,0x07,0x1C,0x0E,
0x03,

// x (120): w=11, h=13
0x2A,0xE9,
0x01,0x03,0x07,0x1D,0xB8,0xE0,0xA0,0x18,0x05,0x03,
0x01,
0x10,0x18,0x14,0x03,0x00,0x00,0x03,0x17,0x1C,0x18,
0x10,

// y (121): w=11, h=16
0x2A,0xE9,
0x01,0x07,0x1F,0x79,0xE0,0x80,0x00,0xC0,0x39,0x07,
0x01,
0x60,0xE0,0x80,0x80,0x61,0x1B,0x07,0x00,0x00,0x00,
0x00,

// z (122): w=11, h=13
0x2A,0xE9,
0x08,0x07,0x03,0x01,0x81,0xE1,0x31,0x1D,0x0F,0x03,
0x01,
0x10,0x18,0x1E,0x17,0x11,0x10,0x10,0x10,0x10,0x1C,
0x02,

// { (123): w=5, h=23
0xC4,0x00,0x97,
0x00,0x00,0xFC,0xFF,0x00,
0x04,0x0A,0xF1,0xE0,0x00,
0x00,0x00,0x0F,0x3F,0xC0,

// | (124): w=2, h=23
0xC1,0x00,0x9A,
0xFF,0xFF,
0xFF,0xFF,
0xFF,0xFF,

// } (125): w=5, h=23
0xC4,0x00,0x5B,
0x00,0xFF,0xFC,0x00,0x00,
0x00,0xE0,0xF1,0x0A,0x04,
0xC0,0x3F,0x0F,0x00,0x00,

// ~ (126): w=11, h=3
0x0A,0x09,
0x0E,0x03,0x01,0x01,0x01,0x03,0x0E,0x0E,0x0E,0x03,
0x01

};
// 2589 bytes
// 2779 bytes with FAST_FONT_INDEX
