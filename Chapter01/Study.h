#pragma once
#include "SDL/SDL.h"

//ゲームクラスの宣言
class MyGame
{
public:
	MyGame();
	//ゲームの初期化
	bool Initialize();
	//ゲームオーバーまでのループ
	void RunLoop();
	//ゲームをシャットダウンする
	void Shutdown();
private:
	//ゲームループヘルパー関数群
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();
	//SDLが作るウィンドウ
	SDL_Window *mWindow;

	//ゲームの続行を指示する
	bool mIsRunning;
};