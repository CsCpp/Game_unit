#pragma once
#include "Map.h"
#include <iostream>

Map::Map(Player player) : player_(player)
{
	
	std::cout << "------ MAP was created! ------\t" << this << std::endl;
	for (int i = 0; i < game_const::height; ++i) {
		for (int j = 0; j < game_const::width; ++j)
		{

			i == 0 || i == (game_const::height - 1) || j == 0 || j == (game_const::width - 1) ? map_[i][j] = '#' : map_[i][j] = ' ';
			
		}
	}
}

Map::~Map()
{
	std::cout << "------ MAP was destroyed! ------\t" << this << std::endl;
}



void Map::draw()
{
	for (int i = 0; i < game_const::height; ++i) {
		for (int j = 0; j < game_const::width; ++j)
		{
			std::cout << map_[i][j];
		}
		std::cout << std::endl;
	}

}
