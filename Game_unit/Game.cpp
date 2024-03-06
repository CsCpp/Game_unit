#include "Game.h"
#include <stdlib.h>
#include<iostream>
#include <conio.h>
#include<windows.h>  

Game::Game() :
	player_(Player{4,2,100,100,100}),
	enemy_(Player{ 9,9,100,100,100 }),
	map_(&this->player_, &this->enemy_)
{

}

void Game::Run()
{
	
	char direction;

	do
	{
		system("cls");
		this->player_.info();
		this->enemy_.info();
		this->map_.draw();
		std::cout << "Pleas enter your direction (w, s, a, d): ";
		direction = _getch();
		if (direction == 'e')
		{
			this->player_.attack(&this->enemy_);
		}
		//std::cin >> direction;
		this->player_.Move(direction);

	
	
	} while (direction != 'q');

}
