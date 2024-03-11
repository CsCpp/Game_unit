#pragma once
#include "game_const.h"
#include "Player.h"
#include "Map.h"
#include "Apple.h"


class Game
{private:
	Player player_;
	Player enemy_;
	Apple apple_;
	Map map_;
public:
	Game();
	void Run();

};

