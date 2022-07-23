#pragma once
#include "SDL2/SDL.h"
#include "Rendering.h"
#include <array>
#include <cstdlib>

class Plant
{
public:
	
	float angleDifference =1; 
	float startSize =1.5;
	float sizeDifference=0.1;
	Uint16 colors=102;
	Uint8 colorsPeriod =1;
	Uint8 branches =1;
	Uint8 branchesPeriod = 2;

	static constexpr std::array<SDL_Color,10> PlantColors {
	{
		{0,255,100,100},
		{0,100,20,100},
		{255,0,100,100},
		{0,255,0,100},
		{0,0,255,100},
		{0,255,255,100},
		{97,32,84,100},
		{58,13,215,100},
		{100,100,100,100},
		{100,100,100,100},


	}};

	Plant* RandomPlant();



};
