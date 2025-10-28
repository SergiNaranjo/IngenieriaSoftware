#include "Ejercicio1.h"

Configuration::Configuration(int numberOfEnemies) : _numberOfEnemies(numberOfEnemies)
{

}

int Configuration::GetNumberOfEnemies() const
{
	return _numberOfEnemies;
}

void ConfigurationSaver::SaveOnDisk(const Configuration& configuration)
{
	std::ofstream file("config.txt");

	if (file.is_open())
	{
		file << configuration.GetNumberOfEnemies() << std::endl;
		file.close();
	}
}