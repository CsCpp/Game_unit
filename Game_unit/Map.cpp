#pragma once
#include "Map.h"
#include <iostream>

void Map::init()
{
	for (int i = 0; i < game_const::height; ++i) {
		for (int j = 0; j < game_const::width; ++j)
		{
			
			i == 0 || i == (game_const::height - 1) || j == 0 || j == (game_const::width - 1) ? map[i][j] = '#': map[i][j] = ' ';
			/*if(i==0 || i== (game_const::height-1)|| j==0|| j==(game_const::width-1))
				map[i][j] = '#';
			else
			
			map[i][j] = ' ';*/
		}
	}
}

void Map::draw()
{
	for (int i = 0; i < game_const::height; ++i) {
		for (int j = 0; j < game_const::width; ++j)
		{
			std::cout << map[i][j];
		}
		std::cout << std::endl;
	}

}
