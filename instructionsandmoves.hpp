#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
using namespace std;

//class for instructions and moves screens
class insandmoves
{
private:
    //relevant pointers
    SDL_Surface *instructionmenu = NULL;
    SDL_Surface *instructionmenunext = NULL;
    SDL_Surface *movesmenu = NULL;
    SDL_Surface *movesmenuplay = NULL;

public:
    insandmoves(SDL_Window *);
    ~insandmoves();

    //logic of instruction and moves screens
    bool play_flag = false;
    int insandmenu_screen = 0;
    bool new_player = false;

    SDL_Surface *gScreenSurface = NULL;
    SDL_Window *gWindow = NULL;

    //helper functions
    void update_insandmoves();
    void reset_insandmoves();
    bool hover(int, int);
    bool click(int, int);
};