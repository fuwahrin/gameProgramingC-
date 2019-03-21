#pragma once
#include "SDL/SDL.h"

//�Q�[���N���X�̐錾
class MyGame
{
public:
	MyGame();
	//�Q�[���̏�����
	bool Initialize();
	//�Q�[���I�[�o�[�܂ł̃��[�v
	void RunLoop();
	//�Q�[�����V���b�g�_�E������
	void Shutdown();
private:
	//�Q�[�����[�v�w���p�[�֐��Q
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();
	//SDL�����E�B���h�E
	SDL_Window *mWindow;

	//�Q�[���̑��s���w������
	bool mIsRunning;
};