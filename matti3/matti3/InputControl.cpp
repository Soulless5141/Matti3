#include"DxLib.h"
#include"InputControl.h"

//変数宣言
int old_button;
int now_button;
int mouse_position_x;
int mouse_position_y;

//プロトタイプ宣言

//入力制御機能:初期化処理
//引数:なし
//戻り値:なし

void Input_Initialize(void)
{
	old_button = NULL;
	now_button = NULL;
	mouse_position_x = NULL;
	mouse_position_y = NULL;
}

//入力制御機能:更新処理
//引数:なし
//戻り値:なし

void Input_Update(void)
{

}