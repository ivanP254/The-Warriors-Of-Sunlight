#include "BattlePrinter.h"

void BattlePrinter::printUnit(int unit, int line, int movingType, int frame, bool isBoosted, int side, int hp)
{
	switch (unit)
	{

	case UNIT_INFANTRY:
		if (movingType == IDLE) {
			switch (line) {
			case 1:
				if (side == LOOK_RIGHT) {
					print(" ()  ");
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print("  () ");
				}
				break;
			case 2:
				if (side == LOOK_RIGHT) {
					print("/##\\ ");
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(" /##\\");
				}
				break;
			case 3:
				if (side == LOOK_RIGHT) {
					print(char(179));
					print("##");
					print(char(179));
					GAP(1);
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					GAP(1);
					print(char(179));
					print("##");
					print(char(179));
				}
				break;
			case 4:
			case 5:
				if (side == LOOK_RIGHT) {
					GAP(1);
					print(char(179));
					print(char(179));
					GAP(2);
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					GAP(2);
					print(char(179));
					print(char(179));
					GAP(1);
				}
				break;
			}
		}
		if (movingType == SPECIAL) {
			switch (frame)
			{
			case 1:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\");
						print("[]", COLOR_BLUE);
						print("/");
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print("\\");
						print("[]", COLOR_BLUE);
						print("/");
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()");
						print("[]", COLOR_BLUE);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("[]", COLOR_BLUE);
						print("() ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("\\//");
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print("\\\\/");
						GAP(1);
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("##");
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print("##");
						GAP(1);
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 3:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("\\//");
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print("\\\\/");
						GAP(1);
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("##");
						GAP(1);
						GAP(2);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print("##");
						GAP(1);
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						GAP(2);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("##");
						print(char(179));
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print(char(179));
						print("##");
						print(char(179));
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						GAP(2);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		if (movingType == ATTACK) {
			switch (frame)
			{
			case 1:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\");
						print(char(197));
						print(char(196));
						print(char(179));
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print(char(179));
						print(char(196));
						print(char(197));
						print("/");
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						GAP(2);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print(" \\#\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /#/ ");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("#\\");
						print(char(197));
						print(char(196));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(196));
						print(char(197));
						print("/#");
						GAP(1);
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 3:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\");
						print(char(197));
						print(char(196));
						print(char(179));
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print(char(179));
						print(char(196));
						print(char(197));
						print("/");
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						GAP(2);
					}
					if (side == LOOK_LEFT) {
						GAP(2);
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("##");
						print(char(179));
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print(char(179));
						print("##");
						print(char(179));
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						GAP(2);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		break;


	case UNIT_MAGE:
		if (movingType == IDLE) {
			switch (line) {
			case 1:
				if (side == LOOK_RIGHT) {
					print(" () X ");
				}
				if (side == LOOK_LEFT) {
					print(" X () ");
				}
				break;
			case 2:
				if (side == LOOK_RIGHT) {
					print("/##\\");
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					print("/##\\");
				}
				break;
			case 3:
				if (side == LOOK_RIGHT) {
					print(char(179));
					print("## ");
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					print(" ##");
					print(char(179));
				}
				break;
			case 4:
			case 5:
				if (side == LOOK_RIGHT) {
					GAP(1);
					print(char(179));
					print(char(179));
					GAP(1);
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					GAP(1);
					print(char(179));
					print(char(179));
					GAP(1);
				}
				break;
			}
		}
		if (movingType == SPECIAL) {
			switch (frame)
			{
			case 1:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () X ");
					}
					if (side == LOOK_LEFT) {
						print(" X () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(3);
					}
					if (side == LOOK_LEFT) {
						GAP(3);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("()");
						print('(', COLOR_RED);
						print('X');
						print(')', COLOR_PURPLE);
					}
					if (side == LOOK_LEFT) {
						print('(', COLOR_PURPLE);
						print('X');
						print(')', COLOR_RED);
						print("()");
						GAP(1);
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(3);
					}
					if (side == LOOK_LEFT) {
						GAP(3);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 3:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("()");
						print('(', COLOR_PURPLE);
						print('X');
						print(')', COLOR_RED);
					}
					if (side == LOOK_LEFT) {
						print('(', COLOR_RED);
						print('X');
						print(')', COLOR_PURPLE);
						print("()");
						GAP(1);
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(3);
					}
					if (side == LOOK_LEFT) {
						GAP(3);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () X ");
					}
					if (side == LOOK_LEFT) {
						print(" X () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(3);
					}
					if (side == LOOK_LEFT) {
						GAP(3);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		if (movingType == ATTACK) {
			switch (frame)
			{
			case 1:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () X ");
					}
					if (side == LOOK_LEFT) {
						print(" X () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\");
						print(char(197));
						print(char(196)); 
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(196));
						print(char(197));
						print("/");
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () X ");
					}
					if (side == LOOK_LEFT) {
						print(" X () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("\\#\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/#/");
						GAP(1);
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("#\\");
						print(char(197));
						print(char(196));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(196));
						print(char(197));
						print("/#");
						GAP(1);
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 3:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () X ");
					}
					if (side == LOOK_LEFT) {
						print(" X () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\");
						print(char(197));
						print(char(196));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(196));
						print(char(197));
						print("/");
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () X ");
					}
					if (side == LOOK_LEFT) {
						print(" X () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		break;
		

	case UNIT_ARCHER:
		if (movingType == IDLE) {
			switch (line)
			{
			case 1:
				if (side == LOOK_RIGHT) {
					print(" ()\\ ");
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(" /() ");
				}
				break;
			case 2:
				if (side == LOOK_RIGHT) {
					print("/##");
					print(char(179));
					print('\\');
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print('/');
					print(char(179));
					print("##\\");
				}
				break;
			case 3:
				if (side == LOOK_RIGHT) {
					print(char(179));
					print("##");
					print(char(179));
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					print(char(179));
					print("##");
					print(char(179));
				}
				break;
			case 4:
				if (side == LOOK_RIGHT) {
					GAP(1);
					print(char(179));
					print(char(179));
					print(char(179));
					print('/');
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print('\\');
					print(char(179));
					print(char(179));
					print(char(179));
					GAP(1);
				}
				break;
			case 5:
				if (side == LOOK_RIGHT) {
					GAP(1);
					print(char(179));
					print(char(179));
					print('/');
					GAP(1);
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					GAP(1);
					print('\\');
					print(char(179));
					print(char(179));
					GAP(1);
				}
				break;
			}
		}
		if (movingType == SPECIAL) {
			switch (frame)
			{
			case 1:
				switch (line)
				{
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /() ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##/\\");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("/\\##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\>");
						print(char(196));
						print(char(196));
						print(">");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("<");
						print(char(196));
						print(char(196));
						print("</");
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print("\\/");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("\\/");
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line)
				{
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /() ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##/\\");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("/\\##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\#>");
						print(char(196));
						print(char(196));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(196));
						print(char(196));
						print("<#/");
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print("\\/");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("\\/");
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 3:
				switch (line)
				{
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /() ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##/\\");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("/\\##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\##>");
						print(char(196));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(196));
						print("<##/");
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print("\\/");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("\\/");
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line)
				{
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /() ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(179));
						print('\\');
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print('/');
						print(char(179));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("##");
						print(char(179));
						print(">");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("<");
						print(char(179));
						print("##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		if (movingType == ATTACK) {
			switch (frame)
			{
			case 1:
			case 3:
				switch (line)
				{
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /() ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(179));
						print("\\");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("/");
						print(char(179));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\");
						print(char(197));
						print(char(196));
						print(char(179));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print(char(196));
						print(char(197));
						print("/");
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print(char(179));
						print("/");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("\\");
						print(char(179));
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line)
				{
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /() ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("\\#");
						print(char(179));
						print('\\');
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print('/');
						print(char(179));
						print("#/");
						GAP(1);
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("#\\");
						print(char(197));
						print(char(196));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(196));
						print(char(197));
						print("/#");
						GAP(1);
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line)
				{
				case 1:
					if (side == LOOK_RIGHT) {
						print(" ()\\ ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(" /() ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(179));
						print('\\');
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print('/');
						print(char(179));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("##");
						print(char(179));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print("##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						print('/');
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print('\\');
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		break;


	case UNIT_HEALER:
		if (movingType == IDLE) {
			switch (line) {
			case 1:
				if (side == LOOK_RIGHT) {
					print(" () O ");
				}
				if (side == LOOK_LEFT) {
					print(" O () ");
				}
				break;
			case 2:
				if (side == LOOK_RIGHT) {
					print("/##\\");
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					print("/##\\");
				}
				break;
			case 3:
				if (side == LOOK_RIGHT) {
					print(char(179));
					print("## ");
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					print(" ##");
					print(char(179));
				}
				break;
			case 4:
			case 5:
				if (side == LOOK_RIGHT) {
					GAP(1);
					print(char(179));
					print(char(179));
					GAP(1);
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					GAP(1);
					print(char(179));
					print(char(179));
					GAP(1);
				}
				break;
			}
		}
		if (movingType == SPECIAL) {
			switch (frame)
			{
			case 1:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () O ");
					}
					if (side == LOOK_LEFT) {
						print(" O () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(3);
					}
					if (side == LOOK_LEFT) {
						GAP(3);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("()");
						print('(', COLOR_BLUE);
						print('O');
						print(')', COLOR_GREEN);
					}
					if (side == LOOK_LEFT) {
						print('(', COLOR_GREEN);
						print('O');
						print(')', COLOR_BLUE);
						print("()");
						GAP(1);
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(3);
					}
					if (side == LOOK_LEFT) {
						GAP(3);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 3:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("()");
						print('(', COLOR_GREEN);
						print('O');
						print(')', COLOR_BLUE);
					}
					if (side == LOOK_LEFT) {
						print('(', COLOR_BLUE);
						print('O');
						print(')', COLOR_GREEN);
						print("()");
						GAP(1);
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(3);
					}
					if (side == LOOK_LEFT) {
						GAP(3);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () O ");
					}
					if (side == LOOK_LEFT) {
						print(" O () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(3);
					}
					if (side == LOOK_LEFT) {
						GAP(3);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		if (movingType == ATTACK) {
			switch (frame)
			{
			case 1:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () O ");
					}
					if (side == LOOK_LEFT) {
						print(" O () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\");
						print(char(197));
						print(char(196));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(196));
						print(char(197));
						print("/");
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () O ");
					}
					if (side == LOOK_LEFT) {
						print(" O () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("\\#\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/#/");
						GAP(1);
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print("#\\");
						print(char(197));
						print(char(196));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(196));
						print(char(197));
						print("/#");
						GAP(1);
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 3:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () O ");
					}
					if (side == LOOK_LEFT) {
						print(" O () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print("\\");
						print(char(197));
						print(char(196));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(196));
						print(char(197));
						print("/");
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						print(" () O ");
					}
					if (side == LOOK_LEFT) {
						print(" O () ");
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		break;


	case UNIT_KNIGHT:
		if (movingType == IDLE || movingType == SPECIAL) {
			switch (line) {
			case 1:
				if (side == LOOK_RIGHT) {
					GAP(1);
					if (isBoosted) { print("[]", COLOR_BLUE); }
					else { print("()"); }
					GAP(1);
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					GAP(1);
					if (isBoosted) { print("[]", COLOR_BLUE); }
					else { print("()"); }
					GAP(1);
				}
				break;
			case 2:
				if (side == LOOK_RIGHT) {
					print("/##\\");
					print(char(179));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(179));
					print("/##\\");
				}
				break;
			case 3:
				if (side == LOOK_RIGHT) {
					print(char(179));
					print("## ");
					print(char(197));
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					print(char(197));
					print(" ##");
					print(char(179));
				}
				break;
			case 4:
			case 5:
				if (side == LOOK_RIGHT) {
					GAP(1);
					print(char(179));
					print(char(179));
					GAP(2);
					GAP(1);
				}
				if (side == LOOK_LEFT) {
					GAP(1);
					GAP(2);
					print(char(179));
					print(char(179));
					GAP(1);
				}
				break;
			}
		}
		if (movingType == ATTACK) {
			switch (frame)
			{
			case 1:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						GAP(1);
						if (isBoosted) { print("[]", COLOR_BLUE); }
						else { print("()"); }
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						if (isBoosted) { print("[]", COLOR_BLUE); }
						else { print("()"); }
						GAP(1);
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(197));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(197));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("##  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  ##");
						print(char(179));
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 2:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						GAP(1);
						if (isBoosted) { print("[]", COLOR_BLUE); }
						else { print("()"); }
						GAP(1);
						print('/');
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print('\\');
						GAP(1);
						if (isBoosted) { print("[]", COLOR_BLUE); }
						else { print("()"); }
						GAP(1);
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##/");
						GAP(1);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(1);
						print("\\##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("#X");
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print("X#");
						print(char(179));
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 3:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						GAP(1);
						if (isBoosted) { print("[]", COLOR_BLUE); }
						else { print("()"); }
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						if (isBoosted) { print("[]", COLOR_BLUE); }
						else { print("()"); }
						GAP(1);
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##");
						print(char(196));
						print(char(197));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(197));
						print(char(196));
						print("##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("##  ");
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print("  ##");
						print(char(179));
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			case 4:
				switch (line) {
				case 1:
					if (side == LOOK_RIGHT) {
						GAP(1);
						if (isBoosted) { print("[]", COLOR_BLUE); }
						else { print("()"); }
						GAP(1);
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						GAP(1);
						if (isBoosted) { print("[]", COLOR_BLUE); }
						else { print("()"); }
						GAP(1);
					}
					break;
				case 2:
					if (side == LOOK_RIGHT) {
						print("/##\\");
						print(char(179));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(179));
						print("/##\\");
					}
					break;
				case 3:
					if (side == LOOK_RIGHT) {
						print(char(179));
						print("## ");
						print(char(197));
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						print(char(197));
						print(" ##");
						print(char(179));
					}
					break;
				case 4:
				case 5:
					if (side == LOOK_RIGHT) {
						GAP(1);
						print(char(179));
						print(char(179));
						GAP(2);
						GAP(1);
					}
					if (side == LOOK_LEFT) {
						GAP(1);
						GAP(2);
						print(char(179));
						print(char(179));
						GAP(1);
					}
					break;
				}
				break;
			}
		}
		break;
	}


	switch (line)
	{
	case 6:
		if (side == LOOK_LEFT) { GAP(1); }
		print(char(218));
		print(char(196));
		print(char(196));
		print(char(196));
		print(char(191));
		if (side == LOOK_RIGHT) { GAP(1); }
		break;
	case 7:
		if (side == LOOK_LEFT) { GAP(1); }
		print(char(179));
		if (hp < 10) { GAP(1); }
		if (hp < 100) { GAP(1); }
		print(std::to_string(hp));
		print(char(179));
		if (side == LOOK_RIGHT) { GAP(1); }
		break;
	case 8:
		if (side == LOOK_LEFT) { GAP(1); }
		print(char(192));
		print(char(196));
		print(char(196));
		print(char(196));
		print(char(217));
		if (side == LOOK_RIGHT) { GAP(1); }
		break;
	}
		
}
