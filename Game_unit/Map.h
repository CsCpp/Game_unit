#pragma once
#include "game_const.h"
#include"Player.h"
#include "Apple.h"
class Map
{
private:
	char map_[game_const::height][game_const::width];
	// Player player_;
	//Player& player_;
	Player* player_;
	Player* enemy_;
	Apple* apple_;
public:
	Map(Player* player, Player* enemy, Apple* apple_);
	void draw();
};

