#pragma once

#include <vector>
#include <iostream>

//Ejercicio 2: Incumple el principio Open/Closed ya que si añadimos mas tipos de enemigos, hay que modificar PrintEnemiesHealth

//Ejercicio 3: Incumple el principio de sustitucion de Liskov

class Enemy
{
public:
	Enemy(int health);
	virtual ~Enemy() = default;

	virtual int GetHealth() const;
	virtual void PrintHealth() const = 0;

protected:
	int _health;
};

class Boss : public Enemy
{
public:
	Boss();
	void PrintHealth() const override;

private:
	static const int _bossHealth;
};

class Minion : public Enemy
{
public:
	Minion();
	void PrintHealth() const override;

private:
	static const int _minionHealth;
};

void PrintEnemiesHealth(const std::vector<Enemy*>& enemies);
