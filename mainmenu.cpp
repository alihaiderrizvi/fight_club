#include "mainmenu.hpp"

//screen levels
//0: mainmenu screen
//1: difficultymenu screen
//2: soundmenu screen

//difficulty levels
//0: noob
//1: average
//2: pro

//sound levels
//0: sound off
//1: sound on

//exit levels
//0: dont exit
//1: exit

//Following is the class to create a main menu
menu::menu(SDL_Window *iWindow)
{
    //creating relevant pointers and loading screens
    gWindow = iWindow;

    mainmenu = SDL_LoadBMP("mainmenu/bmp/mainmenu.bmp");
    newgame = SDL_LoadBMP("mainmenu/bmp/newgame.bmp");
    difficulty = SDL_LoadBMP("mainmenu/bmp/difficulty.bmp");
    sound = SDL_LoadBMP("mainmenu/bmp/sound.bmp");
    exit = SDL_LoadBMP("mainmenu/bmp/exit.bmp");

    difficultymenu = SDL_LoadBMP("mainmenu/bmp/difficultymenu.bmp");
    difficultynoob = SDL_LoadBMP("mainmenu/bmp/difficultynoob.bmp");
    difficultyaverage = SDL_LoadBMP("mainmenu/bmp/difficultyaverage.bmp");
    difficultypro = SDL_LoadBMP("mainmenu/bmp/difficultypro.bmp");

    soundmenu = SDL_LoadBMP("mainmenu/bmp/soundmenu.bmp");
    soundoff = SDL_LoadBMP("mainmenu/bmp/soundoff.bmp");
    soundon = SDL_LoadBMP("mainmenu/bmp/soundon.bmp");
    soundhigh = SDL_LoadBMP("mainmenu/bmp/soundhigh.bmp");
    soundmedium = SDL_LoadBMP("mainmenu/bmp/soundmedium.bmp");
    soundlow = SDL_LoadBMP("mainmenu/bmp/soundlow.bmp");

    exitmenu = SDL_LoadBMP("mainmenu/bmp/exitmenu.bmp");
    exiton = SDL_LoadBMP("mainmenu/bmp/exiton.bmp");
    exitoff = SDL_LoadBMP("mainmenu/bmp/exitoff.bmp");

    gScreenSurface = NULL;
    gScreenSurface = SDL_GetWindowSurface(gWindow);
    SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);

    screen_level = 0;
    difficulty_level = 0;
    sound_level = 1;
    sound_intensity_level = 1;
    exit_level = 0;
    game_select_flag = false;
}

void menu::reset_menu()
{
    //Resets the logic of the menu to intial conditions
    screen_level = 0;
    exit_level = 0;
    game_select_flag = false;

    SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);
}

menu::~menu()
{
    //freeing up the memory
    gScreenSurface = NULL;
    gWindow = NULL;

    SDL_FreeSurface(mainmenu);
    SDL_FreeSurface(newgame);
    SDL_FreeSurface(difficulty);
    SDL_FreeSurface(sound);
    SDL_FreeSurface(exit);

    SDL_FreeSurface(difficultymenu);
    SDL_FreeSurface(difficultynoob);
    SDL_FreeSurface(difficultyaverage);
    SDL_FreeSurface(difficultypro);

    SDL_FreeSurface(soundmenu);
    SDL_FreeSurface(soundoff);
    SDL_FreeSurface(soundon);
    SDL_FreeSurface(soundhigh);
    SDL_FreeSurface(soundmedium);
    SDL_FreeSurface(soundlow);

    SDL_FreeSurface(exitmenu);
    SDL_FreeSurface(exiton);
    SDL_FreeSurface(exitoff);
}

