#pragma once
#include "DxLib.h"

class KeyInputManege
{

public:
	int UPorDown = 0;
	int LeftorRight = 0;
	bool ShiftStat = 0; 
	bool Slant = false;

	int UpCount = 0;
	int DownCount = 0;
	int LeftCount = 0;
	int RightCount = 0;

	bool up = false;
	bool down = false;
	bool left = false;
	bool right = false;

	int ShotKey = KEY_INPUT_Z;
	int BombKey = KEY_INPUT_X;

	void update();
	void LoadKeyInputSetting(){}
};

