#pragma once
#include <iostream>

enum class EngineType
{
	COMBUSTION,
	ION,
	PLASMA
};

class Engine
{
private:
	float power;
	bool active;
	EngineType type;

public:
	Engine(EngineType type);
	void Toggle();
	bool GetActive() const;
	void Update(float dt);
};

