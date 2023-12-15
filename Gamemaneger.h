#pragma once
#include"DxLib.h"
#include"Player.h"
#include"Testclass.h"
#include"Enemy.h"
#include"Bullet.h"
#include"testEnemy.h"


class Gamemaneger
{
private:
	int FieldSizeX = 800;
	int FieldSizeY = 600;

	Testclass aaa = Testclass(1, 1);
	Player  Player1 = Player(FieldSizeX, FieldSizeY,this);
	testEnemy panda = testEnemy(FieldSizeX, FieldSizeY,this);
	Bullet* BulletManeger[1024] = {nullptr};
	bool BulletExist[1024] = { false };
	
	int MainGameScreen = MakeScreen(FieldSizeX, FieldSizeY, FALSE);

public:
	void update();
	int registerBullet(Bullet* inBullet);
	
};

