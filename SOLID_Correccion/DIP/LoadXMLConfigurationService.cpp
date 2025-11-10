#include "LoadXMLConfigurationService.h"
#include <cstdio>
namespace DIP
{
	DIP_Configuration LoadXMLConfigurationService::LoadConfiguration()
	{
		// Suponemos que carga el XML
		std::printf("Configuracion cargada desde XML\n");
		return DIP_Configuration();
	}
}


