#include"SceneManager.h"
#include"TitleScene.h"
#include"GameMainScene.h"
#include"GameClearScene.h"
#include"GameOverScene.h"

/***********************************
* マクロ定義
************************************/


/***********************************
* 型定義
************************************/



/***********************************
* 変数定義
************************************/
GAME_MODE Game_Mode;	//ゲームモード情報(現在)

GAME_MODE Next_Mode;	//げームモード情報(次)


/***********************************
* プロトタイプ宣言
************************************/



/***********************************
* シーン管理機能：初期化処理
* 引数：ゲームモード情報
* 戻り値：なし
************************************/
int SceneManager_Initialize(GAME_MODE_mode)
{
	int Read_Error

	//シーン読み込み
	//タイトル画面
	Read_Error = TitleScene_initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//ゲームメイン画面
	Read_Error = GameMainScene_Initialize();
	if 
}