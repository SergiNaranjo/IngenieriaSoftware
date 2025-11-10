#pragma once

#include "ISP_Enemy.h"


namespace ISP
{
	class ISP_Boss : public ISP_Enemy, public IAttacker, public IDeffender
	{
	public:
		ISP_Boss();

		void Attack(IDeffender* defender) override
		{
			defender->TakeDamage(20);
		}
	};
}


