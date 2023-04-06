#pragma once
#include<windows.h>


class MusicPlayer
{
public:
	static void PlayBattleMusic()
	{

		PlaySound(TEXT("Battle.wav"), NULL, SND_LOOP | SND_ASYNC);
	}
	static void PlayMenuMusic()
	{

		PlaySound(TEXT("Menu.wav"), NULL, SND_LOOP | SND_ASYNC);
	}
	static void StopMusic()
	{

		PlaySound(NULL, NULL, SND_ASYNC);
	}
};