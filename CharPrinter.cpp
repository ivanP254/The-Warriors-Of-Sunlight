#include "CharPrinter.h"

void CharPrinter::printChar(char ch, int line, int color)
{
	if (ch == 'a') {
		switch (line) {
		case 1:
			GAP(1);
			print(SH(2), color);
			GAP(1);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 4:
			print(SH(4), color);
			break;
		case 5:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		}
	}
	if (ch == 'b') {
		switch (line) {
		case 1:
			print(SH(3), color);
			GAP(1);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(3), color);
			GAP(1);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			print(SH(3), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'c') {
		switch (line) {
		case 1:
			GAP(1);
			print(SH(2), color);
			GAP(1);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(3);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			GAP(1);
			print(SH(2), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'd') {
		switch (line) {
		case 1:
			print(SH(3), color);
			GAP(1);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			print(SH(3), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'e') {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			break;
		case 3:
			print(SH(3), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			break;
		case 5:
			print(SH(3), color);
			break;
		}
	}
	if (ch == 'f') {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
		case 4:
		case 5:
			print(SH(1), color);
			GAP(2);
			break;
		case 3:
			print(SH(2), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'g') {
		switch (line) {
		case 1:
			GAP(1);
			print(SH(2), color);
			GAP(1);
			break;
		case 2:
			print(SH(1), color);
			GAP(3);
			break;
		case 3:
			print(SH(1), color);
			GAP(1);
			print(SH(2), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			GAP(1);
			print(SH(3), color);
			break;
		}
	}
	if (ch == 'h') {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(4), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		}
	}
	if (ch == 'i') {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 3:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 4:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 5:
			print(SH(3), color);
			break;
		}
	}
	if (ch == 'k') {
		switch (line) {
		case 1:
		case 2:
		case 4:
		case 5:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 3:
			print(SH(2), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'l') {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(3);
			break;
		case 2:
			print(SH(1), color);
			GAP(3);
			break;
		case 3:
			print(SH(1), color);
			GAP(3);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			print(SH(4), color);
			break;
		}
	}
	if (ch == 'm') {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(3);
			print(SH(1), color);
			break;
		case 2:
			print(SH(2), color);
			GAP(1);
			print(SH(2), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 5:
			print(SH(1), color);
			GAP(3);
			print(SH(1), color);
			break;
		}
	}
	if (ch == 'n') {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 2:
			print(SH(2), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(1);
			print(SH(2), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		}
	}
	if (ch == 'o') {
		switch (line) {
		case 1:
			GAP(1);
			print(SH(2), color);
			GAP(1);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			GAP(1);
			print(SH(2), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'p') {
		switch (line) {
		case 1:
			print(SH(4), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(4), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(3);
			break;
		case 5:
			print(SH(1), color);
			GAP(3);
			break;
		}
	}
	if (ch == 'r') {
		switch (line) {
		case 1:
			print(SH(4), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(4), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 5:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		}
	}
	if (ch == 's') {
		switch (line) {
		case 1:
			GAP(1);
			print(SH(3), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(3);
			break;
		case 3:
			GAP(1);
			print(SH(2), color);
			GAP(1);
			break;
		case 4:
			GAP(3);
			print(SH(1), color);
			break;
		case 5:
			print(SH(3), color);
			GAP(1);
			break;
		}
	}
	if (ch == 't') {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 3:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 4:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 5:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'u') {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			GAP(1);
			print(SH(2), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'v') {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(3);
			print(SH(1), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(3);
			print(SH(1), color);
			break;
		case 3:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 4:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 5:
			GAP(2);
			print(SH(1), color);
			GAP(2);
			break;
		}
	}
	if (ch == 'w') {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(3);
			print(SH(1), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(3);
			print(SH(1), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 5:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		}
	}
	if (ch == 'y') {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 3:
			print(SH(3), color);
			break;
		case 4:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 5:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		}
	}
}

void CharPrinter::printNum(int num, int line, int color)
{
	if (num == 0) {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 3:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 5:
			print(SH(3), color);
			break;
		}
	}
	if (num == 1) {
		switch (line) {
		case 1:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 2:
			print(SH(2), color);
			GAP(1);
			break;
		case 3:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 4:
			GAP(1);
			print(SH(1), color);
			GAP(1);
			break;
		case 5:
			print(SH(3), color);
			break;
		}
	}
	if (num == 2) {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			print(SH(3), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(2);
			break;
		case 5:
			print(SH(3), color);
			break;
		}
	}
	if (num == 3) {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			GAP(1);
			print(SH(2), color);
			break;
		case 4:
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			print(SH(3), color);
			break;
		}
	}
	if (num == 4) {
		switch (line) {
		case 1:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 3:
			print(SH(3), color);
			break;
		case 4:
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			GAP(2);
			print(SH(1), color);
			break;
		}
	}
	if (num == 5) {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			break;
		case 3:
			print(SH(3), color);
			break;
		case 4:
			GAP(2);
			print(SH(1), color);
			break;
		case 5:
			print(SH(3), color);
			break;
		}
	}
	if (num == 6) {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(2);
			break;
		case 3:
			print(SH(3), color);
			break;
		case 4:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 5:
			print(SH(3), color);
			break;
		}
	}
	if (num == 7) {
		switch (line) {
		case 1:
			print(SH(3), color);
			break;
		case 2:
		case 4:
		case 5:
			GAP(2);
			print(SH(1), color);
			break;
		case 3:
			GAP(1);
			print(SH(2), color);
			break;
		}
	}
	if (num == 8) {
		switch (line) {
		case 1:
		case 3:
		case 5:
			print(SH(3), color);
			break;
		case 2:
		case 4:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		}
	}
	if (num == 9) {
		switch (line) {
		case 1:
		case 5:
		case 3:
			print(SH(3), color);
			break;
		case 2:
			print(SH(1), color);
			GAP(1);
			print(SH(1), color);
			break;
		case 4:
			GAP(2);
			print(SH(1), color);
			break;
		}
	}
}

void CharPrinter::printNullNum(int num, int line, int color)
{
	if (num == 0) {
		GAP(3);
	}
	else {
		printNum(num, line, color);
	}
}




