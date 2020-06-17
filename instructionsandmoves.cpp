#include "instructionsandmoves.hpp"

insandmoves::insandmoves(SDL_Window *iWindow)
{
    //loading relevant assets
    instructionmenu = SDL_LoadBMP("insandmoves/bmp/instructionmenu.bmp");
    instructionmenunext = SDL_LoadBMP("insandmoves/bmp/instructionmenunext.bmp");
    movesmenu = SDL_LoadBMP("insandmoves/bmp/movesmenu.bmp");
    movesmenuplay = SDL_LoadBMP("insandmoves/bmp/movesmenuplay.bmp");

    gWindow = iWindow;
    gScreenSurface = NULL;

    gScreenSurface = SDL_GetWindowSurface(gWindow);
    SDL_BlitSurface(instructionmenu, NULL, gScreenSurface, NULL);

    play_flag = false;
}

void insandmoves::update_insandmoves()
{
    SDL_BlitSurface(instructionmenu, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);
}

void insandmoves::reset_insandmoves()
{
    SDL_BlitSurface(instructionmenu, NULL, gScreenSurface, NULL);
    play_flag = false;
    insandmenu_screen = 0;

    new_player = false;
}

insandmoves::~insandmoves()
{
    //frees up all the memory
    SDL_FreeSurface(instructionmenu);
    SDL_FreeSurface(instructionmenunext);
    SDL_FreeSurface(movesmenu);
    SDL_FreeSurface(movesmenuplay);
    instructionmenu = NULL;
    instructionmenunext = NULL;
    movesmenu = NULL;
    movesmenuplay = NULL;
    gWindow = NULL;
    gScreenSurface = NULL;
}

//update screens according to hovering coordinates reference
bool insandmoves::hover(int x, int y)
{
    if (insandmenu_screen == 0 && 25 < x && y > 525 && x < 115 && y < 565)
    {
        SDL_BlitSurface(instructionmenunext, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (insandmenu_screen == 1 && 25 < x && y > 525 && x < 115 && y < 565)
    {
        SDL_BlitSurface(movesmenuplay, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (insandmenu_screen == 0)
    {
        SDL_BlitSurface(instructionmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
    else if (insandmenu_screen == 1)
    {
        SDL_BlitSurface(movesmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
}

//update the logic of screen when clicked
bool insandmoves::click(int x, int y)
{
    if (insandmenu_screen == 0 && 25 < x && y > 525 && x < 115 && y < 565)
    {
        SDL_BlitSurface(movesmenuplay, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        insandmenu_screen = 1;
        return true;
    }
    else if (insandmenu_screen == 1 && 25 < x && y > 525 && x < 115 && y < 565)
    {
        SDL_BlitSurface(movesmenuplay, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        play_flag = true;
        return true;
    }
    else if (insandmenu_screen == 0)
    {
        SDL_BlitSurface(instructionmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
    else if (insandmenu_screen == 1)
    {
        SDL_BlitSurface(movesmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
}