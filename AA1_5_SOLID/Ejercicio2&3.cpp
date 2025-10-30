#include "Ejercicio2&3.h"

const int Boss::_bossHealth = 200;
const int Minion::_minionHealth = 100;

Enemy::Enemy(int health) : _health(health)
{
}

int Enemy::GetHealth() const
{
	return _health;
}

Boss::Boss(): Enemy(_bossHealth)
{
}

void Boss::PrintHealth() const
{
	std::cout << "Is a boss, has " << GetHealth() << " health" << std::endl;
}

Minion::Minion() : Enemy(_minionHealth)
{
}

void Minion::PrintHealth() const
{
	std::cout << "Is not a boss, has " << GetHealth() << " health" << std::endl;
}

void PrintEnemiesHealth(const std::vector<Enemy*>& enemies)
{
	for (auto enemy : enemies)
	{
		enemy->PrintHealth();
	}
}
