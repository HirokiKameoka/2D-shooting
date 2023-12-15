#pragma once
#include"DxLib.h"
#include "BaseObject.h"

class Gamemaneger;

class Enemy :  public BaseObject{

protected:
	float x, y;
	int FieldSizeX, FieldSizeY;
	int Size = 15;
	int Health;
	Gamemaneger* mainGM;

	int cooltime = 0;


public:
	Enemy(int inFieldSizeX ,int inFieldSizeY,Gamemaneger* inGM );
	bool update() override;
	bool action() override;
	bool move() override;
	bool show() override;


};

