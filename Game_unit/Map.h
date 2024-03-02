#pragma once
#include "game_const.h"
class Map
{
private:
	char map_[game_const::height][game_const::width];
public:
	Map();
	~Map();
	
	void draw();
};

