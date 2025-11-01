#pragma once

#include <vector>
#include "Engine.h"
#include "Weapon.h"

class Spaceship
{
private:
	std::vector<Weapon*> weapons;
	Engine engines[2];

public:
	Spaceship();

	void AttachWeapon(Weapon* weapon);
	void FireWeapons();
	void ToggleEngines();
	void Update(float dt);
};

