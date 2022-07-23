#pragma once
#include "SDL2/SDL.h"
#include "SDL2/SDL_render.h"






void StartGame(SDL_Window* win);
void Update(float const &delta);
void ProcessEvents();
void ExitGame();


