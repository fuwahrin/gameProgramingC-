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
		SDL_Log("SDL�������ł��܂��� : %s" , SDL_GetError());
		return false;
	}

	//�E�B���h�E�̍쐬
	mWindow = SDL_CreateWindow(
		"GameProgramming in C++(��1��)",// �E�B���h�E�̃^�C�g��
		100,//�E�B���h�E�̍������X���W
		100,//�E�B���h�E�̍������Y���W
		1024,//��
		768,//����
		0 //�t���O�i�ݒ肵�Ȃ��ꍇ��0�j
	);

	//�E�B���h�E�쐬�̃`�F�b�N
	if (!mWindow)
	{
		SDL_Log("�E�B���h�E�쐬�ł��܂���ł��� : %s", SDL_GetError());
		return false;
	}

	return true;
}

//�V���b�g�_�E��
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
	mWindow, //�쐬���郌���_���[�̕`��ΏۂƂȂ�E�B���h�E
	-1, //�ʏ��-1
	SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
);
*/