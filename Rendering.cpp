#include "Rendering.h"
#include "SDL2/SDL_render.h"
#include "PlantRenderer.h"
#include "vector2d.h"
#include "Plant.h"
#include "font.h"
#include "Debug.h"
#include "UI/UIManager.h"
#include "UI/UIButton.h"
#include <cstdio>
#include <cstring>




SDL_Renderer *renderer;
Plant testPlant = Plant();
void StartRenderer(SDL_Window* win)
{
    testPlant.RandomPlant();
    *Debug_Float1() =0;
    
	renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

}

void RenderScreen(float const &delta){
	SDL_SetRenderDrawColor( renderer, 50, 50, 100, 255 );
    SDL_RenderClear( renderer );

    SDL_SetRenderDrawColor( renderer, 110, 110, 110, 255 );

    testPlant.angleDifference = *Debug_Float1();
    DrawPlant(&testPlant,3.14);

    DrawText("i can write pretty long sentences, and i think its veeery cool!!!",vector2d(290,300),SDL_Color{0,00,00},true);
    DrawUI();

    SDL_RenderPresent(renderer);
}

void ExitRenderer()
{
    ResetUIObjects();

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
void DrawRect(SDL_Rect const& rect, SDL_Color const& color,bool filled)
{

     SDL_SetRenderDrawColor( renderer, color.r, color.g,color.b, 255 );

    if(filled)
        SDL_RenderFillRect(renderer,&rect);
    else
        SDL_RenderDrawRect(renderer,&rect);

}
void DrawLetter(const char* letter, vector2d pos)
{
    for (int i = 0; i < FONT_HIGHT; ++i)
    {

        for (int j = 0; j < FONT_WIDTH; ++j)
        {
            

            if((letter[i] >> j) & 1)
            {
                SDL_RenderDrawPoint(renderer,pos.x+j,pos.y+i);
            }
        }
    }

}
void DrawText(char const* text,vector2d pos ,SDL_Color const& color, bool ceneter)
{
    SDL_SetRenderDrawColor( renderer, color.r, color.g,color.b, 255 );

    if(ceneter)
    {
        pos.x -= int((float(strlen(text))/2)*FONT_WIDTH);
        pos.y -= FONT_HIGHT/2;
    }

    const char* it =text;
    for (int i=0; *(it+i); ++i)
    {
        const char* fontLetter = GetLetterFromFont(it+i);
        
       
        vector2d newPos = pos+vector2d(FONT_WIDTH*i,0);
        DrawLetter(fontLetter,newPos);
       
    }


}



