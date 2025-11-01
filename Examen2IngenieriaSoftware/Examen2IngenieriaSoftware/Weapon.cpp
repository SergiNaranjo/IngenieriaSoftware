#include "Weapon.h"

Weapon::Weapon(float h) : heat(h)
{

}

float Weapon::GetHeat() const
{
	return heat;
}