//following function loads screens seperately according to cooridnates hovering
bool menu::hover(int x, int y)
{
    if (20 < x && y > 295 && x < 260 && y < 345 && screen_level == 0)
    {
        SDL_BlitSurface(newgame, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (20 < x && y > 370 && x < 235 && y < 425 && screen_level == 0)
    {
        SDL_BlitSurface(difficulty, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (20 < x && y > 440 && x < 170 && y < 490 && screen_level == 0)
    {
        SDL_BlitSurface(sound, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (20 < x && y > 520 && x < 130 && y < 570 && screen_level == 0)
    {
        SDL_BlitSurface(exit, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (80 < x && y > 270 && x < 280 && y < 435 && screen_level == 1)
    {
        SDL_BlitSurface(difficultynoob, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (310 < x && y > 270 && x < 510 && y < 435 && screen_level == 1)
    {
        SDL_BlitSurface(difficultyaverage, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (530 < x && y > 260 && x < 720 && y < 425 && screen_level == 1)
    {
        SDL_BlitSurface(difficultypro, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (445 < x && y > 240 && x < 650 && y < 400 && screen_level == 2)
    {
        SDL_BlitSurface(soundon, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (170 < x && y > 240 && x < 380 && y < 410 && screen_level == 2)
    {
        SDL_BlitSurface(soundoff, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (350 < x && y > 20 && x < 445 && y < 70 && screen_level == 2)
    {
        SDL_BlitSurface(soundhigh, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (325 < x && y > 100 && x < 475 && y < 140 && screen_level == 2)
    {
        SDL_BlitSurface(soundmedium, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (360 < x && y > 160 && x < 440 && y < 200 && screen_level == 2)
    {
        SDL_BlitSurface(soundlow, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (450 < x && y > 270 && x < 680 && y < 430 && screen_level == 3)
    {
        SDL_BlitSurface(exiton, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (125 < x && y > 275 && x < 345 && y < 430 && screen_level == 3)
    {
        SDL_BlitSurface(exitoff, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return true;
    }
    else if (screen_level == 3)
    {
        SDL_BlitSurface(exitmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
    else if (screen_level == 2)
    {
        SDL_BlitSurface(soundmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
    else if (screen_level == 1)
    {
        SDL_BlitSurface(difficultymenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
    else if (screen_level == 0)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
}

//following function provide click functionality according to given coordinates
bool menu::click(int x, int y)
{
    if (20 < x && y > 295 && x < 260 && y < 345 && screen_level == 0)
    {
        SDL_BlitSurface(newgame, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        game_select_flag = true;
        return true;
    }
    else if (20 < x && y > 370 && x < 235 && y < 425 && screen_level == 0)
    {
        SDL_BlitSurface(difficultymenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        screen_level = 1;
        return true;
    }
    else if (20 < x && y > 440 && x < 170 && y < 490 && screen_level == 0)
    {
        SDL_BlitSurface(soundmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        screen_level = 2;
        return true;
    }
    else if (20 < x && y > 520 && x < 130 && y < 570 && screen_level == 0)
    {
        SDL_BlitSurface(exitmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        screen_level = 3;
        return true;
    }
    else if (80 < x && y > 270 && x < 280 && y < 435 && screen_level == 1)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        difficulty_level = 0;
        screen_level = 0;
        return true;
    }
    else if (310 < x && y > 270 && x < 510 && y < 435 && screen_level == 1)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        difficulty_level = 1;
        screen_level = 0;
        return true;
    }
    else if (530 < x && y > 260 && x < 720 && y < 425 && screen_level == 1)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        difficulty_level = 2;
        screen_level = 0;
        return true;
    }
    else if (445 < x && y > 240 && x < 650 && y < 400 && screen_level == 2)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        sound_level = 1;
        screen_level = 0;
        return true;
    }
    else if (170 < x && y > 240 && x < 380 && y < 410 && screen_level == 2)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        sound_level = 0;
        screen_level = 0;
        return true;
    }
    else if (350 < x && y > 20 && x < 445 && y < 70 && screen_level == 2)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        sound_intensity_level = 2;
        screen_level = 0;
        return true;
    }
    else if (325 < x && y > 100 && x < 475 && y < 140 && screen_level == 2)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        sound_intensity_level = 1;
        screen_level = 0;
        return true;
    }
    else if (360 < x && y > 160 && x < 440 && y < 200 && screen_level == 2)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        sound_intensity_level = 0;
        screen_level = 0;
        return true;
    }
    else if (450 < x && y > 270 && x < 680 && y < 430 && screen_level == 3)
    {
        SDL_BlitSurface(exiton, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        exit_level = 1;
        return true;
    }
    else if (125 < x && y > 275 && x < 345 && y < 430 && screen_level == 3)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        exit_level = 0;
        screen_level = 0;
        return true;
    }
    else if (screen_level == 3)
    {
        SDL_BlitSurface(exitmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
    else if (screen_level == 2)
    {
        SDL_BlitSurface(soundmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
    else if (screen_level == 1)
    {
        SDL_BlitSurface(difficultymenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
    else if (screen_level == 0)
    {
        SDL_BlitSurface(mainmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        return false;
    }
}