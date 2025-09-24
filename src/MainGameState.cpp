#include <MainGameState.hpp>
#include <iostream>
extern "C" {
    #include <raylib.h>
}

MainGameState::MainGameState()
{
}

void MainGameState::init()
{

}

void MainGameState::handleInput()
{

}

void MainGameState::update(float deltaTime)
{

}

void MainGameState::render()
{
	BeginDrawing();
	ClearBackground();
	DrawText(const char *text, int posX, int posY, int fontSize, Color color);
	EndDrawing();
}
