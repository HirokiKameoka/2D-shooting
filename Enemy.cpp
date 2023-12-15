#include<cmath>
#include "Enemy.h"
#include "DxLib.h"
#include "Gamemaneger.h"

Enemy::Enemy(int inFieldSizeX, int inFieldSizeY,Gamemaneger* inGM) {
	FieldSizeX = inFieldSizeX;
	FieldSizeY = inFieldSizeY;
	Health = 100;
	x = 50;
	y = 50;
	mainGM = inGM;
}


bool Enemy :: update() {
	move();
	action();
	show();
	return 0;
}

bool Enemy::move() {
	return 0;
}

bool Enemy::action() {
	return 0;
}

bool Enemy::show() {
	DrawCircle(x, y, Size, GetColor(255, 100, 100), true);
	return 0;

}