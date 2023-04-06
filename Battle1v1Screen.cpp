#include "Battle1v1Screen.h"

Battle1v1Screen::Battle1v1Screen(Adapter* a)
{
	ad = a;
}

void Battle1v1Screen::printMenu(int state, int activeUnit)
{
	auto armyLeft = getLeftArmy();
	auto armyRight = getRightArmy();
	int leftSize = armyLeft.size();
	if (leftSize > 8) { leftSize = 8; };
	int rightSize = armyRight.size();
	if (rightSize > 8) { rightSize = 8; };

	if (state == IDLE) {
		system("cls");
		printLn(' ');
		
		for (int line = 1; line <= 8; line++) {
			GAP(4);
			for (int i = 0; i < 8 - leftSize; i++) {
				GAP(9);
			}
			for (int unitIdx = leftSize - 1; unitIdx >= 0; unitIdx--) {
				printUnit(armyLeft[unitIdx].type, line, IDLE, 0, armyLeft[unitIdx].isBoosted, LOOK_RIGHT, armyLeft[unitIdx].hp);
				GAP(3);
			}
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(4);
			for (int unitIdx = 0; unitIdx <rightSize; unitIdx++) {
				printUnit(armyRight[unitIdx].type, line, IDLE, 0, armyRight[unitIdx].isBoosted, LOOK_LEFT, armyRight[unitIdx].hp);
				GAP(3);
			}
			GAP(2);
			printLn(' ');
		}
		Sleep(500);
	}
	else if(state == ATTACK)
	{
		for (int frame = 1; frame <= 4; frame++) {
			system("cls");
			printLn(' ');
			for (int line = 1; line <= 8; line++) {
				GAP(4);
				for (int i = 0; i < 8 - leftSize; i++) {
					GAP(9);
				}
				for (int unitIdx = leftSize - 1; unitIdx > 0; unitIdx--) {
					printUnit(armyLeft[unitIdx].type, line, IDLE, 0, armyLeft[unitIdx].isBoosted, LOOK_RIGHT, armyLeft[unitIdx].hp);
					GAP(3);
				}
				printUnit(armyLeft[0].type, line, ATTACK, frame, armyLeft[0].isBoosted, LOOK_RIGHT, armyLeft[0].hp);
				GAP(3);
				GAP(1);
				print(SH(1), COLOR_RED);
				GAP(4);
				printUnit(armyRight[0].type, line, ATTACK, frame, armyRight[0].isBoosted, LOOK_LEFT, armyRight[0].hp);
				GAP(3);
				for (int unitIdx = 1; unitIdx < rightSize; unitIdx++) {
					printUnit(armyRight[unitIdx].type, line, IDLE, 0, armyRight[unitIdx].isBoosted, LOOK_LEFT, armyRight[unitIdx].hp);
					GAP(3);
				}
				GAP(2);
				printLn(' ');
			}
			Sleep(500);
		}
			printMenu(IDLE);
	}
	else if (state == SPECIAL)
	{
		for (int frame = 1; frame <= 4; frame++) {
			system("cls");
			printLn(' ');
			for (int line = 1; line <= 8; line++) {
				GAP(4);
				for (int i = 0; i < 8 - leftSize; i++) {
					GAP(9);
				}
				for (int unitIdx = leftSize - 1; unitIdx >= 0; unitIdx--) {
					if (unitIdx == activeUnit) {
						printUnit(armyLeft[unitIdx].type, line, SPECIAL, frame, armyLeft[unitIdx].isBoosted, LOOK_RIGHT, armyLeft[unitIdx].hp);
						GAP(3);
					}
					else {
						printUnit(armyLeft[unitIdx].type, line, IDLE, 0, armyLeft[unitIdx].isBoosted, LOOK_RIGHT, armyLeft[unitIdx].hp);
						GAP(3);
					}
				}
				GAP(1);
				print(SH(1), COLOR_RED);
				GAP(4);
				for (int unitIdx = 0; unitIdx < rightSize; unitIdx++) {
					if (unitIdx == activeUnit) {
						printUnit(armyRight[unitIdx].type, line, SPECIAL, frame, armyRight[unitIdx].isBoosted, LOOK_LEFT, armyRight[unitIdx].hp);
						GAP(3);
					}
					else {
						printUnit(armyRight[unitIdx].type, line, IDLE, 0, armyRight[unitIdx].isBoosted, LOOK_LEFT, armyRight[unitIdx].hp);
						GAP(3);
					}
				}
				GAP(2);
				printLn(' ');
			}
			Sleep(500);
		}
			printMenu(IDLE);
	}
	
}

std::vector<Unit> Battle1v1Screen::getLeftArmy()
{
	return ad->getLeftArmy();
}

std::vector<Unit> Battle1v1Screen::getRightArmy()
{
	return ad->getRightArmy();
}
