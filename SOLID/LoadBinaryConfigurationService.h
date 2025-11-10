#pragma once

#include "LoadConfigurationService.h"

namespace DIP
{
	class LoadBinaryConfigurationService : public LoadConfigurationService
	{
	public:
		DIP_Configuration LoadConfiguration() override {}
	};
}