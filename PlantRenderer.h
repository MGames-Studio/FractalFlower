#pragma once 
#include "Plant.h"
#include "SDL2/SDL_render.h"
#include "vector2d.h"
#include "plantDisplayValues.h"
#include <vector>


void RenderAllPlants();

void DrawPlant(Plant* plant,float rot);
void DrawBranch(Plant* plant,vector2d startPosition, float startAngle,float size, int depth);

int DigitAmount(int const& nr);
int GetDigit(int const&  nr, int const& pos);

//std::vector<plantDisplayValues> plantsToDisplay;

