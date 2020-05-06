#include "mapselect.hpp"

//0: mapmenu
//1: marketmisfortune
//2: midnightclub
//3: traffictrouble
//4: midtownmadness
//5: industrialspoils
//6: seoultower
//7: airtemple
//8: bathhouse
//9: earthtemple
//10: smokerscorner
//11: portrunways
//12: pawnshop
//13: midstreet
//14: citydocks
//15: downtown
//16: craftbarn
//17: firetemple
//18: stormydocks

map::map(SDL_Window *iWindow)
{
    mapmenu = SDL_LoadBMP("mapselect/bmp/mapmenu.bmp");
    map1 = SDL_LoadBMP("mapselect/bmp/marketmisfortune.bmp");
    map2 = SDL_LoadBMP("mapselect/bmp/midnightclub.bmp");
    map3 = SDL_LoadBMP("mapselect/bmp/traffictrouble.bmp");
    map4 = SDL_LoadBMP("mapselect/bmp/midtownmadness.bmp");
    map5 = SDL_LoadBMP("mapselect/bmp/industrialspoils.bmp");
    map6 = SDL_LoadBMP("mapselect/bmp/seoultower.bmp");
    map7 = SDL_LoadBMP("mapselect/bmp/airtemple.bmp");
    map8 = SDL_LoadBMP("mapselect/bmp/bathhouse.bmp");
    map9 = SDL_LoadBMP("mapselect/bmp/earthtemple.bmp");
    map10 = SDL_LoadBMP("mapselect/bmp/smokerscorner.bmp");
    map11 = SDL_LoadBMP("mapselect/bmp/portrunways.bmp");
    map12 = SDL_LoadBMP("mapselect/bmp/pawnshop.bmp");
    map13 = SDL_LoadBMP("mapselect/bmp/midstreet.bmp");
    map14 = SDL_LoadBMP("mapselect/bmp/citydocks.bmp");
    map15 = SDL_LoadBMP("mapselect/bmp/downtown.bmp");
    map16 = SDL_LoadBMP("mapselect/bmp/craftbarn.bmp");
    map17 = SDL_LoadBMP("mapselect/bmp/firetemple.bmp");
    map18 = SDL_LoadBMP("mapselect/bmp/stormydocks.bmp");

    gWindow = iWindow;
    gScreenSurface = NULL;

    gScreenSurface = SDL_GetWindowSurface(gWindow);
    SDL_BlitSurface(mapmenu, NULL, gScreenSurface, NULL);

    map_select = 1;
    map_select_flag = false;

    hover_flag = false;
    click_flag = false;
}

void map::update_map()
{
    SDL_BlitSurface(mapmenu, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);

    hover_flag = false;
    click_flag = false;
}

void map::reset_map()
{
    SDL_BlitSurface(mapmenu, NULL, gScreenSurface, NULL);
    map_select_flag = false;
}

map::~map()
{
    SDL_FreeSurface(mapmenu);
    SDL_FreeSurface(map1);
    SDL_FreeSurface(map2);
    SDL_FreeSurface(map3);
    SDL_FreeSurface(map4);
    SDL_FreeSurface(map5);
    SDL_FreeSurface(map6);
    SDL_FreeSurface(map7);
    SDL_FreeSurface(map8);
    SDL_FreeSurface(map9);
    SDL_FreeSurface(map10);
    SDL_FreeSurface(map11);
    SDL_FreeSurface(map12);
    SDL_FreeSurface(map13);
    SDL_FreeSurface(map14);
    SDL_FreeSurface(map15);
    SDL_FreeSurface(map16);
    SDL_FreeSurface(map17);
    SDL_FreeSurface(map18);

    gScreenSurface = NULL;
    gWindow = NULL;
}

