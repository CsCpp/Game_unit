#pragma once
#include "game_const.h"
#include"Player.h"
class Map
{
private:
	char map_[game_const::height][game_const::width];
	// Player player_;
	//Player& player_;
	Player* player_;
	Player* enemy_;
public:
	Map(Player* player, Player* enemy);
	void draw();
};

