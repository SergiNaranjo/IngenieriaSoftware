#include "Ejercicio5.h"

DIP_Configuration LoadXMLConfigurationService::LoadConfiguration()
{
	std::cout << "Configuration charged from XML archive" << std::endl;
	return DIP_Configuration();
}

DIP_Configuration LoadBinaryConfigurationService::LoadConfiguration()
{
	std::cout << "Configuration charged from binary archive" << std::endl;
	return DIP_Configuration();
}

void DIPMain::Main()
{
	LoadXMLConfigurationService xmlService;
	LoadConfiguration(xmlService);

	LoadBinaryConfigurationService binService;
	LoadConfiguration(binService);
}

void DIPMain::LoadConfiguration(ILoadConfigurationService& service)
{
	DIP_Configuration config = service.LoadConfiguration();
	std::cout << "Configuration charged correctly" << std::endl;
}