bool map::hover(int x, int y)
{
    if (15 < x && y > 110 && x < 130 && y < 225)
    {
        SDL_BlitSurface(map1, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (145 < x && y > 110 && x < 260 && y < 225)
    {
        SDL_BlitSurface(map2, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (277 < x && y > 110 && x < 390 && y < 225)
    {
        SDL_BlitSurface(map3, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (407 < x && y > 110 && x < 520 && y < 225)
    {
        SDL_BlitSurface(map4, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (537 < x && y > 110 && x < 650 && y < 225)
    {
        SDL_BlitSurface(map5, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (665 < x && y > 110 && x < 780 && y < 225)
    {
        SDL_BlitSurface(map6, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (15 < x && y > 280 && x < 130 && y < 390)
    {
        SDL_BlitSurface(map7, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (145 < x && y > 280 && x < 260 && y < 390)
    {
        SDL_BlitSurface(map8, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (277 < x && y > 280 && x < 390 && y < 390)
    {
        SDL_BlitSurface(map9, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (407 < x && y > 280 && x < 520 && y < 390)
    {
        SDL_BlitSurface(map10, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (537 < x && y > 280 && x < 650 && y < 390)
    {
        SDL_BlitSurface(map11, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (665 < x && y > 280 && x < 780 && y < 390)
    {
        SDL_BlitSurface(map12, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (15 < x && y > 440 && x < 130 && y < 550)
    {
        SDL_BlitSurface(map13, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (145 < x && y > 440 && x < 260 && y < 550)
    {
        SDL_BlitSurface(map14, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (277 < x && y > 440 && x < 390 && y < 550)
    {
        SDL_BlitSurface(map15, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (407 < x && y > 440 && x < 520 && y < 550)
    {
        SDL_BlitSurface(map16, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (537 < x && y > 440 && x < 650 && y < 550)
    {
        SDL_BlitSurface(map17, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else if (665 < x && y > 440 && x < 780 && y < 550)
    {
        SDL_BlitSurface(map18, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = true;
        return true;
    }
    else
    {
        SDL_BlitSurface(mapmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //hover_flag = false;
        //click_flag = false;
        return false;
    }
}

bool map::click(int x, int y)
{
    if (15 < x && y > 110 && x < 130 && y < 225)
    {
        SDL_BlitSurface(map1, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 1;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (145 < x && y > 110 && x < 260 && y < 225)
    {
        SDL_BlitSurface(map2, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 2;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (277 < x && y > 110 && x < 390 && y < 225)
    {
        SDL_BlitSurface(map3, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 3;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (407 < x && y > 110 && x < 520 && y < 225)
    {
        SDL_BlitSurface(map4, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 4;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (537 < x && y > 110 && x < 650 && y < 225)
    {
        SDL_BlitSurface(map5, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 5;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (665 < x && y > 110 && x < 780 && y < 225)
    {
        SDL_BlitSurface(map6, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 6;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (15 < x && y > 280 && x < 130 && y < 390)
    {
        SDL_BlitSurface(map7, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 7;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (145 < x && y > 280 && x < 260 && y < 390)
    {
        SDL_BlitSurface(map8, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 8;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (277 < x && y > 280 && x < 390 && y < 390)
    {
        SDL_BlitSurface(map9, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 9;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (407 < x && y > 280 && x < 520 && y < 390)
    {
        SDL_BlitSurface(map10, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 10;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (537 < x && y > 280 && x < 650 && y < 390)
    {
        SDL_BlitSurface(map11, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 11;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (665 < x && y > 280 && x < 780 && y < 390)
    {
        SDL_BlitSurface(map12, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 12;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (15 < x && y > 440 && x < 130 && y < 550)
    {
        SDL_BlitSurface(map13, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 13;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (145 < x && y > 440 && x < 260 && y < 550)
    {
        SDL_BlitSurface(map14, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 14;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (277 < x && y > 440 && x < 390 && y < 550)
    {
        SDL_BlitSurface(map15, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 15;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (407 < x && y > 440 && x < 520 && y < 550)
    {
        SDL_BlitSurface(map16, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 16;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (537 < x && y > 440 && x < 650 && y < 550)
    {
        SDL_BlitSurface(map17, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 17;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else if (665 < x && y > 440 && x < 780 && y < 550)
    {
        SDL_BlitSurface(map18, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        map_select = 18;
        map_select_flag = true;
        //click_flag = true;
        return true;
    }
    else
    {
        SDL_BlitSurface(mapmenu, NULL, gScreenSurface, NULL);
        SDL_UpdateWindowSurface(gWindow);
        //click_flag = false;
        return true;
    }
}