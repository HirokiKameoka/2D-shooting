#include<cmath>
#include "Bullet.h"
#include "Gamemaneger.h"

Bullet::Bullet(float inX, float inY, int inSpeed, float inAngle, int inSize,int inFieldSizeX,int inFieldSizeY,Gamemaneger* inGM) {
	x = inX;
	y = inY;
	speed = inSpeed;
	angle = inAngle;
	size = inSize;
	count = 0;
	FieldSizeX = inFieldSizeX;
	FieldSizeY = inFieldSizeY;
	mainGM = inGM;
}

bool Bullet::update() {
	if (move()) { return 1; }
	show();
	return 0;
}

bool Bullet::move() {
	x += speed * cos(angle);
	y += speed * sin(angle);

	if (x > FieldSizeX) { return 1; }
	if (x < 0) { return 1; }
	if (y > FieldSizeY) { return 1; }
	if (y < 0) { return 1; }

	return 0;
}

bool Bullet::action() {


	return 0;
}

bool Bullet::show() {
	DrawCircle(x, y, 10, myColor, true);
	return 0;
}