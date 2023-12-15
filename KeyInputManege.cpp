#include "KeyInputManege.h"

void KeyInputManege::update() {

	up = CheckHitKey(KEY_INPUT_UP);
	down = CheckHitKey(KEY_INPUT_DOWN);
	left = CheckHitKey(KEY_INPUT_LEFT);
	right = CheckHitKey(KEY_INPUT_RIGHT);


	if (CheckHitKey(KEY_INPUT_LSHIFT)) {ShiftStat = true;}
	else { ShiftStat = false;}

	if (up) {UpCount++;}
	else { UpCount = 0;}

	if (down) {DownCount++;}
	else { DownCount = 0;}

	if (left) {LeftCount++;}
	else { LeftCount = 0;}

	if (right) {RightCount++;}
	else { RightCount = 0;}
	
	
	if(up && down){
		if (UpCount <= DownCount) { UPorDown = 1; }
		else { UPorDown = -1; }
	}
	else if (up) { UPorDown = 1; }
	else if (down) { UPorDown = -1; }
	else { UPorDown = 0; }

	if (left && right) {
		if (LeftCount <= RightCount) { LeftorRight = 1; }
		else { LeftorRight = -1; }
	}
	else if (left) { LeftorRight = 1; }
	else if (right) { LeftorRight = -1; }
	else { LeftorRight = 0; }

	if (UPorDown && LeftorRight) { Slant = true; }
	else { Slant = false; }

}