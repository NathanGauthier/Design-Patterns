#include "Tile.h"

Tile::Tile(int worldxP, int worldyP, TileData* dataP) : worldX(worldxP), worldY(worldyP), data(dataP)
{

}

void Tile::draw(SDL_Renderer* renderer)
{
	SDL_Rect drawRect{worldX * SIZE, worldY * SIZE, SIZE , SIZE};
	SDL_RenderCopy(renderer, data->getTexture(), nullptr, &drawRect);
}
