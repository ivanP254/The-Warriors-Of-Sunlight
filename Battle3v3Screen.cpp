#include "Battle3v3Screen.h"

Battle3v3Screen::Battle3v3Screen(Adapter* a)
{
	ad = a;
}

void Battle3v3Screen::printMenu(int state, int activeUnit)
{

	std::vector<std::vector<Unit>> armyLeft = std::vector<std::vector<Unit>> {
		getLeftArmy(0), 
		getLeftArmy(1), 
		getLeftArmy(2)
	};
	std::vector<std::vector<Unit>> armyRight = std::vector<std::vector<Unit>> {
		getRightArmy(0),
		getRightArmy(1),
		getRightArmy(2)
	};

	std::vector<int> leftSize = std::vector<int>{
		(int)armyLeft[0].size(),
		(int)armyLeft[1].size(),
		(int)armyLeft[2].size()
	};
	std::vector<int> rightSize = std::vector<int>{
		(int)armyRight[0].size(),
		(int)armyRight[1].size(),
		(int)armyRight[2].size()
	};
	for (int i = 0; i < 3; i++) {
		if (leftSize[i] > 8) { leftSize[i] = 8; };
		if (rightSize[i] > 8) { rightSize[i] = 8; };
	}

	if (state == IDLE) {
		system("cls");
		printLn(' ');
		for (int i = 0; i < 3; i++) {
			for (int line = 1; line <= 8; line++) {
				GAP(4);
				for (int j = 0; j < 8 - leftSize[i]; j++) {
					GAP(9);
				}
				for (int unitIdx = leftSize[i] - 1; unitIdx >= 0; unitIdx--) {
					printUnit(armyLeft[i][unitIdx].type, line, IDLE, 0, armyLeft[i][unitIdx].isBoosted, LOOK_RIGHT, armyLeft[i][unitIdx].hp);
					GAP(3);
				}
				GAP(1);
				print(SH(1), COLOR_RED);
				GAP(4);
				for (int unitIdx = 0; unitIdx < rightSize[i]; unitIdx++) {
					printUnit(armyRight[i][unitIdx].type, line, IDLE, 0, armyRight[i][unitIdx].isBoosted, LOOK_LEFT, armyRight[i][unitIdx].hp);
					GAP(3);
				}
				GAP(2);
				printLn(' ');
			}
			printLn(' ');
			printLn(' ');
		}
		
		Sleep(500);
	}
	else if (state == ATTACK)
	{
		for (int frame = 1; frame <= 4; frame++) {
			system("cls");
			printLn(' ');
			for (int army = 0; army < 3; army++) {
				for (int line = 1; line <= 8; line++) {
					GAP(4);
					for (int i = 0; i < 8 - leftSize[army]; i++) {
						GAP(9);
					}
					for (int unitIdx = leftSize[army] - 1; unitIdx > 0; unitIdx--) {
						printUnit(armyLeft[army][unitIdx].type, line, IDLE, 0, armyLeft[army][unitIdx].isBoosted, LOOK_RIGHT, armyLeft[army][unitIdx].hp);
						GAP(3);
					}
					printUnit(armyLeft[army][0].type, line, ATTACK, frame, armyLeft[army][0].isBoosted, LOOK_RIGHT, armyLeft[army][0].hp);
					GAP(3);
					GAP(1);
					print(SH(1), COLOR_RED);
					GAP(4);
					printUnit(armyRight[army][0].type, line, ATTACK, frame, armyRight[army][0].isBoosted, LOOK_LEFT, armyRight[army][0].hp);
					GAP(3);
					for (int unitIdx = 1; unitIdx < rightSize[army]; unitIdx++) {
						printUnit(armyRight[army][unitIdx].type, line, IDLE, 0, armyRight[army][unitIdx].isBoosted, LOOK_LEFT, armyRight[army][unitIdx].hp);
						GAP(3);
					}
					GAP(2);
					printLn(' ');
				}
				printLn(' ');
				printLn(' ');
			}
			
			Sleep(500);
		}
	}
	else if (state == SPECIAL)
	{
		for (int frame = 1; frame <= 4; frame++) {
			system("cls");
			printLn(' ');
			for (int army = 0; army < 3; army++) {
				for (int line = 1; line <= 8; line++) {
					GAP(4);
					for (int i = 0; i < 8 - leftSize[army]; i++) {
						GAP(9);
					}
					for (int unitIdx = leftSize[army] - 1; unitIdx >= 0; unitIdx--) {
						if (unitIdx == activeUnit) {
							printUnit(armyLeft[army][unitIdx].type, line, SPECIAL, frame, armyLeft[army][unitIdx].isBoosted, LOOK_RIGHT, armyLeft[army][unitIdx].hp);
							GAP(3);
						}
						else {
							printUnit(armyLeft[army][unitIdx].type, line, IDLE, 0, armyLeft[army][unitIdx].isBoosted, LOOK_RIGHT, armyLeft[army][unitIdx].hp);
							GAP(3);
						}
					}
					GAP(1);
					print(SH(1), COLOR_RED);
					GAP(4);
					for (int unitIdx = 0; unitIdx < rightSize[army]; unitIdx++) {
						if (unitIdx == activeUnit) {
							printUnit(armyRight[army][unitIdx].type, line, SPECIAL, frame, armyRight[army][unitIdx].isBoosted, LOOK_LEFT, armyRight[army][unitIdx].hp);
							GAP(3);
						}
						else {
							printUnit(armyRight[army][unitIdx].type, line, IDLE, 0, armyRight[army][unitIdx].isBoosted, LOOK_LEFT, armyRight[army][unitIdx].hp);
							GAP(3);
						}
					}
					GAP(2);
					printLn(' ');
				}
				printLn(' ');
				printLn(' ');
			}
			Sleep(500);
		}
	}
}

std::vector<Unit> Battle3v3Screen::getLeftArmy(int army)
{
	return ad->getLeftArmy(army);
}

std::vector<Unit> Battle3v3Screen::getRightArmy(int army)
{
	return ad->getRightArmy(army);
}
