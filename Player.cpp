#include<cmath>
#include "DxLib.h"
#include "BaseObject.h"
#include "Player.h"
#include "Gamemaneger.h"



Player::Player(int inX, int inY, Gamemaneger* inGM) {
	x = 100;
	y = 100;
	FieldSizeX = inX;
	FieldSizeY = inY;
	BombCount = 3;
	Health = 1;


	SpeedHigh = 10;
	SpeedLow = 1;
	mainGM = inGM;
}

bool Player::move() {
	Key.update();

	if (Key.Slant) { SpeedSlant = 1 / sqrt(2); }
	else { SpeedSlant = 1; }
	if (Key.ShiftStat == true) { SpeedNow = SpeedLow; }
	else { SpeedNow = SpeedHigh; }


	x += SpeedNow * Key.LeftorRight * -1 * SpeedSlant;
	y += SpeedNow * Key.UPorDown * -1 * SpeedSlant;

	if (x > FieldSizeX) { x = FieldSizeX;}
	if (x < 0) { x = 0; }
	if (y > FieldSizeY) { y = FieldSizeY; }
	if (y < 0) { y = 0; }
	return 0;
}

bool Player::update() {
	move();
	return 0;
}