#include"SceneManager.h"
#include"TitleScene.h"
#include"GameMainScene.h"
#include"GameClearScene.h"
#include"GameOverScene.h"

/***********************************
* �}�N����`
************************************/


/***********************************
* �^��`
************************************/



/***********************************
* �ϐ���`
************************************/
GAME_MODE Game_Mode;	//�Q�[�����[�h���(����)

GAME_MODE Next_Mode;	//���[�����[�h���(��)


/***********************************
* �v���g�^�C�v�錾
************************************/



/***********************************
* �V�[���Ǘ��@�\�F����������
* �����F�Q�[�����[�h���
* �߂�l�F�Ȃ�
************************************/
int SceneManager_Initialize(GAME_MODE_mode)
{
	int Read_Error

	//�V�[���ǂݍ���
	//�^�C�g�����
	Read_Error = TitleScene_initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//�Q�[�����C�����
	Read_Error = GameMainScene_Initialize();
	if 
}