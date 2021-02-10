#pragma once
#include <SDL.h>
#include "TileData.h"
class Tile
{
public:
	Tile(int worldxP, int worldyP, TileData* dataP);
	void draw(SDL_Renderer* renderer);



private:
	int worldX;
	int worldY;
	TileData* data;

	const int SIZE = 32;

};

