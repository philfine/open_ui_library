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

const char font_clB8x10[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xC8,0x00,
0xCD,0x00,
0xD5,0x00,
0xDC,0x00,
0xE5,0x00,
0xED,0x00,
0xF2,0x00,
0xFC,0x00,
0x06,0x01,
0x0F,0x01,
0x18,0x01,
0x1D,0x01,
0x26,0x01,
0x2A,0x01,
0x36,0x01,
0x3E,0x01,
0x43,0x01,
0x4B,0x01,
0x53,0x01,
0x5B,0x01,
0x63,0x01,
0x6B,0x01,
0x73,0x01,
0x7B,0x01,
0x83,0x01,
0x87,0x01,
0x8C,0x01,
0x95,0x01,
0x9E,0x01,
0xA7,0x01,
0xAF,0x01,
0xB8,0x01,
0xC2,0x01,
0xCB,0x01,
0xD4,0x01,
0xDD,0x01,
0xE6,0x01,
0xEF,0x01,
0xF8,0x01,
0x01,0x02,
0x09,0x02,
0x11,0x02,
0x1A,0x02,
0x22,0x02,
0x2B,0x02,
0x34,0x02,
0x3D,0x02,
0x46,0x02,
0x56,0x02,
0x5F,0x02,
0x68,0x02,
0x70,0x02,
0x79,0x02,
0x82,0x02,
0x8B,0x02,
0x93,0x02,
0x9B,0x02,
0xA3,0x02,
0xAD,0x02,
0xB9,0x02,
0xC3,0x02,
0xCB,0x02,
0xD5,0x02,
0xDA,0x02,
0xE3,0x02,
0xEC,0x02,
0xF4,0x02,
0xFD,0x02,
0x06,0x03,
0x14,0x03,
0x1D,0x03,
0x26,0x03,
0x2E,0x03,
0x3A,0x03,
0x42,0x03,
0x48,0x03,
0x51,0x03,
0x5A,0x03,
0x63,0x03,
0x6C,0x03,
0x75,0x03,
0x7D,0x03,
0x85,0x03,
0x8D,0x03,
0x96,0x03,
0x9E,0x03,
0xA7,0x03,
0xAF,0x03,
0xB7,0x03,
0xBF,0x03,
0xC9,0x03,
0xCE,0x03,
0xD8,0x03,

// C040 (32): w=1, h=1
0x80,0x09,0xB5,
0x00,

// ! (33): w=2, h=8
0x01,0x1D,
0xBF,0xBF,

// " (34): w=3, h=3
0x02,0x1C,
0x07,0x00,0x07,

// # (35): w=6, h=8
0x05,0x0F,
0x24,0xFF,0x24,0x24,0xFF,0x24,

// $ (36): w=5, h=7
0x04,0x35,
0x24,0x2A,0x7F,0x2A,0x12,

// % (37): w=7, h=7
0x06,0x2E,
0x02,0x25,0x12,0x08,0x24,0x52,0x20,

// & (38): w=6, h=7
0x05,0x2F,
0x32,0x4D,0x49,0x51,0x20,0x50,

// ' (39): w=3, h=3
0x02,0x1C,
0x04,0x03,0x01,

// ( (40): w=4, h=9
0x23,0x16,
0x38,0xFE,0xC7,0x01,
0x00,0x00,0x01,0x01,

// ) (41): w=4, h=9
0x23,0x1B,
0x01,0xC7,0xFE,0x38,
0x01,0x01,0x00,0x00,

// * (42): w=7, h=7
0x06,0x2E,
0x04,0x44,0x28,0x1F,0x28,0x44,0x04,

// + (43): w=7, h=7
0x06,0x2E,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// , (44): w=3, h=4
0x02,0xD7,
0x08,0x07,0x03,

// - (45): w=7, h=1
0x06,0x8E,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// . (46): w=2, h=2
0x01,0xDD,
0x03,0x03,

// / (47): w=5, h=10
0x24,0x15,
0x00,0xC0,0x30,0x0C,0x03,
0x03,0x00,0x00,0x00,0x00,

// 0 (48): w=6, h=8
0x05,0x0F,
0x7E,0xFF,0x81,0x81,0xFF,0x7E,

// 1 (49): w=3, h=8
0x02,0x1C,
0x02,0xFF,0xFF,

// 2 (50): w=6, h=8
0x05,0x0F,
0xC2,0xE3,0xB1,0x99,0x8F,0x86,

// 3 (51): w=6, h=8
0x05,0x0F,
0x42,0xC3,0x89,0x89,0xFF,0x76,

// 4 (52): w=6, h=8
0x05,0x0F,
0x20,0x38,0xA6,0xFF,0xFF,0xA0,

// 5 (53): w=6, h=8
0x05,0x0F,
0x4F,0xCF,0x89,0x89,0xF9,0x71,

// 6 (54): w=6, h=8
0x05,0x0F,
0x7C,0xFE,0x8B,0x89,0xF9,0x70,

// 7 (55): w=6, h=8
0x05,0x0F,
0x03,0x03,0xE1,0xF9,0x1F,0x07,

// 8 (56): w=6, h=8
0x05,0x0F,
0x76,0xFF,0x89,0x89,0xFF,0x76,

// 9 (57): w=6, h=8
0x05,0x0F,
0x0E,0x9F,0x91,0xD1,0x7F,0x3E,

// : (58): w=2, h=6
0x01,0x5D,
0x33,0x33,

// ; (59): w=3, h=8
0x02,0x57,
0x80,0x73,0x33,

// < (60): w=7, h=5
0x06,0x4E,
0x04,0x04,0x0E,0x0A,0x1B,0x11,0x11,

// = (61): w=7, h=4
0x06,0x6E,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// > (62): w=7, h=5
0x06,0x4E,
0x11,0x11,0x1B,0x0A,0x0E,0x04,0x04,

// ? (63): w=6, h=8
0x05,0x0F,
0x02,0x03,0xB1,0xB9,0x0F,0x06,

// @ (64): w=7, h=7
0x06,0x2E,
0x3E,0x41,0x5D,0x55,0x5D,0x51,0x0E,

// A (65): w=8, h=7
0x07,0x28,
0x40,0x70,0x7C,0x1F,0x17,0x1C,0x70,0x40,

// B (66): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x49,0x49,0x49,0x7F,0x36,

// C (67): w=7, h=7
0x06,0x2E,
0x1C,0x3E,0x63,0x41,0x41,0x63,0x22,

// D (68): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x41,0x41,0x63,0x3E,0x1C,

// E (69): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x49,0x49,0x49,0x41,0x41,

// F (70): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x09,0x09,0x09,0x01,0x01,

// G (71): w=7, h=7
0x06,0x2E,
0x1C,0x3E,0x63,0x41,0x51,0x73,0x72,

// H (72): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x08,0x08,0x08,0x7F,0x7F,

// I (73): w=6, h=7
0x05,0x2F,
0x41,0x41,0x7F,0x7F,0x41,0x41,

// J (74): w=6, h=7
0x05,0x2F,
0x30,0x70,0x41,0x41,0x7F,0x3F,

// K (75): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x08,0x1C,0x36,0x63,0x41,

// L (76): w=6, h=7
0x05,0x2F,
0x7F,0x7F,0x40,0x40,0x40,0x40,

// M (77): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x04,0x18,0x04,0x7F,0x7F,

// N (78): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x06,0x18,0x20,0x7F,0x7F,

// O (79): w=7, h=7
0x06,0x2E,
0x1C,0x3E,0x63,0x41,0x63,0x3E,0x1C,

// P (80): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x09,0x09,0x09,0x0F,0x06,

// Q (81): w=7, h=9
0x26,0x2E,
0x1C,0xBE,0x63,0xC1,0xE3,0x3E,0x9C,
0x00,0x00,0x00,0x00,0x01,0x01,0x00,

// R (82): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x09,0x19,0x39,0x6F,0x46,

// S (83): w=7, h=7
0x06,0x2E,
0x26,0x6F,0x49,0x49,0x49,0x7B,0x32,

// T (84): w=6, h=7
0x05,0x2F,
0x01,0x01,0x7F,0x7F,0x01,0x01,

// U (85): w=7, h=7
0x06,0x2E,
0x3F,0x7F,0x40,0x40,0x40,0x7F,0x3F,

// V (86): w=7, h=7
0x06,0x2E,
0x07,0x1F,0x78,0x60,0x78,0x1F,0x07,

// W (87): w=7, h=7
0x06,0x2E,
0x7F,0x7F,0x20,0x1C,0x20,0x7F,0x7F,

// X (88): w=6, h=7
0x05,0x2F,
0x63,0x77,0x1C,0x1C,0x77,0x63,

// Y (89): w=6, h=7
0x05,0x2F,
0x03,0x07,0x7C,0x7C,0x07,0x03,

// Z (90): w=6, h=7
0x05,0x2F,
0x61,0x71,0x59,0x4D,0x47,0x43,

// [ (91): w=4, h=9
0x23,0x1B,
0xFF,0xFF,0x01,0x01,
0x01,0x01,0x01,0x01,

// \ (92): w=5, h=10
0x24,0x15,
0x03,0x0C,0x30,0xC0,0x00,
0x00,0x00,0x00,0x00,0x03,

// ] (93): w=4, h=9
0x23,0x16,
0x01,0x01,0xFF,0xFF,
0x01,0x01,0x01,0x01,

// ^ (94): w=6, h=3
0x05,0x0F,
0x04,0x06,0x03,0x01,0x02,0x04,

// _ (95): w=7, h=1
0x86,0x09,0x55,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// ` (96): w=3, h=3
0x02,0x1C,
0x01,0x03,0x04,

// a (97): w=7, h=5
0x06,0x6E,
0x0E,0x1F,0x11,0x11,0x09,0x1F,0x1F,

// b (98): w=7, h=8
0x06,0x0E,
0xFF,0xFF,0x88,0x88,0x88,0xF8,0x70,

// c (99): w=6, h=5
0x05,0x6F,
0x0E,0x1F,0x11,0x11,0x11,0x11,

// d (100): w=7, h=8
0x06,0x0E,
0x70,0xF8,0x88,0x88,0x88,0xFF,0xFF,

// e (101): w=7, h=5
0x06,0x6E,
0x0E,0x1F,0x15,0x15,0x15,0x17,0x06,

// f (102): w=6, h=9
0x25,0x0F,
0x08,0xFE,0xFF,0x09,0x09,0x01,
0x00,0x01,0x00,0x00,0x00,0x00,

// g (103): w=7, h=7
0x06,0x6E,
0x0E,0x5F,0x51,0x51,0x51,0x7F,0x3F,

// h (104): w=7, h=8
0x06,0x0E,
0xFF,0xFF,0x08,0x08,0x08,0xF8,0xF0,

// i (105): w=6, h=8
0x05,0x0F,
0x88,0x88,0xFB,0xFB,0x80,0x80,

// j (106): w=5, h=10
0x24,0x15,
0x00,0x08,0x08,0xFB,0xFB,
0x02,0x02,0x02,0x03,0x01,

// k (107): w=6, h=8
0x05,0x0F,
0xFF,0xFF,0x20,0x70,0xD8,0x88,

// l (108): w=4, h=8
0x03,0x16,
0x81,0xFF,0xFF,0x80,

// m (109): w=7, h=5
0x06,0x6E,
0x1F,0x1F,0x01,0x0E,0x01,0x1F,0x1E,

// n (110): w=7, h=5
0x06,0x6E,
0x1F,0x1F,0x02,0x01,0x01,0x1F,0x1E,

// o (111): w=7, h=5
0x06,0x6E,
0x0E,0x1F,0x11,0x11,0x11,0x1F,0x0E,

// p (112): w=7, h=7
0x06,0x6E,
0x7F,0x7F,0x11,0x11,0x11,0x1F,0x0E,

// q (113): w=7, h=7
0x06,0x6E,
0x0E,0x1F,0x11,0x11,0x11,0x7F,0x7F,

// r (114): w=6, h=5
0x05,0x6F,
0x1F,0x1F,0x02,0x01,0x01,0x01,

// s (115): w=6, h=5
0x05,0x6F,
0x12,0x17,0x15,0x15,0x1D,0x09,

// t (116): w=6, h=8
0x05,0x0F,
0x08,0x08,0x7F,0xFF,0x88,0x88,

// u (117): w=7, h=5
0x06,0x6E,
0x0F,0x1F,0x10,0x10,0x08,0x1F,0x1F,

// v (118): w=6, h=5
0x05,0x6F,
0x01,0x07,0x1F,0x18,0x07,0x01,

// w (119): w=7, h=5
0x06,0x6E,
0x0F,0x1F,0x10,0x0E,0x10,0x1F,0x0F,

// x (120): w=6, h=5
0x05,0x6F,
0x11,0x1B,0x0E,0x0E,0x1B,0x11,

// y (121): w=6, h=7
0x05,0x6F,
0x0F,0x5F,0x50,0x50,0x7F,0x3F,

// z (122): w=6, h=5
0x05,0x6F,
0x11,0x19,0x1D,0x17,0x13,0x11,

// { (123): w=4, h=9
0x23,0x16,
0x10,0xFE,0xEF,0x01,
0x00,0x00,0x01,0x01,

// | (124): w=1, h=9
0xA0,0x00,0x88,
0xFF,
0x01,

// } (125): w=4, h=9
0x23,0x1B,
0x01,0xEF,0xFE,0x10,
0x01,0x01,0x00,0x00,

// ~ (126): w=7, h=3
0x06,0x2E,
0x06,0x01,0x01,0x02,0x04,0x04,0x03

};
// 803 bytes
// 993 bytes with FAST_FONT_INDEX
