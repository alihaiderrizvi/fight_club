#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
using namespace std;

//class for player selection screen
class playerchoose
{
private:
    SDL_Surface *playermenu = NULL;
    SDL_Surface *player1 = NULL;
    SDL_Surface *player2 = NULL;
    SDL_Surface *player3 = NULL;
    SDL_Surface *player4 = NULL;
    SDL_Surface *player5 = NULL;
    SDL_Surface *player6 = NULL;
    SDL_Surface *player7 = NULL;
    SDL_Surface *player8 = NULL;
    SDL_Surface *player9 = NULL;
    SDL_Surface *player10 = NULL;

public:
    playerchoose(SDL_Window *);
    ~playerchoose();

    SDL_Surface *gScreenSurface;
    SDL_Window *gWindow;

    //player select logic
    int player_select;
    int player_select2;
    bool player_select_flag;

    //helper function to update functionality of player select screen
    void update_player();
    void reset_player();
    bool hover(int, int);
    bool click(int, int);
};