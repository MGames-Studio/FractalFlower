#include "SDL2/SDL.h"
#include "SDL2/SDL_events.h"
#include "Game.h"
#include "Rendering.h"
#include <stdio.h>
#include <ctime>
#include <cstdlib>


void Exit();

SDL_Window *window;

int main(int argc, char* argv[]) {

                     
    srand(time(NULL));
    

    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

    // Create an application window with the following settings:
    SDL_Window *window = SDL_CreateWindow(
        "An SDL2 window",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        640,                               // width, in pixels
        480,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );

    if (window == NULL) {
        printf("Could not create window: %s\n", SDL_GetError());
        return 1;
    }
   
    StartGame(window);

    

    Exit();
    return 0;
}

void Exit()
{

    ExitRenderer();
    ExitGame();


     if(window!=NULL)
         SDL_DestroyWindow(window);
     SDL_Quit();
}
