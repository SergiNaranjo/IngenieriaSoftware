#include "Tikki.h"

Tikki::Tikki() : Miraculous(Shape::EARRING, 75.0f)
{
}

bool Tikki::UsePower()
{
	return true;
}

bool Tikki::IsHungry()
{
	return fuel < 0.25f * maxFuel;
}


