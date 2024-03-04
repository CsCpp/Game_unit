#include "Player.h"
#include <iostream>
#include "game_const.h"
#pragma once



Player::Player(): x_(0), y_(0), armor_(0), damage_(0), health_(0)
{
	

}

Player::Player(const Player& copy)
{
	
	this->armor_ = copy.getArmor();
	this->damage_ = copy.getDamage();
	this->health_ = copy.getHealth();
	this->x_ = copy.getX();
	this->y_ = copy.getY();
}

Player::Player(int x, int y):
x_(x), y_(y), armor_(100), damage_(100), health_(100)
{
	
}

Player::Player(int x, int y, int armor, int damage, float health):
	x_(x), y_(y), armor_(armor), damage_(damage), health_(health)
{
	
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
	std::cout << "************************ INFO about "<<this<<" ************************" <<std::endl;
	std::cout << "Position X: "<<this->x_ << std::endl;
	std::cout << "Position Y: "<<this->y_ << std::endl;
	std::cout << "Health: "<<this->health_ << std::endl;
	std::cout << "Armor: " <<this->armor_ << std::endl;
	std::cout << "Damage: "<<this->damage_ << std::endl;
}

void Player::Move(char keyPr)
{
	if	(keyPr == 'w' && this->x_ > 1) this->x_--;
	else if 
		(keyPr == 's' && this->x_ < (game_const::height-2)) this->x_++;
	else if
		(keyPr == 'd' && this->x_ < (game_const::width - 2)) this->y_++;
	else if
		(keyPr == 'a' && this->y_ >1) this->y_--;
	
	



}
