#pragma once
#define MaxCount  1024


class BaseObject;

class ObjectManeger
{
public:
	BaseObject* MyManeger[MaxCount] = { nullptr };
	bool ObjectExistFlag[MaxCount] = { false };

	int LimitNumber = MaxCount;

	ObjectManeger();
	ObjectManeger(int inNum);
	int RegisterObject(BaseObject* inObject);
	bool DeleteObject(int inBulletID);
	bool Update();
	bool Show();
	bool Action();
	bool Move();

};

