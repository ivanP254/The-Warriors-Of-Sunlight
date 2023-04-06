#include "VersusMenu.h"


VersusMenu::VersusMenu()
{
	versusChooseState = VERSUS_STATE_1V1;
}

void VersusMenu::buttonDown()
{
	versusChooseState++;
	if (versusChooseState > 3) {
		versusChooseState = 3;
	}
}

void VersusMenu::buttonUp()
{
	versusChooseState--;
	if (versusChooseState < 1) {
		versusChooseState = 1;
	}
}


void VersusMenu::printMenu()
{
	system("cls");

	// upper line
	printLn(' '); //1
	GAP(1);
	printLn(std::string(110, char(64)), COLOR_RED);// 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(108);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(106, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 4
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(104);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 5


	// "new-game" text
	for (int i = 1; i <= 5; i++) {
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(20);				// gap b4
		printChar('n', i, COLOR_BLUE);
		GAP(3);
		printChar('e', i, COLOR_BLUE);
		GAP(3);
		printChar('w', i, COLOR_BLUE);
		GAP(21);				// gap betwen
		printChar('g', i, COLOR_BLUE);
		GAP(3);
		printChar('a', i, COLOR_BLUE);
		GAP(3);
		printChar('m', i, COLOR_BLUE);
		GAP(3);
		printChar('e', i, COLOR_BLUE);
		GAP(20);				// gap after
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED);
	}		// 1

	// line between "new game" and "choose versus"
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(104);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(106, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(108);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(106, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 4
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(104);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 5



	// "choose versus" text
	for (int i = 1; i <= 5; i++) {
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(3);
		printChar('c', i, COLOR_BLUE);
		GAP(2);
		printChar('h', i, COLOR_BLUE);
		GAP(2);
		printChar('o', i, COLOR_BLUE);
		GAP(2);
		printChar('o', i, COLOR_BLUE);
		GAP(2);
		printChar('s', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);
		GAP(6);
		printChar('v', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);
		GAP(2);
		printChar('r', i, COLOR_BLUE);
		GAP(2);
		printChar('s', i, COLOR_BLUE);
		GAP(2);
		printChar('u', i, COLOR_BLUE);
		GAP(2);
		printChar('s', i, COLOR_BLUE);
		GAP(6);
		printChar('t', i, COLOR_BLUE);
		GAP(2);
		printChar('y', i, COLOR_BLUE);
		GAP(2);
		printChar('p', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);
		GAP(3);
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED);
	}
	

	// line between "choose versus" and "1v1"
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(104);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(106, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(108);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(13, char(64)), COLOR_RED);
	GAP(1);
	print(std::string(92, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 4
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(11);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(90);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 5

	// "1v1" text
	for(int i = 1; i <= 5; i++) {
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		if (versusChooseState == VERSUS_STATE_1V1) {
			switch (i)
			{
			case 1:
				GAP(2);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(4);
				break;
			case 2:
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				break;
			case 3:
				GAP(4);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(2);
				break;
			case 4:
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				break;
			case 5:
				GAP(2);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(4);
				break;
			}
		}
		else { GAP(11); }
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(2);
		printChar('o', i, COLOR_BLUE);
		GAP(2);
		printChar('n', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);	// one
		GAP(5);
		printChar('v', i, COLOR_BLUE);
		GAP(1);
		printChar('s', i, COLOR_BLUE);		// v.s.
		GAP(5);
		printChar('o', i, COLOR_BLUE);
		GAP(2);
		printChar('n', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);	// one
		GAP(38);
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED);
	}
			

	// line between "1v1" and "3v3"
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(11);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(90);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(13, char(64)), COLOR_RED);
	GAP(1);
	print(std::string(92, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(108);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(13, char(64)), COLOR_RED);
	GAP(1);
	print(std::string(92, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 4
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(11);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(90);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 5

	// "3v3" text
	for (int i = 1; i <= 5; i++) {
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		if (versusChooseState == VERSUS_STATE_3V3) {
			switch (i)
			{
			case 1:
				GAP(2);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(4);
				break;
			case 2:
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				break;
			case 3:
				GAP(4);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(2);
				break;
			case 4:
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				break;
			case 5:
				GAP(2);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(4);
				break;
			}
		}
		else { GAP(11); }
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(2);
		printChar('t', i, COLOR_BLUE);
		GAP(2);
		printChar('h', i, COLOR_BLUE);
		GAP(2);
		printChar('r', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);	// three
		GAP(5);
		printChar('v', i, COLOR_BLUE);
		GAP(1);
		printChar('s', i, COLOR_BLUE);		// v.s.
		GAP(5);
		printChar('t', i, COLOR_BLUE);
		GAP(2);
		printChar('h', i, COLOR_BLUE);
		GAP(2);
		printChar('r', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);
		GAP(2);
		printChar('e', i, COLOR_BLUE);	// three
		GAP(18);
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED);
	}
	
	// line between "3v3" and "allvall"
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(11);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(90);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(13, char(64)), COLOR_RED);
	GAP(1);
	print(std::string(92, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(108);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(13, char(64)), COLOR_RED);
	GAP(1);
	print(std::string(92, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 4
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(11);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(90);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 5

	// "allvall" text
	for (int i = 1; i <= 5; i++) {
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		if (versusChooseState == VERSUS_STATE_AVA) {
			switch (i)
			{
			case 1:
				GAP(2);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(4);
				break;
			case 2:
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				break;
			case 3:
				GAP(4);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(2);
				break;
			case 4:
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				break;
			case 5:
				GAP(2);
				print(SH(1), COLOR_BLUE);
				GAP(3);
				print(SH(1), COLOR_BLUE);
				GAP(4);
				break;
			}
		}
		else { GAP(11); }
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(2);
		printChar('a', i, COLOR_BLUE);
		GAP(2);
		printChar('l', i, COLOR_BLUE);
		GAP(2);
		printChar('l', i, COLOR_BLUE);	// all
		GAP(5);
		printChar('v', i, COLOR_BLUE);
		GAP(1);
		printChar('s', i, COLOR_BLUE);		// v.s.
		GAP(5);
		printChar('a', i, COLOR_BLUE);
		GAP(2);
		printChar('l', i, COLOR_BLUE);
		GAP(2);
		printChar('l', i, COLOR_BLUE);	// all
		GAP(36);
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED);
	}
				

	// bottom line
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(11);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(90);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(13, char(64)), COLOR_RED);
	GAP(1);
	print(std::string(92, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(108);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	printLn(std::string(110, char(64)), COLOR_GREEN); // 4

}


int VersusMenu::getState()
{
	return versusChooseState;
}
