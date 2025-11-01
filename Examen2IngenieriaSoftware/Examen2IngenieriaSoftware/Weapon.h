#pragma once

#include <iostream>

class Weapon
{
protected:
	float heat;
	const float maxHeat = 100.0f;

public:
	Weapon(float h = 0.0f);
	virtual ~Weapon() = default;

	virtual void Fire() = 0;
	virtual void Update(float dt) = 0;
	virtual float GetHeat() const;
};

class GaussCannon : public Weapon
{
public: 
	GaussCannon(float h = 0.0f);
	void Fire() override;
	void Update(float dt) override;
};

class LaserCannon : public Weapon
{
public:
	LaserCannon(float h = 0.0f);
	void Fire() override;
	void Update(float dt) override;
};