#include "Plant.h"

Plant* Plant::RandomPlant()
	{
		angleDifference = rand()%20;
		colors = rand()%9999;
		return this;
	}