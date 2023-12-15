#pragma once
#include "DxLib.h"
#include "BaseObject.h"
#include "KeyInputManege.h"


class Gamemaneger;

class Player : public BaseObject {
protected:
	float x, y;
	int FieldSizeX, FieldSizeY;

	int Health;
	int BombCount;
	int GraphicHandle[20] = { 1 };
	int SpeedHigh;
	int SpeedLow;
	int Size = 3;
	KeyInputManege Key;
	float SpeedSlant = 1;
	float SpeedNow = 1;
	Gamemaneger* mainGM;

public:
	Player(int inX , int inY,Gamemaneger* inGM);
	bool update() override;
	bool action() override { return 0; };
	bool move() override ;
	bool show() override { DrawCircle(x, y, Size, GetColor(255, 255, 255), true); return 0; };
	
};

