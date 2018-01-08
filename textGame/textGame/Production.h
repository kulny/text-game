#pragma once
class Production
{
public:
	Production();
	~Production();
	void beginProduction();

private:
	int currentProductionVal;
	int totalProductionVal;
	int productionDelay;
};

