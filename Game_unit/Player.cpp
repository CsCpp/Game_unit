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
	if (armor < 0)
	{
		this->armor_ = 0;
		return;
	}
	this->armor_ = armor;
}

int Player::getArmor() const
{
	return this->armor_;
}

void Player::setDamage(int damage)
{
	if (damage < 0)
	{
		this->damage_ = 0;
		return;
	}
	this->damage_ = damage;
}

int Player::getDamage() const
{
	return this->damage_;
}

void Player::setHealth(float health)
{
	if (health < 0)
	{
		this->health_ = 0;
		return;
	}
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

void Player::attack(Player* enemy)
{
	if (!this->isEnemyArownd(enemy)) return;
	
		float demageCf = static_cast<float>(this->damage_) * 40 / 100;
		float armorCf = static_cast<float>(enemy->getArmor()) * 20 / 100;

		float decHealth = demageCf - armorCf;
		if (decHealth <= 0) decHealth = 1;

		enemy->setHealth(enemy->getHealth() - decHealth);
		enemy->setArmor(enemy->getArmor() - decHealth / 2);
		enemy->setDamage(enemy->getDamage() - decHealth / 3);
	
}

bool Player::isEnemyArownd(Player* enemy)
{
	return(this->x_ - 1 == enemy->getX() || this->x_ == enemy->getX() || this->x_ + 1 == enemy->getX()) &&
		(this->y_ - 1 == enemy->getY() || this->y_ == enemy->getY() || this->y_ + 1 == enemy->getY());
	
}

char Player::getRandomSet()
{
	
	int i = rand() % 5;
	char randChar []  = { 'e','w','s','a','d' };
	return randChar[i];
}
