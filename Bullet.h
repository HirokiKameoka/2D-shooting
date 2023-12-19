#pragma once;
#include "BaseObject.h"
#include "DxLib.h"

class Gamemaneger;

class Bullet :public BaseObject{
private:
	float x, y;
	int FieldSizeX, FieldSizeY;

	int speed;
	float angle;
	int size;
	int count;
	Gamemaneger* mainGM;
	int myColor = GetColor(255, 255, 255);
	int myID = 0;

public:
	Bullet(float inX,float inY ,int inSpeed,float inAngle,int inSize,int inFieldSizeX, int inFieldSizeY,Gamemaneger* inGM);
	
	bool update() override;
	bool action() override;
	bool move() override;
	bool show() override;
	bool setID(int inID) { myID = inID; return 0; }

};

