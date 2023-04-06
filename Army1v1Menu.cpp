#include "Army1v1Menu.h"


Army1v1Menu::Army1v1Menu(Adapter* ad)
{
	a = ad;
	currentUnit = UNIT_INFANTRY;
}

void Army1v1Menu::printMenu()
{
	system("cls");

	// upper line
	printLn(' '); //1
	GAP(1);
	printLn(std::string(160, char(64)), COLOR_RED);// 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(158);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(124, char(64)), COLOR_RED);
	GAP(1);
	print(std::string(31, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 4
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(122);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(24);
	print(SH(1), COLOR_BLUE);
	GAP(4);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 5


	// "add units" + $$$
	int money = getMoney();

	for (int i = 1; i <= 5; i++) {
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(10);
		printChar('a', i, COLOR_BLUE);
		GAP(3);
		printChar('d', i, COLOR_BLUE);
		GAP(3);
		printChar('d', i, COLOR_BLUE);
		GAP(13);
		printChar('u', i, COLOR_BLUE);
		GAP(3);
		printChar('n', i, COLOR_BLUE);
		GAP(3);
		printChar('i', i, COLOR_BLUE);
		GAP(3);
		printChar('t', i, COLOR_BLUE);
		GAP(58);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(2);
		printNum(money / 1000 % 10, i, COLOR_BLUE);
		GAP(2);
		printNum(money / 100 % 10, i, COLOR_BLUE);
		GAP(2);
		printNum(money / 10 % 10, i, COLOR_BLUE);
		GAP(2);
		printNum(money % 10, i, COLOR_BLUE);
		GAP(2);
		// <$ sign>
		printDollar(i, COLOR_BLUE);
		// /<$ sign>
		GAP(2);
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED);
	}		




	// line between "add unit" and unit logo
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(122);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(24);
	print(SH(1), COLOR_BLUE);
	GAP(4);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(124, char(64)), COLOR_RED);
	GAP(1);
	print(std::string(31, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(158);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(156, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 4
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(7);
	print(char(64), COLOR_RED);
	GAP(11);
	print(char(64), COLOR_RED);
	GAP(121);
	print(SH(1), COLOR_BLUE);
	GAP(4);
	print(char(64), COLOR_RED);
	GAP(7);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 5

	// unit logo and name and cost
	int cost = getUnitCost(currentUnit);

	for (int i = 1; i <= 5; i++) {
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		switch (i)
		{
		case 3:
			GAP(5);
			print(SH(1), COLOR_RED);
			GAP(1);
			break;
		case 4:
			GAP(4);
			print(SH(2), COLOR_RED);
			GAP(1);
			break;
		case 5:
			GAP(3);
			print(SH(1), COLOR_RED);
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(1);
			break;
		default:
			GAP(7);
			break;
		}
		print(char(64), COLOR_RED);
		GAP(3);
		printUnit(currentUnit, i);
		GAP(3);
		print(char(64), COLOR_RED);
		GAP(4);
		switch (currentUnit)
		{			// unit name here!!!
		case UNIT_INFANTRY:
			printChar('i', i, COLOR_BLACK);
			GAP(2);
			printChar('n', i, COLOR_BLACK);
			GAP(2);
			printChar('f', i, COLOR_BLACK);
			GAP(2);
			printChar('a', i, COLOR_BLACK);
			GAP(2);
			printChar('n', i, COLOR_BLACK);
			GAP(2);
			printChar('t', i, COLOR_BLACK);
			GAP(2);
			printChar('r', i, COLOR_BLACK);
			GAP(2);
			printChar('y', i, COLOR_BLACK);
			GAP(58);
			break;
		case UNIT_MAGE:
			printChar('m', i, COLOR_BLACK);
			GAP(2);
			printChar('a', i, COLOR_BLACK);
			GAP(2);
			printChar('g', i, COLOR_BLACK);
			GAP(2);
			printChar('e', i, COLOR_BLACK);
			GAP(78);
			break;
		case UNIT_ARCHER:
			printChar('a', i, COLOR_BLACK);
			GAP(2);
			printChar('r', i, COLOR_BLACK);
			GAP(2);
			printChar('c', i, COLOR_BLACK);
			GAP(2);
			printChar('h', i, COLOR_BLACK);
			GAP(2);
			printChar('e', i, COLOR_BLACK);
			GAP(2);
			printChar('r', i, COLOR_BLACK);
			GAP(67);
			break;
		case UNIT_HEALER:
			printChar('h', i, COLOR_BLACK);
			GAP(2);
			printChar('e', i, COLOR_BLACK);
			GAP(2);
			printChar('a', i, COLOR_BLACK);
			GAP(2);
			printChar('l', i, COLOR_BLACK);
			GAP(2);
			printChar('e', i, COLOR_BLACK);
			GAP(2);
			printChar('r', i, COLOR_BLACK);
			GAP(68);
			break;
		case UNIT_KNIGHT:
			printChar('k', i, COLOR_BLACK);
			GAP(2);
			printChar('n', i, COLOR_BLACK);
			GAP(2);
			printChar('i', i, COLOR_BLACK);
			GAP(2);
			printChar('g', i, COLOR_BLACK);
			GAP(2);
			printChar('h', i, COLOR_BLACK);
			GAP(2);
			printChar('t', i, COLOR_BLACK);
			GAP(69);
			break;
		case UNIT_TUMBLEWEED:
			printChar('t', i, COLOR_BLACK);
			GAP(2);
			printChar('w', i, COLOR_BLACK);
			GAP(2);
			printChar('e', i, COLOR_BLACK);
			GAP(2);
			printChar('e', i, COLOR_BLACK);
			GAP(2);
			printChar('d', i, COLOR_BLACK);
			GAP(74);
			break;
		default:
			GAP(103);
			break;
		}
		printNullNum(cost / 100 % 10, i, COLOR_BLUE); // 0X00
		GAP(2);
		printNum(cost / 10 % 10, i, COLOR_BLUE);// 00X0
		GAP(2);
		printNum(cost % 10, i, COLOR_BLUE);	// 000X
		// <$>
		GAP(2);
		printDollar(i, COLOR_BLUE);
		GAP(2);
		// </$>
		print(char(64), COLOR_RED);
		switch (i)
		{
		case 3:
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(5);
			break;
		case 4:
			GAP(1);
			print(SH(2), COLOR_RED);
			GAP(4);
			break;
		case 5:
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(3);
			break;
		default:
			GAP(7);
			break;
		}
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED); // 1
	}




	// line between unit logo and unit desc
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(2);
	print(SH(1), COLOR_RED);
	GAP(2);
	print(SH(1), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(11);
	print(char(64), COLOR_RED);
	GAP(121);
	print(SH(1), COLOR_BLUE);
	GAP(4);
	print(char(64), COLOR_RED);
	GAP(1);
	print(SH(1), COLOR_RED);
	GAP(2);
	print(SH(1), COLOR_RED);
	GAP(2);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(SH(1), COLOR_RED);
	GAP(3);
	print(SH(1), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	print(std::string(138, char(64)), COLOR_RED);
	print(char(64), COLOR_RED);
	GAP(1);
	print(SH(1), COLOR_RED);
	GAP(3);
	print(SH(1), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(2);
	print(SH(1), COLOR_RED);
	GAP(2);
	print(SH(1), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(138);
	print(char(64), COLOR_RED);
	GAP(1);
	print(SH(1), COLOR_RED);
	GAP(2);
	print(SH(1), COLOR_RED);
	GAP(2);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 3


	// line with stats
	int atk = getUnitAtk(currentUnit);
	int def = getUnitDef(currentUnit);
	int hp = getUnitHp(currentUnit);

	for (int i = 1; i <= 5; i++) {

		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		switch (i)
		{
		case 1:
			GAP(3);
			print(SH(1), COLOR_RED);
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(1);
			break;
		case 2:
			GAP(4);
			print(SH(2), COLOR_RED);
			GAP(1);
			break;
		case 3:
			GAP(5);
			print(SH(1), COLOR_RED);
			GAP(1);
			break;
		default:
			GAP(7);
			break;
		}
		print(char(64), COLOR_RED);
		// here some shit about stats
		GAP(7);	

		printNullNum(atk / 10 % 10, i, COLOR_BLACK);	// 00X0
		GAP(2);
		printNum(atk % 10, i, COLOR_BLACK);			// 000X
		GAP(2);
		printSword(i, COLOR_BLACK);

		GAP(38);

		printNullNum(def / 10 % 10, i, COLOR_BLACK);	// 00X0
		GAP(2);
		printNum(def % 10, i, COLOR_BLACK);			// 000X
		GAP(2);
		printShield(i, COLOR_BLACK);
		
		GAP(38);

		printNullNum(hp / 10 % 10, i, COLOR_BLACK);		// 00X0
		GAP(2);
		printNum(hp % 10, i, COLOR_BLACK);			// 000X
		GAP(2);
		printHeart(i, COLOR_BLACK);
		
		GAP(12);

		print(char(64), COLOR_RED); 
		switch (i)
		{
		case 1:
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(3);
			break;
		case 2:
			GAP(1);
			print(SH(2), COLOR_RED);
			GAP(4);
			break;
		case 3:
			GAP(1);
			print(SH(1), COLOR_RED);
			GAP(5);
			break;
		default:
			GAP(7);
			break;
		}
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED);
	}


	// line between stats and army
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(7);
	print(char(64), COLOR_RED);
	GAP(138);
	print(char(64), COLOR_RED);
	GAP(7);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(156, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(158);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(156, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 4
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(154);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 5


	// army line
	std::vector<int> army = getArmy();

	for (int i = 1; i <= 5; i++) {
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(1);
		print(char(64), COLOR_RED);
		GAP(2);
		printPlus(army.size() > 13, i, COLOR_BLACK);
		GAP(2);

		if (army.size() > 13) {
			for (int unit = army.size() - 13; unit < army.size(); unit++) {
				GAP(3);
				printUnit(army[unit], i);
				GAP(3);
			}
		}
		else {
			for (int unit = 0; unit < army.size(); unit++) {
				GAP(3);
				printUnit(army[unit], i);
				GAP(3);
			}
			GAP((13 - army.size()) * 11);
		}

		GAP(2);
		print(char(64), COLOR_RED);
		GAP(1);
		printLn(char(64), COLOR_RED);
	}

	// line after army
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(154);
	print(char(64), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 1
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(1);
	print(std::string(156, char(64)), COLOR_RED);
	GAP(1);
	printLn(char(64), COLOR_RED); // 2
	GAP(1);
	print(char(64), COLOR_RED);
	GAP(158);
	printLn(char(64), COLOR_RED); // 3
	GAP(1);
	printLn(std::string(160, char(64)), COLOR_RED); // 4 

}

void Army1v1Menu::buttonRight()
{
	currentUnit++;
	if (currentUnit > 5) {
		currentUnit = 1;
	}
}

void Army1v1Menu::buttonLeft()
{
	currentUnit--;
	if (currentUnit < 1) {
		currentUnit = 5;
	}
}

int Army1v1Menu::getMoney()
{
	return a->getCurrentMoney();
}

int Army1v1Menu::getUnitCost(int unit)
{
	return(a->getUnitCost(unit));
}

int Army1v1Menu::getUnitHp(int unit)
{
	return(a->getUnitHp(unit));
}

int Army1v1Menu::getUnitAtk(int unit)
{
	return(a->getUnitAtk(unit));
}

int Army1v1Menu::getUnitDef(int unit)
{
	return(a->getUnitDef(unit));
}

std::vector<int> Army1v1Menu::getArmy()
{
	return a->getCurrentArmy();
		
}

void Army1v1Menu::addUnit() {
	a->addUnit(currentUnit);
}