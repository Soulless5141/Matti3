#include "GameOverScene.h"
#include "DxLib.h"
#include "SceneManager.h"

//�ϐ��錾

int GameOverImage;
int GameOverSE;
int GameOverFlag;

//�v���g�^�C�v�錾

//�Q�[���I�[�o�[���:����������
//����:�Ȃ�
//�߂�l:�G���[���

int GameOverScene_Initialize(void)
{
	int ret = 0;

	//�摜�ǂݍ���
	GameOverImage = LoadGraph("images/gameover.png");
	//�����ǂݍ���
	GameOverSE = LoadSoundMen("sounds/gameover_se.mp3");
}