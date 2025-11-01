#pragma once

#include "Miraculous.h"

class Nooroo : public Miraculous
{
	bool isEvil;

public:
	Nooroo(bool evil);
	bool UsePower() override;
	bool IsHungry() override;
};

