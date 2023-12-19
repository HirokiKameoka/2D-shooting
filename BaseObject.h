#pragma once
#include "ObjectManeger.h"

class BaseObject
{
protected:
	double x, y;
	int myID = -1;
	ObjectManeger* MyMaeger = nullptr;
public:

	bool setID(int inID) { myID = inID; return 0; }
	bool setMyManeger(ObjectManeger* inManeger) { MyMaeger = inManeger; return 0; }
	virtual bool update() { return 0; };
	virtual bool move() { return 0; };
	virtual bool show() { return 0; };
	virtual bool action() { return 0; };
};

