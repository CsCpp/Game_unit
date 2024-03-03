#pragma once
class Player
{
private:
	int x_;
	int y_;
	float  health_;
	int armor_;
	int damage_;
public:
	~Player();
	Player();
	Player(const Player& copyFrom);
	Player(int x, int y);
	Player(int x, int y, int armor, int damage, float health);
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

