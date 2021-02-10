

#include "Game.h"


void Game::load()
{
	window = SDL_CreateWindow("Design pattern", 100, 100, 800, 640, SDL_WINDOW_SHOWN); 
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	world.load(renderer);
}

void Game::Inputs()
{
}

bool Game::update()
{
	return false;
}

void Game::draw()
{
	SDL_RenderClear(renderer);
	world.draw(renderer);
	SDL_RenderPresent(renderer);
}

void Game::close()
{
	world.clean();
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

}




/*
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 480;
bool quit = false;
Player player = Player(100, 100, 50, 50);
SDL_Rect playerSquare = { 384,224,32,32 };


void load();
bool handleInput();
void update();
void draw(SDL_Renderer*);
void close(SDL_Window*, SDL_Renderer*);




int main(int argc, char* args[])
{
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;


	//init window
	SDL_Init(SDL_INIT_VIDEO );
	window = SDL_CreateWindow("Dungeon", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	TTF_Init();

	

	load();



	while (!quit)
	{

		quit = handleInput();
		update();
		draw(renderer);



	
		

	}

	//End
	close(window, renderer);
	

	return 0;
}

void load()
{

}

bool handleInput()
{
	SDL_Event e;
	while (SDL_PollEvent(&e) != 0)
	{
		if (e.type == SDL_KEYDOWN)
		{

		}
		else if (e.type == SDL_QUIT)
		{
			return true;
		}
	}
	return false;
}


void update()
{

}


void draw(SDL_Renderer* renderer)
{
	SDL_SetRenderDrawColor(renderer, 0x10, 0x10, 0x10, 0xFF);
	SDL_RenderClear(renderer);
	player.draw(renderer);
	SDL_SetRenderDrawColor(renderer, 0x90, 0x90, 0x90, 0xFF);
	SDL_RenderFillRect(renderer, &playerSquare);
	SDL_RenderPresent(renderer);
}






void close(SDL_Window* window, SDL_Renderer* renderer)
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	TTF_Quit();
	SDL_Quit();
}
*/

