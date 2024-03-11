#include "Game.h"
#include <stdlib.h>
#include<iostream>
#include <stdio.h>
#include <conio.h>
//#include <wchar.h>
#include<windows.h>  

Game::Game() :
	player_(Player{4,2,100,100,100}),
	enemy_(Player{ 9,9,100,100,100 }),
	apple_(Apple{2,2,100}),
	map_(&this->player_, &this->enemy_,&this->apple_)
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
		if (_kbhit())
		{
			direction = _getch();
			if (direction == 'e')
			{
				this->player_.attack(&this->enemy_);
			}
			
			this->player_.Move(direction);

		}
		
		direction = this->enemy_.getRandomSet();
		if (direction == 'e')
		{
			this->enemy_.attack(&this->player_);
		}
		
		this->enemy_.Move(direction);

	
	
	} while (direction != 'q');

}
