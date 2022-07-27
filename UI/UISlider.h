#pragma once 
#include "UIObject.h"

class UISlider : public UIObject{


private:
	bool isHeld=0;
	

public:

	float* value;
	float minValue=0;
	float maxValue=100;

	UISlider(float& ref);

	void Render() override;
	void Update() override;
	void Clicked(vector2d relativePosition) override;

	float percent() const;
	float ValueFromPercent(float const& per) const;


};