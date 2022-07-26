#include "Debug.h"
#include "vector2d.h"
#include "Plant.h"
#include "UI/UIManager.h"
#include "UI/UIButton.h"
#include <cstdio>

int debugI1, debugI2;
float debugF1, debugF2;



void InitializeDebug()
{

	UIButton* testbutton =new UIButton();
    testbutton->rect.w=100;
    testbutton->rect.h=50;
    testbutton->rect.x=200;
    testbutton->rect.y=200;
    testbutton->color.g=255;
    testbutton->onClick =&Debug_Func1;
    AddUIObject(*testbutton);
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