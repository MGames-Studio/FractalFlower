#include "UIManager.h"
#include "UIOBject.h"
#include <vector>
#include <memory>
#include <cstdio>

std::vector<UIObject*> UIObjects = {};

void AddUIObject(UIObject & obj)
{

	UIObject* pntr =&obj;
	//UIObjects.push_back(pntr);
	printf("here");

	//std::shared_ptr<UIObject> sharedptr(obj);

	// UIObjects.push_back(std::shared_ptr<UIObject>());
	// UIObjects.back().reset(&obj);

}
void RemoveUIObject()
{


}


void DrawUI()
{	
	//(UIObjects.back())->Render();

	printf("%p\n",UIObjects.back());
	return;
	return;
	for(auto&& obj : UIObjects)
	{

		obj->Render();
	}


}
void UpdateUI(){



}
void HandleClickUI(){}