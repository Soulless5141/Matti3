#include "GameOverScene.h"
#include "DxLib.h"
#include "SceneManager.h"

//変数宣言

int GameOverImage;
int GameOverSE;
int GameOverFlag;

//プロトタイプ宣言

//ゲームオーバー画面:初期化処理
//引数:なし
//戻り値:エラー情報

int GameOverScene_Initialize(void)
{
	int ret = 0;

	//画像読み込み
	GameOverImage = LoadGraph("images/gameover.png");
	//音源読み込み
	GameOverSE = LoadSoundMen("sounds/gameover_se.mp3");
}