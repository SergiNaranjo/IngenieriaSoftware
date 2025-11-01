#include "Spaceship.h"
#include <iostream>

Spaceship::Spaceship() : engines{Engine(EngineType::ION), Engine(EngineType::PLASMA)}
{

}

void Spaceship::AttachWeapon(Weapon* weapon)
{
	if (weapons.size() < 5)
	{
		weapons.push_back(weapon);
	}
	else
	{
		std::cout << "Cannot add more weapons" << std::endl;
	}
}

void Spaceship::FireWeapons()
{
	for (auto w : weapons)
	{
		w->Fire();
	}
}

void Spaceship::ToggleEngines()
{
	for (int i = 0; i < 2; ++i)
	{
		engines[i].Toggle();
	}
}

void Spaceship::Update(float dt)
{
	for (int i = 0; i < 2; ++i)
	{
		engines[i].Update(dt);
	}

	for (auto w : weapons)
	{
		w->Update(dt);
	}
}






