#include "DxLib.h"
#include "BaseObject.h"
#include "Player.h"
#include "Fps.h"
#include"Gamemaneger.h"
#include"Testclass.h"




int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_  HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	ChangeWindowMode(TRUE);
	SetGraphMode(1200, 1200, 32);
	SetWaitVSyncFlag(0);
	SetDrawScreen(DX_SCREEN_BACK);

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	Fps fps;
	Gamemaneger testmaneger;

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
			break;
		}

		fps.Update();	//更新
		fps.Draw();

		testmaneger.update();

		fps.Wait();


		if (ProcessMessage() != 0) {
			break;
		}
	}


	

	DxLib_End();				// ＤＸライブラリ使用の終了処理




	return 0;				// ソフトの終了 
}