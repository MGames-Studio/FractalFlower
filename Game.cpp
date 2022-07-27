#include "Game.h"
#include "Rendering.h"
#include "UI/UIManager.h"
#include "Debug.h"
#include <stdio.h>


bool quitApplication =false;

void StartGame(SDL_Window* win)
{

	StartRenderer(win);
	InitializeDebug();
	
	Uint32 lastTicks = 0;
	while(!quitApplication)
	{
		Uint32 currentTicks = SDL_GetTicks();
		Uint32 tmp = lastTicks;
		lastTicks=currentTicks;
		Update(((float)currentTicks-(float)tmp)/1000);

	}
}

void Update(float const &delta)
{
	ProcessEvents();
	RenderScreen(delta);

	UpdateUI();
	
}


void ProcessEvents()
{
	SDL_Event event;

	while(SDL_PollEvent(&event))
	{
		if(event.type == SDL_QUIT)
			quitApplication = true;
		else if(event.type == SDL_MOUSEBUTTONDOWN)
			HandleClickUI(vector2d(event.button.x,event.button.y));


	}


}
void ExitGame()
{}