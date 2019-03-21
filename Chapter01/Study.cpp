#include "Study.h"

SDL_Renderer* mRenderer;


MyGame::MyGame()
	:mWindow(nullptr)
	, mIsRunning(true)
{

}

bool MyGame::Initialize()
{
	int sdlResult = SDL_Init(SDL_INIT_VIDEO);

	if (sdlResult != 0)
	{
		SDL_Log("SDL初期化できません : %s" , SDL_GetError());
		return false;
	}

	//ウィンドウの作成
	mWindow = SDL_CreateWindow(
		"GameProgramming in C++(第1章)",// ウィンドウのタイトル
		100,//ウィンドウの左上隅のX座標
		100,//ウィンドウの左上隅のY座標
		1024,//幅
		768,//高さ
		0 //フラグ（設定しない場合は0）
	);

	//ウィンドウ作成のチェック
	if (!mWindow)
	{
		SDL_Log("ウィンドウ作成できませんでした : %s", SDL_GetError());
		return false;
	}

	return true;
}

//シャットダウン
void MyGame::Shutdown()
{
	SDL_DestroyWindow(mWindow);
	SDL_Quit();
}

void MyGame::RunLoop()
{
	while (mIsRunning)
	{
		ProcessInput();
		UpdateGame();
		GenerateOutput();
	}
}

void MyGame::ProcessInput()
{

}

void MyGame::UpdateGame()
{

}

void MyGame::GenerateOutput()
{

}


/*
mRenderer = SDL_CreateRenderer(
	mWindow, //作成するレンダラーの描画対象となるウィンドウ
	-1, //通常は-1
	SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
);
*/