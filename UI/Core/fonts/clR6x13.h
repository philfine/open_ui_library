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

const char font_clR6x13[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xC8,0x00,
0xCD,0x00,
0xD9,0x00,
0xE5,0x00,
0xEC,0x00,
0xF8,0x00,
0xFD,0x00,
0x05,0x01,
0x0D,0x01,
0x14,0x01,
0x1B,0x01,
0x21,0x01,
0x28,0x01,
0x2D,0x01,
0x3B,0x01,
0x47,0x01,
0x4D,0x01,
0x59,0x01,
0x65,0x01,
0x71,0x01,
0x7D,0x01,
0x89,0x01,
0x95,0x01,
0xA1,0x01,
0xAD,0x01,
0xB1,0x01,
0xB9,0x01,
0xC1,0x01,
0xC8,0x01,
0xD0,0x01,
0xDC,0x01,
0xE3,0x01,
0xEF,0x01,
0xFB,0x01,
0x07,0x02,
0x13,0x02,
0x1F,0x02,
0x2B,0x02,
0x37,0x02,
0x43,0x02,
0x4F,0x02,
0x5B,0x02,
0x67,0x02,
0x73,0x02,
0x7F,0x02,
0x8B,0x02,
0x97,0x02,
0xA3,0x02,
0xAF,0x02,
0xBB,0x02,
0xC7,0x02,
0xD3,0x02,
0xDF,0x02,
0xEB,0x02,
0xF7,0x02,
0x03,0x03,
0x0F,0x03,
0x1B,0x03,
0x23,0x03,
0x31,0x03,
0x39,0x03,
0x40,0x03,
0x49,0x03,
0x4E,0x03,
0x55,0x03,
0x61,0x03,
0x68,0x03,
0x74,0x03,
0x7B,0x03,
0x87,0x03,
0x93,0x03,
0x9F,0x03,
0xA7,0x03,
0xB1,0x03,
0xBD,0x03,
0xC5,0x03,
0xCC,0x03,
0xD3,0x03,
0xDA,0x03,
0xE6,0x03,
0xF2,0x03,
0xF8,0x03,
0xFF,0x03,
0x0B,0x04,
0x12,0x04,
0x19,0x04,
0x20,0x04,
0x27,0x04,
0x33,0x04,
0x3A,0x04,
0x42,0x04,
0x46,0x04,
0x4E,0x04,

// C040 (32): w=1, h=1
0x80,0x0B,0x95,
0x00,

// ! (33): w=1, h=10
0x20,0x1C,
0xFF,
0x02,

// " (34): w=3, h=3
0x02,0x15,
0x07,0x00,0x07,

// # (35): w=5, h=9
0x24,0x2E,
0x44,0xFF,0x44,0xFF,0x44,
0x00,0x01,0x00,0x01,0x00,

// $ (36): w=5, h=9
0x24,0x2E,
0x4C,0x92,0xFF,0x92,0x64,
0x00,0x00,0x01,0x00,0x00,

// % (37): w=5, h=7
0x04,0x4E,
0x23,0x13,0x08,0x64,0x62,

// & (38): w=5, h=9
0x24,0x2E,
0xEE,0x11,0x21,0xC1,0x20,
0x00,0x01,0x01,0x00,0x01,

// ' (39): w=3, h=3
0x02,0x15,
0x04,0x03,0x01,

// ( (40): w=3, h=11
0x22,0x1A,
0xF8,0x06,0x01,
0x00,0x03,0x04,

// ) (41): w=3, h=11
0x22,0x10,
0x01,0x06,0xF8,
0x04,0x03,0x00,

// * (42): w=5, h=5
0x04,0x6E,
0x0A,0x04,0x1F,0x04,0x0A,

// + (43): w=5, h=5
0x04,0x6E,
0x04,0x04,0x1F,0x04,0x04,

// , (44): w=3, h=4
0x82,0x08,0x66,
0x08,0x07,0x03,

// - (45): w=5, h=1
0x04,0xAE,
0x01,0x01,0x01,0x01,0x01,

// . (46): w=2, h=2
0x81,0x08,0x76,
0x03,0x03,

// / (47): w=6, h=11
0x25,0x08,
0x00,0x80,0x60,0x18,0x06,0x01,
0x0E,0x01,0x00,0x00,0x00,0x00,

// 0 (48): w=5, h=10
0x24,0x0E,
0xFE,0xC1,0x31,0x0D,0xFE,
0x01,0x02,0x02,0x02,0x01,

// 1 (49): w=2, h=10
0x21,0x16,
0x02,0xFF,
0x00,0x03,

// 2 (50): w=5, h=10
0x24,0x0E,
0x82,0x41,0x21,0x11,0x0E,
0x03,0x02,0x02,0x02,0x02,

// 3 (51): w=5, h=10
0x24,0x0E,
0x02,0x01,0x11,0x11,0xEE,
0x01,0x02,0x02,0x02,0x01,

// 4 (52): w=5, h=10
0x24,0x0E,
0xC0,0xB0,0x8C,0xFF,0x80,
0x00,0x00,0x02,0x03,0x02,

// 5 (53): w=5, h=10
0x24,0x0E,
0x1F,0x11,0x11,0x11,0xE1,
0x01,0x02,0x02,0x02,0x01,

// 6 (54): w=5, h=10
0x24,0x0E,
0xFC,0x12,0x11,0x11,0xE0,
0x01,0x02,0x02,0x02,0x01,

// 7 (55): w=5, h=10
0x24,0x0E,
0x03,0x01,0x81,0x71,0x0F,
0x00,0x00,0x03,0x00,0x00,

// 8 (56): w=5, h=10
0x24,0x0E,
0xEE,0x11,0x11,0x11,0xEE,
0x01,0x02,0x02,0x02,0x01,

// 9 (57): w=5, h=10
0x24,0x0E,
0x1E,0x21,0x21,0x21,0xFE,
0x00,0x02,0x02,0x01,0x00,

// : (58): w=2, h=7
0x01,0x7B,
0x63,0x63,

// ; (59): w=3, h=9
0x22,0x75,
0x00,0xE3,0x63,
0x01,0x00,0x00,

// < (60): w=6, h=5
0x05,0x68,
0x04,0x04,0x0A,0x0A,0x11,0x11,

// = (61): w=5, h=3
0x04,0x8E,
0x05,0x05,0x05,0x05,0x05,

// > (62): w=6, h=5
0x05,0x68,
0x11,0x11,0x0A,0x0A,0x04,0x04,

// ? (63): w=5, h=10
0x24,0x0E,
0x06,0x01,0xC1,0x21,0x1E,
0x00,0x00,0x02,0x00,0x00,

// @ (64): w=5, h=8
0x04,0x4E,
0x7E,0x81,0xBD,0xBD,0x1E,

// A (65): w=5, h=9
0x24,0x2E,
0xFC,0x22,0x21,0x22,0xFC,
0x01,0x00,0x00,0x00,0x01,

// B (66): w=5, h=9
0x24,0x2E,
0xFF,0x11,0x11,0x11,0xEE,
0x01,0x01,0x01,0x01,0x00,

// C (67): w=5, h=9
0x24,0x2E,
0xFE,0x01,0x01,0x01,0x82,
0x00,0x01,0x01,0x01,0x00,

// D (68): w=5, h=9
0x24,0x2E,
0xFF,0x01,0x01,0x82,0x7C,
0x01,0x01,0x01,0x00,0x00,

// E (69): w=5, h=9
0x24,0x2E,
0xFF,0x11,0x11,0x11,0x01,
0x01,0x01,0x01,0x01,0x01,

// F (70): w=5, h=9
0x24,0x2E,
0xFF,0x11,0x11,0x11,0x01,
0x01,0x00,0x00,0x00,0x00,

// G (71): w=5, h=9
0x24,0x2E,
0xFE,0x01,0x01,0x11,0xF2,
0x00,0x01,0x01,0x01,0x01,

// H (72): w=5, h=9
0x24,0x2E,
0xFF,0x10,0x10,0x10,0xFF,
0x01,0x00,0x00,0x00,0x01,

// I (73): w=5, h=9
0x24,0x2E,
0x01,0x01,0xFF,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// J (74): w=5, h=9
0x24,0x2E,
0xC0,0x00,0x01,0x01,0xFF,
0x00,0x01,0x01,0x01,0x00,

// K (75): w=5, h=9
0x24,0x2E,
0xFF,0x10,0x28,0x44,0x83,
0x01,0x00,0x00,0x00,0x01,

// L (76): w=5, h=9
0x24,0x2E,
0xFF,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,

// M (77): w=5, h=9
0x24,0x2E,
0xFF,0x0C,0x30,0x0C,0xFF,
0x01,0x00,0x00,0x00,0x01,

// N (78): w=5, h=9
0x24,0x2E,
0xFF,0x06,0x18,0x60,0xFF,
0x01,0x00,0x00,0x00,0x01,

// O (79): w=5, h=9
0x24,0x2E,
0xFE,0x01,0x01,0x01,0xFE,
0x00,0x01,0x01,0x01,0x00,

// P (80): w=5, h=9
0x24,0x2E,
0xFF,0x11,0x11,0x11,0x0E,
0x01,0x00,0x00,0x00,0x00,

// Q (81): w=5, h=10
0x24,0x2E,
0xFE,0x01,0x01,0x01,0xFE,
0x00,0x01,0x01,0x03,0x02,

// R (82): w=5, h=9
0x24,0x2E,
0xFF,0x31,0x51,0x91,0x0E,
0x01,0x00,0x00,0x00,0x01,

// S (83): w=5, h=9
0x24,0x2E,
0x8E,0x11,0x11,0x11,0xE2,
0x00,0x01,0x01,0x01,0x00,

// T (84): w=5, h=9
0x24,0x2E,
0x01,0x01,0xFF,0x01,0x01,
0x00,0x00,0x01,0x00,0x00,

// U (85): w=5, h=9
0x24,0x2E,
0xFF,0x00,0x00,0x00,0xFF,
0x00,0x01,0x01,0x01,0x00,

// V (86): w=5, h=9
0x24,0x2E,
0x07,0x38,0xC0,0x38,0x07,
0x00,0x00,0x01,0x00,0x00,

// W (87): w=5, h=9
0x24,0x2E,
0xFF,0x60,0x18,0x60,0xFF,
0x01,0x00,0x00,0x00,0x01,

// X (88): w=5, h=9
0x24,0x2E,
0x83,0x6C,0x10,0x6C,0x83,
0x01,0x00,0x00,0x00,0x01,

// Y (89): w=5, h=9
0x24,0x2E,
0x03,0x0C,0xF0,0x0C,0x03,
0x00,0x00,0x01,0x00,0x00,

// Z (90): w=5, h=9
0x24,0x2E,
0x01,0xC1,0x39,0x07,0x01,
0x01,0x01,0x01,0x01,0x01,

// [ (91): w=3, h=11
0x22,0x1A,
0xFF,0x01,0x01,
0x07,0x04,0x04,

// \ (92): w=6, h=11
0x25,0x08,
0x01,0x06,0x18,0x60,0x80,0x00,
0x00,0x00,0x00,0x00,0x01,0x0E,

// ] (93): w=3, h=11
0x22,0x10,
0x01,0x01,0xFF,
0x04,0x04,0x07,

// ^ (94): w=5, h=3
0x04,0x0E,
0x04,0x02,0x01,0x02,0x04,

// _ (95): w=6, h=1
0x85,0x0A,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// ` (96): w=3, h=3
0x02,0x15,
0x01,0x03,0x04,

// a (97): w=5, h=7
0x04,0x6E,
0x3E,0x41,0x41,0x21,0x7F,

// b (98): w=5, h=10
0x24,0x0E,
0xFF,0x08,0x08,0x08,0xF0,
0x03,0x02,0x02,0x02,0x01,

// c (99): w=5, h=7
0x04,0x6E,
0x3E,0x41,0x41,0x41,0x41,

// d (100): w=5, h=10
0x24,0x0E,
0xF0,0x08,0x08,0x08,0xFF,
0x01,0x02,0x02,0x02,0x03,

// e (101): w=5, h=7
0x04,0x6E,
0x3E,0x49,0x49,0x49,0x0E,

// f (102): w=5, h=10
0x24,0x0E,
0x08,0xFE,0x09,0x09,0x01,
0x00,0x03,0x00,0x00,0x00,

// g (103): w=5, h=9
0x24,0x6E,
0x3E,0x41,0x41,0x41,0xFF,
0x00,0x01,0x01,0x01,0x00,

// h (104): w=5, h=10
0x24,0x0E,
0xFF,0x08,0x08,0x08,0xF0,
0x03,0x00,0x00,0x00,0x03,

// i (105): w=3, h=10
0x22,0x15,
0x08,0xFB,0x00,
0x02,0x03,0x02,

// j (106): w=4, h=12
0x23,0x0F,
0x00,0x08,0x08,0xFB,
0x08,0x08,0x08,0x07,

// k (107): w=5, h=10
0x24,0x0E,
0xFF,0x40,0xA0,0x10,0x08,
0x03,0x00,0x00,0x01,0x02,

// l (108): w=3, h=10
0x22,0x15,
0x01,0xFF,0x00,
0x02,0x03,0x02,

// m (109): w=5, h=7
0x04,0x6E,
0x7F,0x01,0x1E,0x01,0x7E,

// n (110): w=5, h=7
0x04,0x6E,
0x7F,0x02,0x01,0x01,0x7E,

// o (111): w=5, h=7
0x04,0x6E,
0x3E,0x41,0x41,0x41,0x3E,

// p (112): w=5, h=9
0x24,0x6E,
0xFF,0x41,0x41,0x41,0x3E,
0x01,0x00,0x00,0x00,0x00,

// q (113): w=5, h=9
0x24,0x6E,
0x3E,0x41,0x41,0x41,0xFF,
0x00,0x00,0x00,0x00,0x01,

// r (114): w=4, h=7
0x03,0x6F,
0x7F,0x02,0x01,0x01,

// s (115): w=5, h=7
0x04,0x6E,
0x46,0x49,0x49,0x49,0x31,

// t (116): w=5, h=10
0x24,0x0E,
0x08,0x08,0xFF,0x08,0x08,
0x00,0x00,0x01,0x02,0x02,

// u (117): w=5, h=7
0x04,0x6E,
0x3F,0x40,0x40,0x20,0x7F,

// v (118): w=5, h=7
0x04,0x6E,
0x07,0x18,0x60,0x18,0x07,

// w (119): w=5, h=7
0x04,0x6E,
0x3F,0x40,0x3C,0x40,0x3F,

// x (120): w=5, h=7
0x04,0x6E,
0x63,0x14,0x08,0x14,0x63,

// y (121): w=5, h=9
0x24,0x6E,
0x3F,0x40,0x40,0x40,0xFF,
0x00,0x01,0x01,0x01,0x00,

// z (122): w=5, h=7
0x04,0x6E,
0x61,0x51,0x49,0x45,0x43,

// { (123): w=3, h=11
0x22,0x1A,
0x20,0xDE,0x01,
0x00,0x03,0x04,

// | (124): w=1, h=11
0x20,0x1C,
0xFF,
0x07,

// } (125): w=3, h=11
0x22,0x10,
0x01,0xDE,0x20,
0x04,0x03,0x00,

// ~ (126): w=5, h=3
0x04,0x0E,
0x02,0x01,0x02,0x04,0x02

};
// 919 bytes
// 1109 bytes with FAST_FONT_INDEX
