#include "GameClearScene.h"
#include "DxLib.h"
#include "SceneManager.h"

//マクロ定義

//型定義

//変数宣言

int GameClearImage;
int GameClearSE;
int GameClearFlag;

//プロトタイプ宣言

//ゲームクリア画面;初期化処理
//引数;なし
//戻り数;エラー情報

int GameClearScene_Initialize(void)
{
	int ret = 0;

	//画像の読み込み
	GameClearImage = LoadGraph("images/gameclear.png");
	//音源の読み込み
	GameClearSE = LoadSoundMem("sounds/gameclear_se.mp3");

	GameClearFlag = 0;

	//エラーチェック
	if (GameClearImage == D_ERROR)
	{
		ret = D_ERROR;
	}
	if (GameClearSE == D_ERROR)
	{
		ret = D_ERROR;
	}

	return ret;
}

//ゲームクリア画面;更新処理
//引数;なし
//戻り値;なし

void  GameClearScene_Update(void)
{
	//ゲームクリア効果音再生チェック
	if (CheckSoundMem(GameClearSE) == 0)
	{
		if (GameClearFlag == TRUE)
		{
			Change_Scene(E_GAMEMAIN);
		}
		else
		{
			PlaySoundMem(GameClearSE, DX_PLAYTYPE_BACK);
			GameClearFlag = TRUE;
		}
	}
}

//ゲームクリア画面;描画処理
//引数;なし
//戻り値;なし

void GameClearScene_Draw(void)
{
	DrawGraph(0, 0, GameClearImage, FALSE);
}
