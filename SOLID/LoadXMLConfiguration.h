#pragma once

#include "LoadConfigurationService.h"

namespace DIP
{
	class LoadXMLConfiguration : public LoadConfigurationService
	{
	public:
		DIP_Configuration LoadConfiguration() override {}
	};
}



