#include "Debug.h"
#include "vector2d.h"
#include "Plant.h"
#include "UI/UIManager.h"
#include "UI/UIButton.h"
#include "UI/UISlider.h"
#include <cstdio>

int debugI1, debugI2;
float debugF1, debugF2;


void InitializeDebug()
{



}

int* Debug_Int1(){return &debugI1;}
int* Debug_Int2(){return &debugI2;}

float* Debug_Float1(){return &debugF1;}
float* Debug_Float2(){return &debugF2;}

void Debug_Func1()
{

	printf("Debug function 1 \n");
	debugF1+=0.1;
}
void Debug_Func2()
{


}