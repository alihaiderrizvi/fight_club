#include "instructionsandmoves.hpp"

insandmoves::insandmoves(SDL_Window *iWindow)
{
    instructionmenu = SDL_LoadBMP("insandmoves/bmp/instructionmenu.bmp");
    instructionmenunext = SDL_LoadBMP("insandmoves/bmp/instructionmenunext.bmp");
    movesmenu = SDL_LoadBMP("insandmoves/bmp/movesmenu.bmp");
    movesmenuplay = SDL_LoadBMP("insandmoves/bmp/movesmenuplay.bmp");

    gWindow = iWindow;
    gScreenSurface = NULL;

    gScreenSurface = SDL_GetWindowSurface(gWindow);
    SDL_BlitSurface(instructionmenu, NULL, gScreenSurface, NULL);

    play_flag = false;

    hover_flag = false;
    click_flag = false;
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

    hover_flag = false;
    click_flag = false;

    new_player = false;
}

insandmoves::~insandmoves()
{
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

bool insandmoves::hover(int x, int y)
{
    if (insandmenu_screen == 0 && 25 < x && y > 525 && x < 115 && y < 565)
    {
        SDL_BlitSurface(instructionmenunext, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        hover_flag = true;
        return true;
    }
    else if (insandmenu_screen == 1 && 25 < x && y > 525 && x < 115 && y < 565)
    {
        SDL_BlitSurface(movesmenuplay, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        hover_flag = true;
        return true;
    }
    else if (insandmenu_screen == 0)
    {
        SDL_BlitSurface(instructionmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        hover_flag = false;
        return false;
    }
    else if (insandmenu_screen == 1)
    {
        SDL_BlitSurface(movesmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        hover_flag = false;
        click_flag = false;
        return false;
    }
}

bool insandmoves::click(int x, int y)
{
    if (insandmenu_screen == 0 && 25 < x && y > 525 && x < 115 && y < 565)
    {
        SDL_BlitSurface(movesmenuplay, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        insandmenu_screen = 1;
        click_flag = true;
        return true;
    }
    else if (insandmenu_screen == 1 && 25 < x && y > 525 && x < 115 && y < 565)
    {
        SDL_BlitSurface(movesmenuplay, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        play_flag = true;
        click_flag = true;
        return true;
    }
    else if (insandmenu_screen == 0)
    {
        SDL_BlitSurface(instructionmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        click_flag = false;
        return false;
    }
    else if (insandmenu_screen == 1)
    {
        SDL_BlitSurface(movesmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        click_flag = false;
        return false;
    }
}