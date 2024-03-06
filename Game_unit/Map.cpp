#pragma once
#include "Map.h"
#include <iostream>

Map::Map(Player* player, Player* enemy) : player_(player), enemy_(enemy)
{	
	for (int i = 0; i < game_const::height; ++i) {
		for (int j = 0; j < game_const::width; ++j)
		{

			i == 0 || i == (game_const::height - 1) || j == 0 || j == (game_const::width - 1) ? map_[i][j] = '#' : map_[i][j] = ' ';
			
		}
	}
}

void Map::draw()
{
	
	for (int i = 0; i < game_const::height; ++i) {
		for (int j = 0; j < game_const::width; ++j)
		{
			if (this->player_->getX() == i && this->player_->getY() == j)
			{
				std::cout << 'P';
			}
			else if (this->enemy_->getX() == i && this->enemy_->getY() == j)
			{
				std::cout << 'E';
			}
			else
			{
				std::cout << map_[i][j];
			}

			
		}
		std::cout << std::endl;
	}

}
