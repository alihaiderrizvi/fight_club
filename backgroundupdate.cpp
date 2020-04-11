#include "backgroundupdate.hpp"

background::background(SDL_Window *iWindow, SDL_Renderer *iRenderer)
{
    gWindow = iWindow;
    gRenderer = iRenderer;
}

void background::reset_background()
{
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
    SDL_DestroyTexture(assets);
    assets = NULL;

    delete[] src;
    src = NULL;

    gWindow = NULL;
    gRenderer = NULL;
}

void background::set_map(int map_select_set)
{
    map_select = map_select_set;
    set_mover(0, 0, 800, 600);
    if (map_select == 1)
    {
        assets = loadTexture("mapsprite/marketmisfortune.png");
        set_full_frames(3, 8, 24);
    }
    else if (map_select == 2)
    {
        assets = loadTexture("mapsprite/midnightclub.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 3)
    {
        assets = loadTexture("mapsprite/traffictrouble.png");
        set_full_frames(10, 8, 80);
    }
    else if (map_select == 4)
    {
        assets = loadTexture("mapsprite/midtownmadness.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 5)
    {
        assets = loadTexture("mapsprite/industrialspoils.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 6)
    {
        assets = loadTexture("mapsprite/seoultower.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 7)
    {
        assets = loadTexture("mapsprite/airtemple.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 8)
    {
        assets = loadTexture("mapsprite/bathhouse.png");
        set_full_frames(1, 7, 7);
    }
    else if (map_select == 9)
    {
        assets = loadTexture("mapsprite/earthtemple.png");
        set_full_frames(1, 4, 4);
    }
    else if (map_select == 10)
    {
        assets = loadTexture("mapsprite/smokerscorner.png");
        set_full_frames(1, 4, 4);
    }
    else if (map_select == 11)
    {
        assets = loadTexture("mapsprite/portrunways.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 12)
    {
        assets = loadTexture("mapsprite/pawnshop.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 13)
    {
        assets = loadTexture("mapsprite/midstreet.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 14)
    {
        assets = loadTexture("mapsprite/citydocks.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 15)
    {
        assets = loadTexture("mapsprite/downtown.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 16)
    {
        assets = loadTexture("mapsprite/craftbarn.png");
        set_full_frames(2, 8, 12);
    }
    else if (map_select == 17)
    {
        assets = loadTexture("mapsprite/firetemple.png");
        set_full_frames(1, 8, 8);
    }
    else if (map_select == 18)
    {
        assets = loadTexture("mapsprite/stormydocks.png");
        set_full_frames(3, 8, 22);
    }
}
