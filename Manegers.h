#pragma once

#define MaxBulletCount  1023
#define MaxEnemyCount 127

class Bullet;
class Enemy;

class BulletManeger
{
public:
	Bullet* MyManeger[MaxBulletCount] = {nullptr};
	bool BulletExistFlag[MaxBulletCount] = { false };

	int RegisterBullet(Bullet* inBullet);
	bool DeleteBullet(int inBulletID);
	bool Update();
	bool Show();
	bool Action();
	bool Move();
};

class EnemyManeger
{
public:
	Enemy* MyManeger[MaxEnemyCount] = { nullptr };
	bool EnemyExistFlag[MaxEnemyCount] = { false };

	int RegisterEnemy(Enemy* inEnemy);
	bool DeleteEnemy(int inEnemyID);
	bool Update();
	bool Show();
	bool Action();
	bool Move();
};



