#include "Miraculous.h"
#include "Character.h"

Miraculous::Miraculous(Shape shape, float maxFuel) : shape(shape), maxFuel(maxFuel), fuel(maxFuel), isActive(false)
{

}

void Miraculous::SetActive(bool value)
{
	isActive = value;
}

void Miraculous::Update(float dt)
{
	if (isActive)
	{
		fuel -= 5 * dt;

		if (fuel <= 0)
		{
			fuel = 0;
			SetActive(false);
		}
	}
}

void Miraculous::Feed()
{
	fuel = maxFuel;
}

bool Miraculous::UsePower()
{
	return false;
}

bool Miraculous::IsHungry()
{
	return false;
}