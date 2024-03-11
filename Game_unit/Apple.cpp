#include "Apple.h"

Apple::Apple(int x, int y, float health)
{
	x_ = x;
	y_ = y;
	health_ = health;
}

void Apple::apply(Player* player)
{
}

int Apple::getX() const
{
	return x_;
}

int Apple::getY() const
{
	return y_;
}

float Apple::getHealth() const
{
	return health_;
}
