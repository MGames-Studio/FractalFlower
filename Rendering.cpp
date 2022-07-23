#include "Rendering.h"
#include "SDL2/SDL_render.h"
#include "PlantRenderer.h"
#include "vector2d.h"
#include "Plant.h"
#include "UI/UIManager.h"
#include "UI/UIButton.h"





SDL_Renderer *renderer;
Plant testPlant = Plant();
void StartRenderer(SDL_Window* win)
{
    testPlant.RandomPlant();
    UIButton testbutton = UIButton();
    testbutton.rect.w=100;
    testbutton.rect.h=100;
    testbutton.color.a=255;
    AddUIObject(testbutton);
	renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

}

void RenderScreen(float const &delta){
	SDL_SetRenderDrawColor( renderer, 50, 50, 100, 255 );
    SDL_RenderClear( renderer );

    SDL_SetRenderDrawColor( renderer, 110, 110, 110, 255 );


    DrawPlant(&testPlant,3.14);


    DrawUI();

    SDL_RenderPresent(renderer);
}

void ExitRenderer()
{

	SDL_DestroyRenderer(renderer);
}

void DrawLine( vector2d start, vector2d direction,SDL_Color color,float thickness)
{

        SDL_SetRenderDrawColor( renderer, color.r, color.g,color.b, 255 );
        SDL_RenderDrawLine(renderer,start.x,start.y,start.x+direction.x,start.y+direction.y);
       
        return; // redo that
        const vector2d rotated = direction.Perpendicular().Normalized();
       
        for(int i =1; i<=thickness;i++)
        {

            SDL_RenderDrawLine(renderer,start.x+rotated.x*i,start.y+rotated.y*i,start.x+direction.x+rotated.x*i,start.y+direction.y+rotated.y*i);
            SDL_RenderDrawLine(renderer,start.x+rotated.x*-i,start.y+rotated.y*-i,start.x+direction.x+rotated.x*-i,start.y+direction.y+rotated.y*-i);


        }

        
        
        

}
void DrawRect(SDL_Rect const& rect, SDL_Color const& color)
{

     SDL_SetRenderDrawColor( renderer, color.r, color.g,color.b, 255 );
     SDL_RenderDrawRect(renderer,&rect);
}

