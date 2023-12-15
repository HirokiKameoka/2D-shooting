#include "Gamemaneger.h"
#include"DxLib.h"
#include"KeyInputManege.h"
#include"testEnemy.h"


void Gamemaneger::update() {
	SetDrawScreen(MainGameScreen);
	ClearDrawScreen();
	DrawBox(0, 0, FieldSizeX, FieldSizeY, GetColor(100, 100, 100), true);
	Player1.update();
	panda.update();

	for (int i = 0; i < 1024; i++) {
		if (BulletExist[i] == true) {
			if (BulletManeger[i]->update() == 1) {
				delete BulletManeger[i];
				BulletManeger[i] = nullptr;
				BulletExist[i] = false;
			}
		}
	}

	panda.show();
	Player1.show();


	SetDrawScreen(DX_SCREEN_BACK);
	DrawGraph(0, 0, MainGameScreen, FALSE);
}

int Gamemaneger::registerBullet(Bullet* inBullet) {
	for (int i = 0; i < 1024; i++) {
		if (BulletExist[i] == false) {
			BulletManeger[i] = inBullet;
			BulletExist[i] = true;
			inBullet->setID(i);
			return i;
		}
	}
	return -1;
}
