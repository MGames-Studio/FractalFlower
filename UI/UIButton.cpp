#include "UIButton.h"
#include "../Rendering.h"
#include <cstdio>


void UIButton::Render()
{
	DrawRect(rect,color);
	DrawRect(rect,SDL_Color(),false);

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
