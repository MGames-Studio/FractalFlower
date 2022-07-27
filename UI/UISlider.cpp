#include "UISlider.h"
#include "../Rendering.h"
#include <cstdio>

UISlider::UISlider(float& ref)
{
	value = &ref;
}

void UISlider::Render()
{
	DrawLine(vector2d(rect.x,rect.y+rect.h/2),vector2d(rect.w,0),SDL_Color());
	SDL_Rect handleRect = SDL_Rect();
	handleRect.w=10;
	handleRect.h = rect.h;
	


	handleRect.x=rect.x+rect.w*percent();
	handleRect.y =rect.y+rect.h/2;
	DrawRect(handleRect,color,true,true);
	DrawRect(handleRect,SDL_Color(),false,true);
}

void UISlider::Update()
{

	if(!isHeld)
		return;
	int x;
	int buttons = SDL_GetMouseState(&x,NULL);
	x -=rect.x;
	*value = ValueFromPercent(float(x)/rect.w);
	if(!(buttons &SDL_BUTTON(1)))
		isHeld = false;

}

void UISlider::Clicked(vector2d relativePosition)
{
	isHeld = true;
}

float UISlider::percent() const
{
	float returns = (*value-minValue)/(maxValue-minValue);

	if(returns>1)
		return 1;
	if(returns<0)
		return 0;
	return returns;

}
float UISlider::ValueFromPercent(float const& per) const
{
	float returns = per*(maxValue-minValue);
	if(returns>maxValue)
		return maxValue;
	if(returns<minValue)
		return minValue;
	return returns;
}