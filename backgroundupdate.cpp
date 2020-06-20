#include "backgroundupdate.hpp"

background::background(SDL_Window *iWindow, SDL_Renderer *iRenderer)
{
    //contructor for backgroudn
    gWindow = iWindow;
    gRenderer = iRenderer;
}

void background::reset_background()
{
    //resets logic for background drawing aspects
    SDL_DestroyTexture(assets);
    assets = NULL;

    delete[] src;
    src = NULL;

    map_select = 0;
    frames_count = 0;
    total_frames = 0;
    frames_rows = 0;
    frames_columns = 0;
}

background::~background()
{
}

void background::set_map(int map_select_set)
{
    //loading the map according to the selected flag
    map_select = map_select_set;
    set_mover(0, 0, 800, 600); //size of rectangle
    switch (map_select)
    {
    case 1:
        assets = loadTexture("mapsprite/marketmisfortune.png");
        set_full_frames(3, 8, 24);
        break;
    case 2:
        assets = loadTexture("mapsprite/midnightclub.png");
        set_full_frames(1, 8, 8);
        break;
    case 3:
        assets = loadTexture("mapsprite/traffictrouble.png");
        set_full_frames(10, 8, 80);
        break;
    case 4:
        assets = loadTexture("mapsprite/midtownmadness.png");
        set_full_frames(1, 8, 8);
        break;
    case 5:
        assets = loadTexture("mapsprite/industrialspoils.png");
        set_full_frames(1, 8, 8);
        break;
    case 6:
        assets = loadTexture("mapsprite/seoultower.png");
        set_full_frames(1, 8, 8);
        break;
    case 7:
        assets = loadTexture("mapsprite/airtemple.png");
        set_full_frames(1, 8, 8);
        break;
    case 8:
        assets = loadTexture("mapsprite/bathhouse.png");
        set_full_frames(1, 7, 7);
        break;
    case 9:
        assets = loadTexture("mapsprite/earthtemple.png");
        set_full_frames(1, 4, 4);
        break;
    case 10:
        assets = loadTexture("mapsprite/smokerscorner.png");
        set_full_frames(1, 4, 4);
        break;
    case 11:
        assets = loadTexture("mapsprite/portrunways.png");
        set_full_frames(1, 8, 8);
        break;
    case 12:
        assets = loadTexture("mapsprite/pawnshop.png");
        set_full_frames(1, 8, 8);
        break;
    case 13:
        assets = loadTexture("mapsprite/midstreet.png");
        set_full_frames(1, 8, 8);
        break;
    case 14:
        assets = loadTexture("mapsprite/citydocks.png");
        set_full_frames(1, 8, 8);
        break;
    case 15:
        assets = loadTexture("mapsprite/downtown.png");
        set_full_frames(1, 8, 8);
        break;
    case 16:
        assets = loadTexture("mapsprite/craftbarn.png");
        set_full_frames(2, 8, 12);
        break;
    case 17:
        assets = loadTexture("mapsprite/firetemple.png");
        set_full_frames(1, 8, 8);
        break;
    case 18:
        assets = loadTexture("mapsprite/stormydocks.png");
        set_full_frames(3, 8, 22);
        break;
    }
}
