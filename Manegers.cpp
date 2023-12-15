#include "Manegers.h"
#include "Bullet.h"

int BulletManeger::RegisterBullet(Bullet* inBullet)
{
	for (int i = 0; i < MaxBulletCount; i++)
	{
		if (BulletExistFlag[i] == false)
		{
			MyManeger[i] = inBullet;
			BulletExistFlag[i] = true;
			inBullet->setID(i);
			return(i);
		}
	}
	return (-1);
}

bool BulletManeger::DeleteBullet(int inBulletID)
{
	delete MyManeger[inBulletID];
	MyManeger[inBulletID] = nullptr;
	BulletExistFlag[inBulletID] = false;

	return 0;
}

bool BulletManeger::Update() {
	for (int i = 0; i < MaxBulletCount; i++)
	{
		MyManeger[i]->update();
	}
}

bool BulletManeger::Move() {
	for (int i = 0; i < MaxBulletCount; i++)
	{
		MyManeger[i]->move();
	}
}

bool BulletManeger::Action() {
	for (int i = 0; i < MaxBulletCount; i++)
	{
		MyManeger[i]->action();
	}
}

bool BulletManeger::Show() {
	for (int i = 0; i < MaxBulletCount; i++)
	{
		MyManeger[i]->show();
	}
}