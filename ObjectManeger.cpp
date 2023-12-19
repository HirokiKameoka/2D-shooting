#include "ObjectManeger.h"
#include "BaseObject.h"

ObjectManeger::ObjectManeger() {

}

ObjectManeger::ObjectManeger(int inNum) {
	if (MaxCount > inNum) {
		LimitNumber = inNum;
	}
}

int ObjectManeger::RegisterObject(BaseObject* inObject)
{
	for (int i = 0; i < MaxCount; i++)
	{
		if (ObjectExistFlag[i] == false)
		{
			MyManeger[i] = inObject;
			ObjectExistFlag[i] = true;
			inObject->setID(i);
			return(i);
		}
	}

	delete inObject;
	return (-1);
}

bool ObjectManeger::DeleteObject(int inObjectID)
{
	delete MyManeger[inObjectID];
	MyManeger[inObjectID] = nullptr;
	ObjectExistFlag[inObjectID] = false;

	return 0;
}

bool ObjectManeger::Update() {
	for (int i = 0; i < MaxCount; i++)
	{
		MyManeger[i]->update();
	}
	return 0;
}

bool ObjectManeger::Move() {
	for (int i = 0; i < MaxCount; i++)
	{
		MyManeger[i]->move();
	}
	return 0;
}

bool ObjectManeger::Action() {
	for (int i = 0; i < MaxCount; i++)
	{
		MyManeger[i]->action();
	}
	return 0;
}

bool ObjectManeger::Show() {
	for (int i = 0; i < MaxCount; i++)
	{
		MyManeger[i]->show();
	}
	return 0;
}