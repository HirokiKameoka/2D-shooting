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

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	Fps fps;
	Gamemaneger testmaneger;

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
			break;
		}

		fps.Update();	//�X�V
		fps.Draw();

		testmaneger.update();

		fps.Wait();


		if (ProcessMessage() != 0) {
			break;
		}
	}


	

	DxLib_End();				// �c�w���C�u�����g�p�̏I������




	return 0;				// �\�t�g�̏I�� 
}