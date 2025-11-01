#include "Spaceship.h"
#include "Weapon.h"
#include <iostream>

int main()
{
	Spaceship xWing;

	xWing.AttachWeapon(new GaussCannon());
	xWing.AttachWeapon(new LaserCannon());

	xWing.ToggleEngines();

	xWing.FireWeapons();
	xWing.Update(0.5f);
	xWing.FireWeapons();

	return 0;
}