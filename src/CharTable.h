/*
 *    LedControl.h - A library for controling Leds with a MAX7219/MAX7221
 *    Copyright (c) 2007 Eberhard Fahle
 * 
 *    Permission is hereby granted, free of charge, to any person
 *    obtaining a copy of this software and associated documentation
 *    files (the "Software"), to deal in the Software without
 *    restriction, including without limitation the rights to use,
 *    copy, modify, merge, publish, distribute, sublicense, and/or sell
 *    copies of the Software, and to permit persons to whom the
 *    Software is furnished to do so, subject to the following
 *    conditions:
 * 
 *    This permission notice shall be included in all copies or 
 *    substantial portions of the Software.
 * 
 *    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 *    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *    OTHER DEALINGS IN THE SOFTWARE.
 */


/*
 * Segments to be switched on for characters and digits on
 * 7-Segment Displays
 *
 * B   DP,A,B,C,D,E,F,G,H
 */

const static byte charTable [] PROGMEM  = {
// *for compatibility reasons
// 					char		decimal value
    B01111110,		// 0*		0
	B00110000,		// 1*		1
	B01101101,		// 2*		2
	B01111001,		// 3*		3
	B00110011,		// 4*		4
	B01011011,		// 5*		5
	B01011111,		// 6*		6
	B01110000,		// 7*		7
	B01111111,		// 8*		8
	B01111011,		// 9*		9
	B01110111,		// A*		10
	B00011111,		// B*		11
	B01001110,		// C*		12
	B00111101,		// D*		13
	B01001111,		// E*		14
	B01000111,		// F*		15
    B00000000,		//			16
	B00000000,		//			17
	B00000000,		//			18
	B00000000,		//			19
	B00000000,		//			20
	B00000000,		//			21
	B00000000,		//			22
	B00000000,		//			23
    B00000000,		//			24
	B00000000,		//			25
	B00000000,		//			26
	B00000000,		//			27
	B00000000,		//			28
	B00000000,		//			29
	B00000000,		//			30
	B00000000,		//			31
    B00000000,		// (space)	32
	B10110000,		// !		33
	B00100010,		// "		34
	B01000001,		// #		35
	B01011011,		// $		36
	B01001001,		// %		37
	B01101111,		// &		38
	B00000010,		// '		39
    B01001110,		// (		40
	B01111000,		// )		41
	B01100011,		// *		42
	B00110001,		// +		43
	B10000000,		// ,		44
	B00000001,		// -		45
	B10000000,		// .		46
	B00100101,		// /		47
    B01111110,		// 0		48
	B00110000,		// 1		49
	B01101101,		// 2		50
	B01111001,		// 3		51
	B00110011,		// 4		52
	B01011011,		// 5		53
	B01011111,		// 6		54
	B01110000,		// 7		55
    B01111111,		// 8		56
	B01111011,		// 9		57
	B10100000,		// :		58
	B10100000,		// ;		59
	B00001101,		// <		60
	B00001001,		// =		61
	B00011001,		// >		62
	B11100101,		// ?		63
    B01111101,		// @		64
	B01110111,		// A		65
	B00011111,		// B		66
	B01001110,		// C		67
	B00111101,		// D		68
	B01001111,		// E		69
	B01000111,		// F		70
	B01011110,		// G		71
    B00110111,		// H		72
	B00110000,		// I		73
	B01111100,		// J		74
	B00001111,		// K		75
	B00001110,		// L		76
	B00000000,		// M		77
	B00010101,		// N		78
	B01111110,		// O		79
    B01100111,		// P		80
	B11111110,		// Q		81
	B00000101,		// R		82
	B01011011,		// S		83
	B00001111,		// T		84
	B00111110,		// U		85
	B00111110,		// V		86
	B00000000,		// W		87
    B00110111,		// X		88
	B00110011,		// Y		89
	B01101101,		// Z		90
	B01001110,		// [		91
	B00010011,		// \		92
	B01111000,		// ]		93
	B01100010,		// ^		94
	B00001000,		// _		95
    B00100000,		// `		96
	B01111101,		// a		97
	B00011111,		// b		98
	B00001101,		// c		99
	B00111101,		// d		100
	B01001111,		// e		101
	B01000111,		// f		102
	B01111011,		// g		103
    B00010111,		// h		104
	B00010000,		// i		105
	B01111100,		// j		106
	B00001111,		// k		107
	B00001100,		// l		108
	B00000000,		// m		109
	B00010101,		// n		110
	B00011101,		// o		111
    B01100111,		// p		112
	B01110011,		// q		111
	B00000101,		// r		114
	B01011011,		// s		115
	B00001111,		// t		116
	B00011100,		// u		117
	B00011100,		// v		118
	B00000000,		// w		119
    B00110111,		// x		120
	B00111011,		// y		121
	B01101101,		// z		122
	B01001110,		// {		123
	B00110000,		// |		124
	B01111000,		// }		125
	B01000000,		// ~		126
	B00000000		// (del)	127
};
