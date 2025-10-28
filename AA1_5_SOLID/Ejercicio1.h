#pragma once
#include <string>
#include <fstream>

// Ahora mismo la clase Configuration tiene dos responsabilidades, gestiona y guarda
// lo cual incuple el principio de responsabilidad única. 

//class Configuration
//{
//public:
//	Configuration(int numberOfEnemies);
//	int GetNumberOfEnemies();
//
//	void SaveOnDisk(const Configuration& configuration);
//
//private:
//	int _numberOfEnemies;
//};

class Configuration
{
public:
	Configuration(int numberOfEnemies);
	int GetNumberOfEnemies() const;

private:
	int _numberOfEnemies;
};

class ConfigurationSaver
{
public:
	void SaveOnDisk(const Configuration& configuration);
};

