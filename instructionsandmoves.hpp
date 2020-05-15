#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
using namespace std;

class insandmoves
{
private:
    SDL_Surface *instructionmenu = NULL;
    SDL_Surface *instructionmenunext = NULL;
    SDL_Surface *movesmenu = NULL;
    SDL_Surface *movesmenuplay = NULL;

public:
    insandmoves(SDL_Window *);
    ~insandmoves();

    bool play_flag = false;
    int insandmenu_screen = 0;
    bool new_player = false;

    SDL_Surface *gScreenSurface = NULL;
    SDL_Window *gWindow = NULL;

    void update_insandmoves();
    void reset_insandmoves();
    bool hover(int, int);
    bool click(int, int);
};