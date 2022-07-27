#include "Rendering.h"
#include "SDL2/SDL_render.h"
#include "PlantRenderer.h"
#include "vector2d.h"
#include "Plant.h"
#include "font.h"
#include "Debug.h"
#include "UI/UIManager.h"
#include "UI/UIButton.h"
#include "UI/UISlider.h"
#include <cstdio>
#include <cstring>




SDL_Renderer *renderer;
Plant testPlant = Plant();
void StartRenderer(SDL_Window* win)
{
    testPlant.RandomPlant();
    testPlant.branches=5;
    
	renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

    SDL_Color green = SDL_Color{0,200,0};

    UISlider* angleSlider = new UISlider(testPlant.angleDifference);
    angleSlider->rect.x =20;
    angleSlider->rect.w=100;
    angleSlider->rect.y =20;
    angleSlider->rect.h=20;
    angleSlider->maxValue=7;
    angleSlider->color=green;
    AddUIObject(*angleSlider);

    UISlider* sizeSlider = new UISlider(testPlant.sizeDifference);
    sizeSlider->rect.x =20;
    sizeSlider->rect.w=100;
    sizeSlider->rect.y =50;
    sizeSlider->rect.h=20;
    sizeSlider->minValue =0;
    sizeSlider->maxValue=1;
    sizeSlider->color=green;
    AddUIObject(*sizeSlider);

    UISlider* startSlider = new UISlider(testPlant.startSize);
    startSlider->rect.x =20;
    startSlider->rect.w=100;
    startSlider->rect.y =80;
    startSlider->rect.h=20;
    startSlider->minValue =0;
    startSlider->maxValue=1;
    startSlider->color=green;
    AddUIObject(*startSlider);

    UIButton* randomButton = new UIButton();
    randomButton->rect.x =20;
    randomButton->rect.w=100;
    randomButton->rect.y=110;
    randomButton->rect.h = 20;
    randomButton->color=green;
    randomButton->onClick = std::bind(&Plant::RandomPlant,&testPlant);
    AddUIObject(*randomButton);

}

void RenderScreen(float const &delta){
	SDL_SetRenderDrawColor( renderer, 30, 30, 100, 255 );
    SDL_RenderClear( renderer );


   

    
    DrawPlant(&testPlant,3.14);

    DrawUI();
    DrawText("random",vector2d(70,120),SDL_Color(),true);

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
void DrawRect(SDL_Rect  rect, SDL_Color const& color,bool filled,bool ceneter)
{
    if(ceneter)
    {
        rect.x-=rect.w/2;
        rect.y-=rect.h/2;

    }

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



