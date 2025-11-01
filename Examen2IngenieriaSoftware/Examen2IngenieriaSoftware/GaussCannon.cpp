#include "Weapon.h"
#include <iostream>

GaussCannon::GaussCannon(float h) : Weapon(h)
{

}

void GaussCannon::Fire()
{
	if (heat < maxHeat)
	{
		std::cout << "pew (GaussCannon)" << std::endl;
		heat += 10.0f;
	}
	else
	{
		std::cout << "overheated (GaussCannon)" << std::endl;
	}
}

void GaussCannon::Update(float dt)
{
	heat -= 25.0f * dt;

	if (heat < 0)
	{
		heat = 0;
	}
}