#include"DxLib.h"
#include"InputControl.h"

//�ϐ��錾
int old_button;
int now_button;
int mouse_position_x;
int mouse_position_y;

//�v���g�^�C�v�錾

//���͐���@�\:����������
//����:�Ȃ�
//�߂�l:�Ȃ�

void Input_Initialize(void)
{
	old_button = NULL;
	now_button = NULL;
	mouse_position_x = NULL;
	mouse_position_y = NULL;
}

//���͐���@�\:�X�V����
//����:�Ȃ�
//�߂�l:�Ȃ�

void Input_Update(void)
{

}