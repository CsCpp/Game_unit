#pragma once
class Player
{
private:
	int x;
	int y;
	float  health;
	int armor;
	int damage;
public:
	void setX(int x);
	int getX() const;
	void setY(int y);
	int getY() const;

	void setArmor(int armor);
	int getArmor() const;

	void setDamage(int damage);
	int getDamage() const;

	void setHealth(float health);
	float getHealth() const;

	void info();
};

