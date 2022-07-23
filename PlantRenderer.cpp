#include "PlantRenderer.h"
#include "Plant.h"
#include "SDL2/SDL_render.h"
#include "vector2d.h"
#include "Rendering.h"
#include <cmath>
#include<ostream>

constexpr std::array<SDL_Color,10> Plant::PlantColors;


void RenderAllPlants()
{
	// for(plantDisplayValues _plant : plantsToDisplay)
	// {
		
	// }

}

void DrawPlant(Plant* plant,float rot)
{
	DrawBranch(plant,vector2d(300,300),rot,plant->startSize,0);
}


void DrawBranch(Plant* plant,vector2d startPosition, float startAngle,float size, int depth)
{

	vector2d direction = vector2d(0,40)*size;
	direction = direction.RotateByAngle(startAngle+plant->angleDifference);
	int colorIndex = GetDigit(plant->colors, depth%DigitAmount(plant->colors));
	DrawLine( startPosition,direction,Plant::PlantColors[colorIndex]);

	if(depth<10)
	{
		DrawBranch(plant,startPosition+direction,startAngle+plant->angleDifference,size-plant->sizeDifference,depth+1);
		//DrawBranch(plant,startPosition+direction,startAngle,size-plant->sizeDifference,depth+1);
		DrawBranch(plant,startPosition+direction,startAngle-plant->angleDifference,size-plant->sizeDifference,depth+1);
	}

}

int DigitAmount(int const& nr)
{
	return int(log10(nr) + 1);

}

int GetDigit(int const&  nr,int const& pos)
{
	return int(nr/pow(10,pos))%10;

}


