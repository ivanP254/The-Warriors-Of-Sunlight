#include "UserInterface.h"

UserInterface::UserInterface() {
	menu = new MenuBuilder();
	versus = new VersusMenu();
	status = 1;
	self = this;
	InputHandler::Subscribe(work);
	versus->printMenu();
}

UserInterface * UserInterface::instance()
{
	static UserInterface inst;
	return &inst;
}

void UserInterface::create(Adapter* a)
{
	adapter = a;
	gameState = GAME_STATE_NULL;
	isCreated = true;
}

UserInterface * UserInterface::getUI(Adapter *a)
{
	UserInterface *ui = instance();
	if (!ui->isCreated) {
		ui->create(a);
	}
	return ui;
}






void UserInterface::work(DWORD button)
{
	if (button == 0x26 && self->status == 1) { // arrow up + versus menu
		self->versus->buttonUp();
		self->versus->printMenu();
		return;
	}
	if (button == 0x28 && self->status == 1) { // arrow down + versus menu 
		self->versus->buttonDown();
		self->versus->printMenu();
		return;
	}

	if (button == 0xD && self->status == 1 && self->versus->getState() == 1) { // jump to 1v1
		self->status = 2;
		self->army1 = new Army1v1Menu(self->adapter);
		self->army1->printMenu();
		return;
	}
	if (button == 0x25 && self->status == 2) { // arrow left + 1v1 menu
		self->army1->buttonLeft();
		self->army1->printMenu();
		return;
	}
	if (button == 0x27 && self->status == 2) { // arrow right + 1v1 menu
		self->army1->buttonRight();
		self->army1->printMenu();
		return;
	}
	if (button == 0x41 && self->status == 2) { // 'a' + 1v1 menu
		self->army1->addUnit();
		self->army1->printMenu();
		return;
	}
	if (button == 0xD && self->status == 2) { // enter + 1v1 menu
		self->adapter->generatePair();
		self->adapter->generateMoves();
		delete self->army1;
		self->status = 4;
		self->battleMenu = new BattleScreenBuilder();
		self->screen1 = new Battle1v1Screen(self->adapter);
		self->screen1->printMenu(IDLE);
		return;
	}
	if (button == 0x27 && self->status == 4) { // button right + 1v1 battle
		auto stateStatus = self->adapter->NextCombatState();
		self->screen1->printMenu(stateStatus.state,stateStatus.position); // current turn юнит
		//int size = self->adapter->getMaxArmy();
		//self->screen1->printMenu(SPECIAL, 4); // current turn юнит
		//
		//self->screen1->printMenu(IDLE);
		return;
	}
	if (button == 0x25 && self->status == 4) { // button left + 1v1 battle
		auto stateStatus = self->adapter->PrevCombatState();
		self->screen1->printMenu(stateStatus.state, stateStatus.position); // current turn юнит
		//int size = self->adapter->getMaxArmy();
		//self->screen1->printMenu(SPECIAL, 4); // current turn юнит
		//
		//self->screen1->printMenu(IDLE);
		return;
	}
	if (button == 0x26 && self->status == 4) { // button up + 1v1 battle
		auto stateStatus = self->adapter->LastCombatState();
		self->screen1->printMenu(stateStatus.state, stateStatus.position); // current turn юнит
		//int size = self->adapter->getMaxArmy();
		//self->screen1->printMenu(SPECIAL, 4); // current turn юнит
		//
		//self->screen1->printMenu(IDLE);
		return;
	}
	if (button == 0x28 && self->status == 4) { // button down + 1v1 battle
		auto stateStatus = self->adapter->FirstCombatState();
		self->screen1->printMenu(stateStatus.state, stateStatus.position); // current turn юнит
		//int size = self->adapter->getMaxArmy();
		//self->screen1->printMenu(SPECIAL, 4); // current turn юнит
		//
		//self->screen1->printMenu(IDLE);
		return;
	}

	if (button == 0xD && self->status == 1 && self->versus->getState() == 2) { // jump to 3v3
		self->status = 3;
		self->army3 = new Army3v3Menu(self->adapter);
		self->army3->printMenu();
		return;
	}
	if (button == 0x25 && self->status == 3) { // arrow left + 3v3 menu
		self->army3->buttonLeft();
		self->army3->printMenu();
		return;
	}
	if (button == 0x27 && self->status == 3) { // arrow right + 3v3 menu
		self->army3->buttonRight();
		self->army3->printMenu();
		return;
	}
	if (button == 0x41 && self->status == 3) { // 'a' + 3v3 menu
		self->army3->addUnit();
		self->army3->printMenu();
		return;
	}
	if (button == 0xD && self->status == 3) { // enter + 3v3 menu
		self->adapter->generatePair3();
		self->adapter->generateMoves3();
		delete self->army3;
		self->status = 5;
		self->battleMenu = new BattleScreenBuilder();
		self->screen3 = new Battle3v3Screen(self->adapter);
		self->screen3->printMenu(IDLE);
		return;
	}
	if (button == 0x26 && self->status == 3) { // arrow up + 3v3 menu
		self->army3->buttonUp();
		self->army3->printMenu();
		return;
	}
	if (button == 0x28 && self->status == 3) { // arrow down + 3v3 menu
		self->army3->buttonDown();
		self->army3->printMenu();
		return;
	}	

	if (button == 0x27 && self->status == 5) { // button right + 1v1 battle
		auto stateStatus = self->adapter->NextCombatState();
		self->screen3->printMenu(stateStatus.state, stateStatus.position); // current turn юнит
		//int size = self->adapter->getMaxArmy();
		//self->screen1->printMenu(SPECIAL, 4); // current turn юнит
		//
		//self->screen1->printMenu(IDLE);
		return;
	}
	if (button == 0x25 && self->status == 5) { // button left + 1v1 battle
		auto stateStatus = self->adapter->PrevCombatState();
		self->screen3->printMenu(stateStatus.state, stateStatus.position); // current turn юнит
		//int size = self->adapter->getMaxArmy();
		//self->screen1->printMenu(SPECIAL, 4); // current turn юнит
		//
		//self->screen1->printMenu(IDLE);
		return;
	}
	if (button == 0x26 && self->status == 5) { // button up + 1v1 battle
		auto stateStatus = self->adapter->LastCombatState();
		self->screen3->printMenu(stateStatus.state, stateStatus.position); // current turn юнит
		//int size = self->adapter->getMaxArmy();
		//self->screen1->printMenu(SPECIAL, 4); // current turn юнит
		//
		//self->screen1->printMenu(IDLE);
		return;
	}
	if (button == 0x28 && self->status == 5) { // button down + 1v1 battle
		auto stateStatus = self->adapter->FirstCombatState();
		self->screen3->printMenu(stateStatus.state, stateStatus.position); // current turn юнит
		//int size = self->adapter->getMaxArmy();
		//self->screen1->printMenu(SPECIAL, 4); // current turn юнит
		//
		//self->screen1->printMenu(IDLE);
		return;
	}
}





int UserInterface::getState()
{
	return gameState;
}

void UserInterface::reset()
{
	adapter = nullptr;
	gameState = GAME_STATE_NULL;
	isCreated = false;
}

void UserInterface::startNewGame()
{
	


}

UserInterface* UserInterface::self;
