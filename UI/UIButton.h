#pragma once 
#include <functional>
#include "UIObject.h"

class UIButton : public UIObject{


public:

	std::function<void()> onClick;


	//UIButton();
	void Render() override;
	void Update() override;
	void Clicked(vector2d relativePosition) override;
	void ReleasedMouse() override; //called on all the objects on mouse release


};