#include "UIButton.h"
#include "../Rendering.h"
#include <cstdio>


void UIButton::Render()
{

	DrawRect(rect,color);
}
void UIButton::Update()
{
	return;
}

void UIButton::Clicked(vector2d relativePosition)
{
	if(onClick)
		onClick();
}
void UIButton::ReleasedMouse()
{

}
