#include "playerversus.hpp"

playerversus::playerversus(SDL_Window *iWindow, SDL_Renderer *iRenderer)
{
    //loading and intializing assets
    gWindow = iWindow;
    gRenderer = iRenderer;
    versus_screen = loadTexture("playerversus/playerversusmenu.png");
    assets = loadTexture("playerversus/playerversus.png");
    delay = 0;
    p1_dst = {50, 80, 250, 450};
    p2_dst = {470, 80, 250, 450};

    p1_frames = 0;
    p2_frames = 0;
}

playerversus::~playerversus()
{
    SDL_DestroyTexture(versus_screen);
}

void playerversus::reset_playerversus()
{
    p1_frames = 0;
    p2_frames = 0;
    delay = 0;
}

void playerversus::player_rect(int p1, int p2)
{
    //selecting the rectangle of selected player
    switch (p1)
    {
    case 1:
        p1_frames = 7;
        p1_src = {0, 0, 300, 500};
        break;
    case 2:
        p1_frames = 5;
        p1_src = {0, 500, 300, 500};
        break;
    case 3:
        p1_frames = 4;
        p1_src = {0, 1000, 300, 500};
        break;
    case 4:
        p1_frames = 4;
        p1_src = {0, 1500, 300, 500};
        break;
    case 5:
        p1_frames = 10;
        p1_src = {0, 2000, 300, 500};
        break;
    case 6:
        p1_frames = 5;
        p1_src = {0, 2500, 300, 500};
        break;
    case 7:
        p1_frames = 6;
        p1_src = {0, 3000, 300, 500};
        break;
    case 8:
        p1_frames = 6;
        p1_src = {0, 3500, 300, 500};
        break;
    case 9:
        p1_frames = 6;
        p1_src = {0, 4000, 300, 500};
        break;
    case 10:
        p1_frames = 4;
        p1_src = {0, 4500, 300, 500};
        break;
    }
    switch (p2)
    {
    case 1:
        p2_frames = 7;
        p2_src = {0, 0, 300, 500};
        break;
    case 2:
        p2_frames = 5;
        p2_src = {0, 500, 300, 500};
        break;
    case 3:
        p2_frames = 4;
        p2_src = {0, 1000, 300, 500};
        break;
    case 4:
        p2_frames = 4;
        p2_src = {0, 1500, 300, 500};
        break;
    case 5:
        p2_frames = 10;
        p2_src = {0, 2000, 300, 500};
        break;
    case 6:
        p2_frames = 5;
        p2_src = {0, 2500, 300, 500};
        break;
    case 7:
        p2_frames = 6;
        p2_src = {0, 3000, 300, 500};
        break;
    case 8:
        p2_frames = 6;
        p2_src = {0, 3500, 300, 500};
        break;
    case 9:
        p2_frames = 6;
        p2_src = {0, 4000, 300, 500};
        break;
    case 10:
        p2_frames = 4;
        p2_src = {0, 4500, 300, 500};
        break;
    }
}

void playerversus::draw_opponents(SDL_Renderer *renderer)
{
    //drawing the players opposition position on the scrreen
    SDL_RenderCopy(renderer, versus_screen, NULL, NULL);
    SDL_RenderCopy(renderer, assets, &p1_src, &p1_dst);
    SDL_RenderCopyEx(renderer, assets, &p2_src, &p2_dst, 0, NULL, flip);
    if (delay % 2 == 0)
    {
        p1_src.x += 300;
        if (p1_src.x >= p1_frames * 300)
        {
            p1_src.x = 0;
        }
        p2_src.x += 300;
        if (p2_src.x >= p2_frames * 300)
        {
            p2_src.x = 0;
        }
    }
    delay++;
}
