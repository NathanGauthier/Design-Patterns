#include "SDL.h"
#include "Game.h"

int main(int argc, char** argv)
{
	Game game;
	bool isGameOver = false;

	game.load();
	while (!isGameOver)
	{
		game.Inputs();
		isGameOver = game.update();
		game.draw();
	}
	game.close();
	return  0;

}