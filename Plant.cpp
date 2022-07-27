#include "Plant.h"
#include <cstdio>

void Plant::RandomPlant()
	{
		angleDifference = float(rand()%300)/100;
		sizeDifference = float(rand()%80)/100+0.2;
		startSize = float(rand()%100)/100+0.5;

		colors = rand()%9999;
		
	}