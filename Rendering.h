#pragma once
#include "Game.h"
#include "SDL2/SDL_render.h"
#include "vector2d.h"
#include "Plant.h"


void StartRenderer(SDL_Window* win);
void RenderScreen(float const &delta);
void ExitRenderer();
void DrawLine( vector2d start, vector2d direction,SDL_Color color,float thickness=1);
void DrawRect(SDL_Rect const& rect, SDL_Color const& color, bool filled =true);
void DrawText(const char* text,vector2d pos ,SDL_Color const& color, bool ceneter =0);
