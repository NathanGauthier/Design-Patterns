#include "TileData.h"

TileData::TileData() : texture(nullptr), movementCost(1)
{
}

TileData::TileData(std::string filenameP, int movementCostP, SDL_Renderer* renderer) : movementCost(movementCostP)
{
	SDL_Surface* loadedSurface = SDL_LoadBMP(filenameP.c_str());
	texture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
	SDL_FreeSurface(loadedSurface);

}


