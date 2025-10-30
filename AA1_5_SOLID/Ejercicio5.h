#pragma once

#include <iostream>

struct DIP_Configuration
{

};

class ILoadConfigurationService
{
public:
	virtual ~ILoadConfigurationService() = default;
	virtual DIP_Configuration LoadConfiguration() = 0;
};

class LoadXMLConfigurationService : public ILoadConfigurationService
{
public: 
	DIP_Configuration LoadConfiguration() override;
};

class LoadBinaryConfigurationService : public ILoadConfigurationService
{
public:
	DIP_Configuration LoadConfiguration() override;
};

class DIPMain
{
public:
	void Main();
	void LoadConfiguration(ILoadConfigurationService& service);
};