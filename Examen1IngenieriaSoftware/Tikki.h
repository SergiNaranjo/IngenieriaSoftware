#pragma once

#include "Miraculous.h"

class Tikki : public Miraculous
{
public:
	Tikki();
	bool UsePower() override;
	bool IsHungry() override;
};

