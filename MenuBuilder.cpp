#include"MenuBuilder.h"

MenuBuilder::MenuBuilder()
{
	

	//defining bg colour and other templates colors
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFOEX info;
	info.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
	GetConsoleScreenBufferInfoEx(hConsole, &info);
	info.ColorTable[0] = RGB(255, 255, 230);		// background
	info.ColorTable[1] = RGB(0, 0, 0);				// black
	info.ColorTable[2] = RGB(255, 0, 0);			// red
	info.ColorTable[3] = RGB(0, 0, 255);			// blue
	info.ColorTable[4] = RGB(0, 153, 51);			// green
	info.ColorTable[5] = RGB(153, 0, 230);			// purple
	SetConsoleScreenBufferInfoEx(hConsole, &info);

	

	// sizing font
	CONSOLE_FONT_INFOEX font;
	font.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	GetCurrentConsoleFontEx(hConsole, false, &font);
	//wcscpy_s(font.FaceName, L"Franklin Gothic Medium");
	font.dwFontSize.Y = 9;
	SetCurrentConsoleFontEx(hConsole, false, &font);

	// sizing window
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);

	MoveWindow(console, 0, 0, 800, 650, TRUE);

}




