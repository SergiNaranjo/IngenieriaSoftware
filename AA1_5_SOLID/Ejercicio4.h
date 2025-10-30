#pragma once

#include <iostream>

// Incumple el principio de segregación de interfaz porque la clase Enemy
// expone mas metodos de los que algunas funciones necesitan


class IDamageable
{
public:
	virtual ~IDamageable() = default;
	virtual void ReceiveDamage(int damageToAdd) = 0;
};

class IAttacker
{
public:
	virtual ~IAttacker() = default;
	virtual void Attack(IDamageable* target) const = 0;
};

class Enemy : public IAttacker, public IDamageable
{
public:
	Enemy() = default;
	virtual ~Enemy() = default;

	virtual void Attack(IDamageable* enemy) const override = 0;
	virtual void ReceiveDamage(int damageToAdd) override = 0;

protected:
	int health = 100;
};

class Minion : public Enemy
{
public:
	void Attack(IDamageable* enemy) const override;
	void ReceiveDamage(int damageToAdd) override;
};

class Boss : public Enemy
{
public:
	void Attack(IDamageable* enemy) const override;
	void ReceiveDamage(int damageToAdd) override;
};

void AttackTurn(const IAttacker& attacker, IDamageable& target);
void ForceReceiveDamage(IDamageable& target);

