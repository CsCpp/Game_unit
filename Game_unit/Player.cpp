#include "Player.h"
#include <iostream>
#pragma once

Player::~Player()
{
	std::cout << "------ Player was destroyed! ------\t" << this << std::endl;
}

Player::Player(): x_(0), y_(0), armor_(0), damage_(0), health_(0)
{
	std::cout << "------ Player was created! ------\t" << this << std::endl;

}

Player::Player(int x, int y):
x_(x), y_(y), armor_(100), damage_(100), health_(100)
{
}

Player::Player(int x, int y, int armor, int damage, float health):
	x_(x), y_(y), armor_(armor), damage_(damage), health_(health)
{
	std::cout << "------ Player was created! ------\t" << this << std::endl;
}

void Player::setX(int x)
{
	this->x_ = x;
}

int Player::getX() const
{
	return this->x_;
}

void Player::setY(int y)
{
	this->y_ = y;
}

int Player::getY() const
{
	return this->y_;
}

void Player::setArmor(int armor)
{
	this->armor_ = armor;
}

int Player::getArmor() const
{
	return this->armor_;
}

void Player::setDamage(int damage)
{
	this->damage_ = damage;
}

int Player::getDamage() const
{
	return this->damage_;
}

void Player::setHealth(float health)
{
	this->health_ = health;
}

float Player::getHealth() const
{
	return this->health_;
}

void Player::info()
{
	std::cout << "************************INFO************************" <<std::endl;
	std::cout << "Position X: "<<this->x_ << std::endl;
	std::cout << "Position Y: "<<this->y_ << std::endl;
	std::cout << "Health: "<<this->health_ << std::endl;
	std::cout << "Armor: " <<this->armor_ << std::endl;
	std::cout << "Damage: "<<this->damage_ << std::endl;
}
