#pragma once

#include "DIP_Configuration.h"

namespace DIP
{
	class LoadConfigurationService
	{
		virtual DIP_Configuration LoadConfiguration() = 0;
	};
}