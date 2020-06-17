#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
using namespace std;

class map
{
private:
    SDL_Surface *mapmenu = NULL;
    SDL_Surface *map1 = NULL;
    SDL_Surface *map2 = NULL;
    SDL_Surface *map3 = NULL;
    SDL_Surface *map4 = NULL;
    SDL_Surface *map5 = NULL;
    SDL_Surface *map6 = NULL;
    SDL_Surface *map7 = NULL;
    SDL_Surface *map8 = NULL;
    SDL_Surface *map9 = NULL;
    SDL_Surface *map10 = NULL;
    SDL_Surface *map11 = NULL;
    SDL_Surface *map12 = NULL;
    SDL_Surface *map13 = NULL;
    SDL_Surface *map14 = NULL;
    SDL_Surface *map15 = NULL;
    SDL_Surface *map16 = NULL;
    SDL_Surface *map17 = NULL;
    SDL_Surface *map18 = NULL;

public:
    map(SDL_Window *);
    ~map();

    SDL_Surface *gScreenSurface;
    SDL_Window *gWindow;

    int map_select;
    bool map_select_flag;

    void update_map();
    void reset_map();
    bool hover(int, int);
    bool click(int, int);
    bool inBounds(int, int, int);
    bool update_surface(SDL_Surface*);
    bool update_click(SDL_Surface*, bool, int);
};