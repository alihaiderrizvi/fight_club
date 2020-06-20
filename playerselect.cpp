#include "playerselect.hpp"

//0: playermenu
//1: cammy
//2: chunli
//3: claw
//4: dictador
//5: feilong
//6: guile
//7: ken
//8: ryu
//9: sagat
//10: zangief

playerchoose::playerchoose(SDL_Window *iWindow)
{
    //creating relevant pointers and loading screens
    playermenu = SDL_LoadBMP("playerselect/bmp/playermenu.bmp");
    player1 = SDL_LoadBMP("playerselect/bmp/cammy.bmp");
    player2 = SDL_LoadBMP("playerselect/bmp/chunli.bmp");
    player3 = SDL_LoadBMP("playerselect/bmp/claw.bmp");
    player4 = SDL_LoadBMP("playerselect/bmp/dictador.bmp");
    player5 = SDL_LoadBMP("playerselect/bmp/feilong.bmp");
    player6 = SDL_LoadBMP("playerselect/bmp/guile.bmp");
    player7 = SDL_LoadBMP("playerselect/bmp/ken.bmp");
    player8 = SDL_LoadBMP("playerselect/bmp/ryu.bmp");
    player9 = SDL_LoadBMP("playerselect/bmp/sagat.bmp");
    player10 = SDL_LoadBMP("playerselect/bmp/zangief.bmp");

    gWindow = iWindow;
    gScreenSurface = NULL;

    gScreenSurface = SDL_GetWindowSurface(gWindow);
    SDL_BlitSurface(playermenu, NULL, gScreenSurface, NULL);

    player_select = 1;
    player_select_flag = false;
}

void playerchoose::update_player()
{
    SDL_BlitSurface(playermenu, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);
}

void playerchoose::reset_player()
{
    //reset conditions of screen to intials
    SDL_BlitSurface(playermenu, NULL, gScreenSurface, NULL);
    player_select_flag = false;
}

playerchoose::~playerchoose()
{
    //frees up all teh memory
    SDL_FreeSurface(playermenu);
    SDL_FreeSurface(player1);
    SDL_FreeSurface(player2);
    SDL_FreeSurface(player3);
    SDL_FreeSurface(player4);
    SDL_FreeSurface(player5);
    SDL_FreeSurface(player6);
    SDL_FreeSurface(player7);
    SDL_FreeSurface(player8);
    SDL_FreeSurface(player9);
    SDL_FreeSurface(player10);

    gScreenSurface = NULL;
    gWindow = NULL;
}

//hvoer function to interchange screen against the cooridnates
bool playerchoose::hover(int x, int y)
{
    if (536 < x && y > 233 && x < 634 && y < 320)
    {
        SDL_BlitSurface(player1, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (538 < x && y > 112 && x < 636 && y < 197)
    {
        SDL_BlitSurface(player2, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (500 < x && y > 358 && x < 600 && y < 450)
    {
        SDL_BlitSurface(player3, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (437 < x && y > 482 && x < 536 && y < 572)
    {
        SDL_BlitSurface(player4, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (633 < x && y > 431 && x < 731 && y < 519)
    {
        SDL_BlitSurface(player5, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (372 < x && y > 313 && x < 471 && y < 403)
    {
        SDL_BlitSurface(player6, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (405 < x && y > 195 && x < 503 && y < 282)
    {
        SDL_BlitSurface(player7, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (662 < x && y > 85 && x < 760 && y < 176)
    {
        SDL_BlitSurface(player8, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (274 < x && y > 131 && x < 374 && y < 219)
    {
        SDL_BlitSurface(player9, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (673 < x && y > 255 && x < 772 && y < 345)
    {
        SDL_BlitSurface(player10, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else
    {
        SDL_BlitSurface(playermenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
}

//click function to update logic of screen
bool playerchoose::click(int x, int y)
{
    if (536 < x && y > 233 && x < 634 && y < 320)
    {
        SDL_BlitSurface(player1, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 1;
        player_select_flag = true;
        return true;
    }
    else if (538 < x && y > 112 && x < 636 && y < 197)
    {
        SDL_BlitSurface(player2, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 2;
        player_select_flag = true;
        return true;
    }
    else if (500 < x && y > 358 && x < 600 && y < 450)
    {
        SDL_BlitSurface(player3, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 3;
        player_select_flag = true;
        return true;
    }
    else if (437 < x && y > 482 && x < 536 && y < 572)
    {
        SDL_BlitSurface(player4, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 4;
        player_select_flag = true;
        return true;
    }
    else if (633 < x && y > 431 && x < 731 && y < 519)
    {
        SDL_BlitSurface(player5, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 5;
        player_select_flag = true;
        return true;
    }
    else if (372 < x && y > 313 && x < 471 && y < 403)
    {
        SDL_BlitSurface(player6, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 6;
        player_select_flag = true;
        return true;
    }
    else if (405 < x && y > 195 && x < 503 && y < 282)
    {
        SDL_BlitSurface(player7, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 7;
        player_select_flag = true;
        return true;
    }
    else if (662 < x && y > 85 && x < 760 && y < 176)
    {
        SDL_BlitSurface(player8, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 8;
        player_select_flag = true;
        return true;
    }
    else if (274 < x && y > 131 && x < 374 && y < 219)
    {
        SDL_BlitSurface(player9, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 9;
        player_select_flag = true;
        return true;
    }
    else if (673 < x && y > 255 && x < 772 && y < 345)
    {
        SDL_BlitSurface(player10, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        player_select = 10;
        player_select_flag = true;
        return true;
    }
    else
    {
        SDL_BlitSurface(playermenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
}