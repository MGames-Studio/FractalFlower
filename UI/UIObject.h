#pragma once 
#include "../vector2d.h"
#include "../SDL2/SDL_render.h"
#include "../SDL2/SDL.h"



class UIObject{

public:
	SDL_Rect rect; //position and hitbox
	SDL_Color color;



	virtual void Render()=0 ;
	virtual void Update() ;
	virtual void Clicked(vector2d relativePosition) ;
	virtual void ReleasedMouse() ; //called on all the objects on mouse release






};
