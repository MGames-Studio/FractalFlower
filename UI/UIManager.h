#pragma once
#include "UIOBject.h"



void DrawUI();
void UpdateUI();

void AddUIObject(UIObject & obj);
void RemoveUIObject(UIObject &obj);
void ResetUIObjects();

void HandleClickUI(vector2d const& pos);
bool IsInside(vector2d const& pos,SDL_Rect const& rect);

 



