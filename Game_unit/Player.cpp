#include "Player.h"
#include <iostream>
#pragma once

void Player::setX(int x)
{
	this->x = x;
}

int Player::getX() const
{
	return this->x;
}

void Player::setY(int y)
{
	this->y = y;
}

int Player::getY() const
{
	return this->y;
}

void Player::setArmor(int armor)
{
	this->armor = armor;
}

int Player::getArmor() const
{
	return this->armor;
}

void Player::setDamage(int damage)
{
	this->damage = damage;
}

int Player::getDamage() const
{
	return this->damage;
}

void Player::setHealth(float health)
{
	this->health = health;
}

float Player::getHealth() const
{
	return this->health;
}

void Player::info()
{
	std::cout << "************************INFO************************" <<std::endl;
	std::cout << "Position X: "<<this->x << std::endl;
	std::cout << "Position Y: "<<this->y << std::endl;
	std::cout << "Health: "<<this->health << std::endl;
	std::cout << "Armor: " <<this->armor << std::endl;
	std::cout << "Damage: "<<this->damage << std::endl;
}
