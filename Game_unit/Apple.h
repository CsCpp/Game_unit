#pragma once
#include "Player.h"
class Apple
{
private: 
		int x_;
		int y_;
		float health_;
public:
	Apple(int x, int y, float health);

	void apply(Player* player);
	int getX() const;
	int getY() const;
	float getHealth() const;

};

