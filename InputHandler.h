#pragma once
#include <Windows.h>

class InputHandler
{
public:
	static void Initialize();
	static void Subscribe(void (*callbackFunction)(DWORD));
	static void Unsubscribe();
private:
	static void InitializeHook();
	static LRESULT HandleInputEvent(const int code, const WPARAM wParam, const LPARAM lParam);
	static HHOOK eventHook;
	static void (*callback)(DWORD);
};