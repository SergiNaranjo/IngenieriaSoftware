#include "Ejercicio4.h"

void Minion::Attack(IDamageable* enemy) const
{
	std::cout << "Minion attacks! Doing 10 of damage" << std::endl;
	enemy->ReceiveDamage(10);
}

void Minion::ReceiveDamage(int damageToAdd)
{
	health -= damageToAdd;
	std::cout << "Minion receives " << damageToAdd << " of damage. Remaining health: " << health << std::endl;
}

void Boss::Attack(IDamageable* enemy) const
{
	std::cout << "Boss attacks! Doing 30 of damage" << std::endl;
	enemy->ReceiveDamage(30);
}

void Boss::ReceiveDamage(int damageToAdd)
{
	health -= damageToAdd;
	std::cout << "Boss receives " << damageToAdd << " of damage. Remaining health: " << health << std::endl;
}

void AttackTurn(const IAttacker& attacker, IDamageable& target)
{
	attacker.Attack(&target);
}

void ForceReceiveDamage(IDamageable& target)
{
	target.ReceiveDamage(20000);
}


