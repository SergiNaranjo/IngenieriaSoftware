#include "Weapon.h"
#include <iostream>

LaserCannon::LaserCannon(float h) : Weapon(h)
{

}

void LaserCannon::Fire()
{
	std::cout << "pew (LaserCannon)" << std::endl;
	heat += 5.0f;

	if (heat > maxHeat)
	{
		heat = maxHeat;
	}
}

void LaserCannon::Update(float dt)
{
	heat -= 25.0f * dt;

	if (heat < 0)
	{
		heat = 0;
	}
}