#pragma once
#pragma once
#include <SDL.h>




class Player
{
public:
	Player(int pX, int pY, int w, int h);


	SDL_Rect toRect();
	void draw(SDL_Renderer* renderer);

	

private:
	int x;
	int y;
	int width;
	int height;
	


};