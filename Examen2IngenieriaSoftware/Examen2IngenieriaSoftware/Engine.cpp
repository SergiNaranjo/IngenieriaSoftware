#include "Engine.h"

Engine::Engine(EngineType type) : power(100.0f), active(false), type(type)
{

}

void Engine::Toggle()
{
	active = !active;
}

bool Engine::GetActive() const
{
	return active;
}

void Engine::Update(float dt)
{

}