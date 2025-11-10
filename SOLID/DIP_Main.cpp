#include "DIP_Main.h"
#include "DIP_Configuration.h"
#include "LoadXMLConfiguration.h"
#include "LoadBinaryConfigurationService.h"
#include "LoadConfigurationService.h"

#include <cstdio>

namespace DIP
{
	void DIP_Main::Main()
	{
		LoadConfiguration();
	}

	void DIP_Main::LoadConfiguration()
	{
		LoadBinaryConfigurationService* loadConfigurationService;
		loadConfigurationService = new LoadBinaryConfigurationService();
		loadConfigurationService->LoadConfiguration();
		delete loadConfigurationService;
	}
}
