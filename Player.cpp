#include <SDL.h>
#include <SDL_ttf.h>
#include "Player.h"


Player::Player(int pX, int pY, int w, int h)
	:x(pX), y(pY), width(w), height(h)
{

}



SDL_Rect Player::toRect()
{
	SDL_Rect rect = { x ,y, width, height };
	return rect;
}

void Player::draw(SDL_Renderer* renderer)
{
	SDL_Rect rect = toRect();
	SDL_RenderFillRect(renderer, &rect);
}