#include "Nooroo.h"

Nooroo::Nooroo(bool evil) : Miraculous(Shape::BROOCH, 150.0f), isEvil(evil)
{

}

bool Nooroo::UsePower()
{
	return true;
}

bool Nooroo::IsHungry()
{
	if (isEvil)
	{
		return false;
	}
	
	return fuel < 20;
}


