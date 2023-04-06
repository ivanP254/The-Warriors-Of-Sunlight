#include "MenuPrinter.h"

void MenuPrinter::printUnit(int unit, int line)
{
	if (unit == UNIT_INFANTRY) {
		switch (line) {
		case 1:
			print(" ()  ");
			break;
		case 2:
			print("/##\\ ");
			break;
		case 3:
			print(char(179));
			print("##");
			print(char(179));
			GAP(1);
			break;
		case 4:
		case 5:
			GAP(1);
			print(char(179));
			print(char(179));
			GAP(2);
			break;
		}
	}
	if (unit == UNIT_MAGE) {
		switch (line) {
		case 1:
			print(" () X");
			break;
		case 2:
			print("/##\\");
			print(char(179));
			break;
		case 3:
			print(char(179));
			print("## ");
			print(char(179));
			break;
		case 4:
		case 5:
			GAP(1);
			print(char(179));
			print(char(179));
			GAP(1);
			print(char(179));
			break;
		}
	}
	if (unit == UNIT_ARCHER) {
		switch (line) {
		case 1:
			print(" ()\\ ");
			break;
		case 2:
			print("/##");
			print(char(179));
			print('\\');
			break;
		case 3:
			print(char(179));
			print("##");
			print(char(179));
			print(char(179));
			break;
		case 4:
			GAP(1);
			print(char(179));
			print(char(179));
			print(char(179));
			print('/');
			break;
		case 5:
			GAP(1);
			print(char(179));
			print(char(179));
			print('/');
			GAP(1);
			break;
		}
	}
	if (unit == UNIT_HEALER) {
		switch (line) {
		case 1:
			print(" () O");
			break;
		case 2:
			print("/##\\");
			print(char(179));
			break;
		case 3:
			print(char(179));
			print("## ");
			print(char(179));
			break;
		case 4:
		case 5:
			GAP(1);
			print(char(179));
			print(char(179));
			GAP(1);
			print(char(179));
			break;
		}
	}
	if (unit == UNIT_KNIGHT) {
		switch (line) {
		case 1:
			print(" () ");
			print(char(179));
			break;
		case 2:
			print("/##\\");
			print(char(179));
			break;
		case 3:
			print(char(179));
			print("## ");
			print(char(197));
			break;
		case 4:
		case 5:
			GAP(1);
			print(char(179));
			print(char(179));
			GAP(2);
			break;
		}
	}
	if (unit == UNIT_TUMBLEWEED) {
		switch (line) {
		case 1:
			print(" ()  ");
			break;
		case 2:
			print("/#");
			print(char(218));
			print(char(196));
			print(char(191));
			break;
		case 3:
			print(char(179));
			print("#");
			print(char(179));
			print('H');
			print(char(179));
			break;
		case 4:
			GAP(1);
			print(char(179));
			print(char(179));
			print('H');
			print(char(179));
			break;
		case 5:
			GAP(1);
			print(char(179));
			print(char(192));
			print(char(196));
			print(char(217));
			break;
		}
	}
}

void MenuPrinter::printDollar(int line, int color)
{

	// <$ sign>
	switch (line) {
	case 1:
		GAP(1);
		print(SH(4), color);
		break;
	case 2:
		print(SH(1), color);
		GAP(1);
		print(SH(1), color);
		GAP(2);
		break;
	case 3:
		GAP(1);
		print(SH(3), color);
		GAP(1);
		break;
	case 4:
		GAP(2);
		print(SH(1), color);
		GAP(1);
		print(SH(1), color);
		break;
	case 5:
		print(SH(4), color);
		GAP(1);
		break;
	}
	// /<$ sign>
}

void MenuPrinter::printHeart(int line, int color)
{
	switch (line) {
	case 1:
	case 4:
		GAP(1);
		print(SH(1), color);
		GAP(1);
		print(SH(1), color);
		GAP(1);
		break;
	case 2:
		print(SH(1), color);
		GAP(1);
		print(SH(1), color);
		GAP(1);
		print(SH(1), color);
		break;
	case 3:
		print(SH(1), color);
		GAP(3);
		print(SH(1), color);
		break;
	case 5:
		GAP(2);
		print(SH(1), color);
		GAP(2);
		break;
	}
}

void MenuPrinter::printSword(int line, int color)
{
	switch (line) {
	case 1:
	case 2:
	case 3:
	case 5:
		GAP(1);
		print(SH(1), color);
		GAP(1);
		break;
	case 4:
		print(SH(3), color);
		break;
	}
}

void MenuPrinter::printShield(int line, int color)
{
	switch (line) {
	case 1:
		print(SH(5), color);
		break;
	case 2:
	case 3:
		print(SH(1), color);
		GAP(3);
		print(SH(1), color);
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

void MenuPrinter::printPlus(bool isDraw, int line, int color)
{
	if (isDraw) {
		switch (line) {
		case 1:
		case 5:
			GAP(5);
			break;
		case 2:
		case 4:
			GAP(2);
			print(char(179), color);
			GAP(2);
			break;
		case 3:
			GAP(1);
			print(char(196), color);
			print(char(197), color);
			print(char(196), color);
			GAP(1);
			break;
		}
	}
	else {
		GAP(5);
	}
}

void MenuPrinter::printArrow(bool isDraw, int line, int color)
{
	if (isDraw) {
		switch (line) {
		case 1:
		case 5:
			print(SH(1), color);
			GAP(2);
			break;
		case 2:
		case 4:
			print(SH(2), color);
			GAP(1);
			break;
		case 3:
			print(SH(3), color);
			break;
		}
	}
	else {
		GAP(3);
	}
}