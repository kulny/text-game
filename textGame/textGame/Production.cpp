#include "stdafx.h"
#include "Production.h"


Production::Production()
{

}


Production::~Production()
{
}

void Production::beginProduction()
{
	for ( ; ; ) {
		currentProductionVal += 1;
	}
}
