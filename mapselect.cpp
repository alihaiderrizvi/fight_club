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
    //creating relevant pointers and loading screens
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
}

//helper function to check coordinates selection
bool map::inBounds(int val, int low, int high)
{
    return ((val - high) * (val - low) <= 0);
}

void map::update_map()
{
    //update the map to front
    SDL_BlitSurface(mapmenu, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);
}

void map::reset_map()
{
    //reset logic of map
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

//following function loads screens seperately according to cooridnates hovering
bool map::update_click(SDL_Surface* map_number, bool flag, int map_index)
{
    SDL_BlitSurface(map_number, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);
    map_select = map_index;
    map_select_flag = flag;
    return true;
}


bool map::update_surface(SDL_Surface* map_number)
{
    SDL_BlitSurface(map_number, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(gWindow);
    return true;
}

bool map::hover(int x, int y)
{
    if (inBounds(x, 15, 130) && inBounds(y, 110, 225))
    {
        return update_surface(map1);
    }
    else if (inBounds(x, 145, 260) && inBounds(y, 110, 225))
    {
        return update_surface(map2);
    }
    else if (inBounds(x, 277, 390) && inBounds(y, 110, 225))
    {
        return update_surface(map3);
    }
    else if (inBounds(x, 407, 520) && inBounds(y, 110, 225))
    {
        return update_surface(map4);
    }
    else if (inBounds(x, 537, 650) && inBounds(y, 110, 225))
    {
        return update_surface(map5);
    }
    else if (inBounds(x, 665, 780) && inBounds(y, 110, 225))
    {
        return update_surface(map6);
    }
    else if (inBounds(x, 15, 130) && inBounds(y, 280, 390))
    {
        return update_surface(map7);
    }
    else if (inBounds(x, 145, 260) && inBounds(y, 280, 390))
    {
        return update_surface(map8);
    }
    else if (inBounds(x, 277, 390) && inBounds(y, 280, 390))
    {
        return update_surface(map9);
    }
    else if (inBounds(x, 407, 520) && inBounds(y, 280, 390))
    {
        return update_surface(map10);
    }
    else if (inBounds(x, 537, 650) && inBounds(y, 280, 390))
    {
        return update_surface(map11);
    }
    else if (inBounds(x, 665, 780) && inBounds(y, 280, 390))
    {
        return update_surface(map12);
    }
    else if (inBounds(x, 15, 130) && inBounds(y, 440, 550))
    {
        return update_surface(map13);
    }
    else if (inBounds(x, 145, 260) && inBounds(y, 440, 550))
    {
        return update_surface(map14);
    }
    else if (inBounds(x, 277, 390) && inBounds(y, 440, 550))
    {
        return update_surface(map15);
    }
    else if (inBounds(x, 407, 520) && inBounds(y, 440, 550))
    {
        return update_surface(map16);
    }
    else if (inBounds(x, 537, 650) && inBounds(y, 440, 550))
    {
        return update_surface(map17);
    }
    else if (inBounds(x, 665, 780) && inBounds(y, 440, 550))
    {
        return update_surface(map18);
    }
    else
    {
        return !update_surface(mapmenu);
    }
}

//following function provide click functionality according to given coordinates
bool map::click(int x, int y)
{
    if (inBounds(x, 15, 130) && inBounds(y, 110, 225))
    {
        return update_click(map1, true, 1);
    }
    else if (inBounds(x, 145, 260) && inBounds(y, 110, 225))
    {
        return update_click(map2, true, 2);
    }
    else if (inBounds(x, 277, 390) && inBounds(y, 110, 225))
    {
        return update_click(map3, true, 3);
    }
    else if (inBounds(x, 407, 520) && inBounds(y, 110, 225))
    {
        return update_click(map4, true, 4);
    }
    else if (inBounds(x, 537, 650) && inBounds(y, 110, 225))
    {
        return update_click(map5, true, 5);
    }
    else if (inBounds(x, 665, 780) && inBounds(y, 110, 225))
    {
        return update_click(map6, true, 6);
    }
    else if (inBounds(x, 15, 130) && inBounds(y, 280, 390))
    {
        return update_click(map7, true, 7);
    }
    else if (inBounds(x, 145, 260) && inBounds(y, 280, 390))
    {
        return update_click(map8, true, 8);
    }
    else if (inBounds(x, 277, 390) && inBounds(y, 280, 390))
    {
        return update_click(map9, true, 9);
    }
    else if (inBounds(x, 407, 520) && inBounds(y, 280, 390))
    {
        return update_click(map10, true, 10);
    }
    else if (inBounds(x, 537, 650) && inBounds(y, 280, 390))
    {
        return update_click(map11, true, 11);
    }
    else if (inBounds(x, 665, 780) && inBounds(y, 280, 390))
    {
        return update_click(map12, true, 12);
    }
    else if (inBounds(x, 15, 130) && inBounds(y, 440, 550))
    {
        return update_click(map13, true, 13);
    }
    else if (inBounds(x, 145, 260) && inBounds(y, 440, 550))
    {
        return update_click(map14, true, 14);
    }
    else if (inBounds(x, 277, 390) && inBounds(y, 440, 550))
    {
        return update_click(map15, true, 15);
    }
    else if (inBounds(x, 407, 520) && inBounds(y, 440, 550))
    {
        return update_click(map16, true, 16);
    }
    else if (inBounds(x, 537, 650) && inBounds(y, 440, 550))
    {
        return update_click(map17, true, 17);
    }
    else if (inBounds(x, 665, 780) && inBounds(y, 440, 550))
    {
        return update_click(map18, true, 18);
    }
    else
    {
        return update_surface(mapmenu);
    }
}