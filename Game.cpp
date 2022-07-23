#include "Game.h"
#include "Rendering.h"
#include <stdio.h>


bool quitApplication =false;

void StartGame(SDL_Window* win)
{

	
	StartRenderer(win);
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


	
}


void ProcessEvents()
{
	SDL_Event event;

	while(SDL_PollEvent(&event))
	{
		if(event.type == SDL_QUIT)
			quitApplication = true;

	}


}
void ExitGame()
{}