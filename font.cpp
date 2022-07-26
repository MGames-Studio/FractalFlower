//Generated with FontEdit by Dominik Kapusta (https://github.com/ayoy/fontedit)
// terminal_8pt
// Font Size: 5x12px
// Created: 24-07-2022 09:49:16
//

#include "font.h"
#include <stdint.h>


// 
// Pseudocode for retrieving data for a specific character:
// 
// offset = ascii_code(character) - ascii_code(' ')
// data = terminal_8pt[hight*offset]
// 

void GetLetterFromFont(char * character,unsigned char* returns)
{
	int offset = int(*character) - int(' ');
	returns = &terminal_8pt[FONT_HIGHT * offset];

}


const unsigned char terminal_8pt[] = {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Character 0x20 (32: ' ')
	0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x04,0x04,0x00,0x00, // Character 0x21 (33: '!')
	0x0A,0x0A,0x0A,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Character 0x22 (34: '"')
	0x00,0x0A,0x0A,0x1F,0x0A,0x0A,0x1F,0x0A,0x0A,0x00,0x00,0x00, // Character 0x23 (35: '#')
	0x00,0x02,0x06,0x09,0x01,0x02,0x04,0x08,0x09,0x06,0x04,0x00, // Character 0x24 (36: '$')
	0x00,0x0B,0x0B,0x04,0x04,0x02,0x02,0x02,0x0D,0x0D,0x00,0x00, // Character 0x25 (37: '%')
	0x00,0x02,0x05,0x05,0x05,0x02,0x15,0x09,0x09,0x16,0x00,0x00, // Character 0x26 (38: '&')
	0x0C,0x0C,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Character 0x27 (39: ''')
	0x00,0x04,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x04,0x00,0x00, // Character 0x28 (40: '(')
	0x00,0x02,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x02,0x00,0x00, // Character 0x29 (41: ')')
	0x00,0x00,0x04,0x15,0x0E,0x0E,0x15,0x04,0x00,0x00,0x00,0x00, // Character 0x2a (42: '*')
	0x00,0x00,0x00,0x04,0x04,0x1F,0x04,0x04,0x00,0x00,0x00,0x00, // Character 0x2b (43: '+')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x04,0x02, // Character 0x2c (44: ',')
	0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00, // Character 0x2d (45: '-')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00, // Character 0x2e (46: '.')
	0x00,0x08,0x08,0x04,0x04,0x02,0x02,0x02,0x01,0x01,0x00,0x00, // Character 0x2f (47: '/')
	0x00,0x0E,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x07,0x00,0x00, // Character 0x30 (48: '0')
	0x00,0x04,0x06,0x05,0x04,0x04,0x04,0x04,0x04,0x0F,0x00,0x00, // Character 0x31 (49: '1')
	0x00,0x06,0x09,0x09,0x08,0x04,0x02,0x01,0x01,0x0F,0x00,0x00, // Character 0x32 (50: '2')
	0x00,0x06,0x09,0x08,0x08,0x06,0x08,0x08,0x09,0x06,0x00,0x00, // Character 0x33 (51: '3')
	0x00,0x08,0x0C,0x0A,0x0A,0x09,0x0F,0x08,0x08,0x08,0x00,0x00, // Character 0x34 (52: '4')
	0x00,0x0F,0x01,0x01,0x01,0x07,0x08,0x08,0x09,0x06,0x00,0x00, // Character 0x35 (53: '5')
	0x00,0x0C,0x02,0x01,0x07,0x09,0x09,0x09,0x09,0x06,0x00,0x00, // Character 0x36 (54: '6')
	0x00,0x0F,0x08,0x08,0x08,0x04,0x04,0x02,0x02,0x02,0x00,0x00, // Character 0x37 (55: '7')
	0x00,0x06,0x09,0x09,0x09,0x06,0x09,0x09,0x09,0x06,0x00,0x00, // Character 0x38 (56: '8')
	0x00,0x06,0x09,0x09,0x09,0x09,0x0E,0x08,0x04,0x03,0x00,0x00, // Character 0x39 (57: '9')
	0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x06,0x06,0x00,0x00, // Character 0x3a (58: ':')
	0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x06,0x06,0x04,0x02, // Character 0x3b (59: ';')
	0x00,0x00,0x08,0x04,0x02,0x01,0x01,0x02,0x04,0x08,0x00,0x00, // Character 0x3c (60: '<')
	0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x0F,0x00,0x00,0x00,0x00, // Character 0x3d (61: '=')
	0x00,0x00,0x01,0x02,0x04,0x08,0x08,0x04,0x02,0x01,0x00,0x00, // Character 0x3e (62: '>')
	0x00,0x06,0x09,0x09,0x08,0x04,0x04,0x00,0x04,0x04,0x00,0x00, // Character 0x3f (63: '?')
	0x00,0x06,0x09,0x09,0x09,0x0D,0x0D,0x01,0x01,0x0E,0x00,0x00, // Character 0x40 (64: '@')
	0x00,0x06,0x09,0x09,0x09,0x0F,0x09,0x09,0x09,0x09,0x00,0x00, // Character 0x41 (65: 'A')
	0x00,0x07,0x09,0x09,0x09,0x07,0x09,0x09,0x09,0x07,0x00,0x00, // Character 0x42 (66: 'B')
	0x00,0x06,0x09,0x09,0x01,0x01,0x01,0x01,0x09,0x06,0x00,0x00, // Character 0x43 (67: 'C')
	0x00,0x07,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x07,0x00,0x00, // Character 0x44 (68: 'D')
	0x00,0x0F,0x01,0x01,0x01,0x0F,0x01,0x01,0x01,0x0F,0x00,0x00, // Character 0x45 (69: 'E')
	0x00,0x0F,0x01,0x01,0x01,0x0F,0x01,0x01,0x01,0x01,0x00,0x00, // Character 0x46 (70: 'F')
	0x00,0x06,0x09,0x09,0x01,0x01,0x0D,0x09,0x09,0x06,0x00,0x00, // Character 0x47 (71: 'G')
	0x00,0x09,0x09,0x09,0x09,0x0F,0x09,0x09,0x09,0x09,0x00,0x00, // Character 0x48 (72: 'H')
	0x00,0x0E,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0E,0x00,0x00, // Character 0x49 (73: 'I')
	0x00,0x0E,0x04,0x04,0x04,0x04,0x04,0x05,0x05,0x02,0x00,0x00, // Character 0x4a (74: 'J')
	0x00,0x09,0x09,0x05,0x05,0x03,0x05,0x05,0x09,0x09,0x00,0x00, // Character 0x4b (75: 'K')
	0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x0F,0x00,0x00, // Character 0x4c (76: 'L')
	0x00,0x09,0x09,0x0F,0x0F,0x09,0x09,0x09,0x09,0x09,0x00,0x00, // Character 0x4d (77: 'M')
	0x00,0x09,0x09,0x0B,0x0B,0x0D,0x0D,0x09,0x09,0x09,0x00,0x00, // Character 0x4e (78: 'N')
	0x00,0x06,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x06,0x00,0x00, // Character 0x4f (79: 'O')
	0x00,0x07,0x09,0x09,0x09,0x07,0x01,0x01,0x01,0x01,0x00,0x00, // Character 0x50 (80: 'P')
	0x00,0x06,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x06,0x04,0x08, // Character 0x51 (81: 'Q')
	0x00,0x07,0x09,0x09,0x09,0x07,0x03,0x05,0x09,0x09,0x00,0x00, // Character 0x52 (82: 'R')
	0x00,0x06,0x09,0x09,0x01,0x06,0x08,0x09,0x09,0x06,0x00,0x00, // Character 0x53 (83: 'S')
	0x00,0x1F,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00, // Character 0x54 (84: 'T')
	0x00,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x06,0x00,0x00, // Character 0x55 (85: 'U')
	0x00,0x09,0x09,0x09,0x09,0x09,0x0A,0x0A,0x04,0x04,0x00,0x00, // Character 0x56 (86: 'V')
	0x00,0x09,0x09,0x09,0x09,0x09,0x09,0x0F,0x09,0x09,0x00,0x00, // Character 0x57 (87: 'W')
	0x00,0x09,0x09,0x09,0x06,0x06,0x06,0x09,0x09,0x09,0x00,0x00, // Character 0x58 (88: 'X')
	0x00,0x11,0x11,0x11,0x0A,0x0A,0x04,0x04,0x04,0x04,0x00,0x00, // Character 0x59 (89: 'Y')
	0x00,0x0F,0x08,0x04,0x04,0x02,0x02,0x01,0x01,0x0F,0x00,0x00, // Character 0x5a (90: 'Z')
	0x00,0x06,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x06,0x00,0x00, // Character 0x5b (91: '[')
	0x00,0x01,0x01,0x02,0x02,0x04,0x04,0x04,0x08,0x08,0x00,0x00, // Character 0x5c (92: '\')
	0x00,0x06,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x06,0x00,0x00, // Character 0x5d (93: ']')
	0x00,0x04,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Character 0x5e (94: '^')
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F, // Character 0x5f (95: '_')
	0x06,0x06,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Character 0x60 (96: '`')
	0x00,0x00,0x00,0x00,0x06,0x08,0x0E,0x09,0x09,0x0E,0x00,0x00, // Character 0x61 (97: 'a')
	0x00,0x01,0x01,0x01,0x07,0x09,0x09,0x09,0x09,0x07,0x00,0x00, // Character 0x62 (98: 'b')
	0x00,0x00,0x00,0x00,0x0E,0x01,0x01,0x01,0x01,0x0E,0x00,0x00, // Character 0x63 (99: 'c')
	0x00,0x08,0x08,0x08,0x0E,0x09,0x09,0x09,0x09,0x0E,0x00,0x00, // Character 0x64 (100: 'd')
	0x00,0x00,0x00,0x00,0x06,0x09,0x09,0x0F,0x01,0x0E,0x00,0x00, // Character 0x65 (101: 'e')
	0x00,0x04,0x02,0x02,0x07,0x02,0x02,0x02,0x02,0x02,0x00,0x00, // Character 0x66 (102: 'f')
	0x00,0x00,0x00,0x00,0x0E,0x09,0x09,0x09,0x09,0x0E,0x08,0x06, // Character 0x67 (103: 'g')
	0x00,0x01,0x01,0x01,0x07,0x09,0x09,0x09,0x09,0x09,0x00,0x00, // Character 0x68 (104: 'h')
	0x00,0x00,0x04,0x00,0x04,0x04,0x04,0x04,0x04,0x0E,0x00,0x00, // Character 0x69 (105: 'i')
	0x00,0x00,0x04,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x05,0x02, // Character 0x6a (106: 'j')
	0x00,0x01,0x01,0x01,0x09,0x05,0x03,0x03,0x05,0x09,0x00,0x00, // Character 0x6b (107: 'k')
	0x00,0x06,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0E,0x00,0x00, // Character 0x6c (108: 'l')
	0x00,0x00,0x00,0x00,0x09,0x0F,0x09,0x09,0x09,0x09,0x00,0x00, // Character 0x6d (109: 'm')
	0x00,0x00,0x00,0x00,0x05,0x0B,0x09,0x09,0x09,0x09,0x00,0x00, // Character 0x6e (110: 'n')
	0x00,0x00,0x00,0x00,0x06,0x09,0x09,0x09,0x09,0x06,0x00,0x00, // Character 0x6f (111: 'o')
	0x00,0x00,0x00,0x00,0x07,0x09,0x09,0x09,0x09,0x07,0x01,0x01, // Character 0x70 (112: 'p')
	0x00,0x00,0x00,0x00,0x0E,0x09,0x09,0x09,0x09,0x0E,0x08,0x08, // Character 0x71 (113: 'q')
	0x00,0x00,0x00,0x00,0x0D,0x0A,0x02,0x02,0x02,0x02,0x00,0x00, // Character 0x72 (114: 'r')
	0x00,0x00,0x00,0x00,0x06,0x09,0x02,0x04,0x09,0x06,0x00,0x00, // Character 0x73 (115: 's')
	0x00,0x00,0x02,0x02,0x07,0x02,0x02,0x02,0x02,0x06,0x00,0x00, // Character 0x74 (116: 't')
	0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x09,0x09,0x0E,0x00,0x00, // Character 0x75 (117: 'u')
	0x00,0x00,0x00,0x00,0x09,0x09,0x0A,0x0A,0x04,0x04,0x00,0x00, // Character 0x76 (118: 'v')
	0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x09,0x0F,0x09,0x00,0x00, // Character 0x77 (119: 'w')
	0x00,0x00,0x00,0x00,0x09,0x09,0x06,0x06,0x09,0x09,0x00,0x00, // Character 0x78 (120: 'x')
	0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x09,0x09,0x0E,0x08,0x07, // Character 0x79 (121: 'y')
	0x00,0x00,0x00,0x00,0x0F,0x08,0x04,0x02,0x01,0x0F,0x00,0x00, // Character 0x7a (122: 'z')
	0x00,0x04,0x02,0x02,0x02,0x01,0x02,0x02,0x02,0x04,0x00,0x00, // Character 0x7b (123: '{')
	0x04,0x04,0x04,0x04,0x00,0x04,0x04,0x04,0x04,0x04,0x00,0x00, // Character 0x7c (124: '|')
	0x00,0x02,0x04,0x04,0x04,0x08,0x04,0x04,0x04,0x02,0x00,0x00, // Character 0x7d (125: '}')
	0x00,0x0A,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Character 0x7e (126: '~')
};





