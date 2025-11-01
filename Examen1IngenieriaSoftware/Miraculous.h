#pragma once

#include <iostream>

enum class Shape
{
	BROOCH,
	RING,
	BRACELET,
	EARRING
};

class Miraculous
{
protected:
	float fuel;
	float maxFuel;
	bool isActive;
	Shape shape;

public:
	Miraculous(Shape shape, float maxFuel);
	virtual ~Miraculous() = default;

	virtual void SetActive(bool value);
	virtual void Update(float dt);
	virtual void Feed();

	virtual bool UsePower();
	virtual bool IsHungry();

	float GetFuel() const { return fuel; }
	bool IsActive() const { return isActive; }
};

