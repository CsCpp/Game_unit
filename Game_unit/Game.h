#pragma once
#include "game_const.h"
#include "Player.h"
#include "Map.h"


class Game
{private:
	Player player_;
	Map map_;
public:
	Game();
	void Run();

};

