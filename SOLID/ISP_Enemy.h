#pragma once

#include "IAttacker.h"
#include "IDeffender.h"

namespace ISP
{
	class ISP_Enemy : public IAttacker, public IDeffender
	{
	protected:
		int health;
	public:
		ISP_Enemy() : health(100) {}
		virtual ~ISP_Enemy() = default;
	};
}


