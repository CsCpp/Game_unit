#pragma once
#include "game_const.h"
class Map
{
private:
	char map[game_const::height][game_const::width];
public:
	void init();
	void draw();
};

