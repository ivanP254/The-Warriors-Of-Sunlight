#include<iostream>
#include<windows.h>
#include"UserInterface.h"
#include"Units.h"
#include"Armies.h"

#include"MusicPlayer.h"




int main()
{
	InputHandler::Initialize();
	auto a = new Adapter();


	auto ui = UserInterface::getUI(a);


	//*/

	


	


	//system("pause>NUL");

	MSG msg;
	GetMessage(&msg, NULL, 0, 0);
	return 0;
}

std::vector<std::string>StaticName::unit_names =
{ "", "1", "2", "3", "4", "5" };