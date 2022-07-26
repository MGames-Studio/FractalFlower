#include "UIManager.h"
#include "UIOBject.h"
#include "UIButton.h"

#include <vector>
#include <memory>
#include <cstdio>

std::vector<UIObject*> UIObjects = {};

void AddUIObject(UIObject & obj)
{

	UIObject* pntr = &obj;


	UIObjects.push_back(pntr);



}
void RemoveUIObject(UIObject & obj)
{

	for(auto&& _obj : UIObjects)
	{

		if(_obj == &obj)
		{
			delete _obj;
		}
	}
}
void ResetUIObjects()
{

	for(auto&& _obj : UIObjects)
	{

		delete _obj;
		
	}
	UIObjects.clear();
}



void DrawUI()
{	
	
	for(auto&& obj : UIObjects)
	{
		obj->Render();
	}


}
void UpdateUI(){

	for(auto&& obj : UIObjects)
	{
		obj->Update();
	}

}
void HandleClickUI(vector2d const& pos)
{
	for(auto&& obj : UIObjects) //TODO should iterate in reverse
	{
		if(IsInside(pos,obj->rect))
		{
			obj->Clicked(vector2d(pos.x-obj->rect.x,pos.y-obj->rect.y));
			break;	//cant click multiple
		}
	}	

}
bool IsInside(vector2d const& pos,SDL_Rect const& rect)
{
	return pos.x > rect.x && pos.x <rect.x +rect.w && pos.y >rect.y && pos.y<rect.y +rect.h;

}