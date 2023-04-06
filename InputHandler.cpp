#include "InputHandler.h"
#include <iostream>


void InputHandler::Initialize()
{
    InitializeHook();
}

void InputHandler::Subscribe(void(*callbackFunction)(DWORD))
{
    callback = callbackFunction;
}

void InputHandler::Unsubscribe()
{
    callback = nullptr;
}

void InputHandler::InitializeHook()
{
    eventHook = SetWindowsHookEx(WH_KEYBOARD_LL, HandleInputEvent, NULL, 0);
    if (eventHook == NULL) {
        std::cout << "Keyboard hook failed!" << std::endl;
    }
}

LRESULT CALLBACK InputHandler::HandleInputEvent(int code, WPARAM wParam, LPARAM lParam)
{
    if (callback != nullptr && wParam == WM_KEYDOWN)
    {
        KBDLLHOOKSTRUCT* kbdStruct = (KBDLLHOOKSTRUCT*)lParam;
        callback(kbdStruct->vkCode);
    }
    return CallNextHookEx(eventHook, code, wParam, lParam);
}

HHOOK InputHandler::eventHook;
void (*InputHandler::callback)(DWORD) = nullptr;