#pragma once
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <list>

////My Classes
#include "playmusic.hpp"
#include "mainmenu.hpp"
#include "mapselect.hpp"
#include "playerselect.hpp"
#include "instructionsandmoves.hpp"
#include "playerversus.hpp"
#include "backgroundupdate.hpp"
#include "frontgroundupdate.hpp"
#include "playerupdate.hpp"
////
#include "cammy.hpp"
#include "chunli.hpp"
#include "claw.hpp"
#include "dictador.hpp"
// #include "feilong.hpp"
// #include "guile.hpp"
// #include "ken.hpp"
// #include "ryu.hpp"
// #include "sagat.hpp"
// #include "zangief.hpp"
////

class Game
{
    //Screen dimension constants
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    int game_screen_flag = 0;

    //game_screen_flag=0 is mainmenu screen
    //game_screen_flag=1 is mapselect screen
    //game_screen_flag=2 is playerselect screen
    //game_screen_flag=3 is insandmoves screen
    //game_screen_flag=4 is playerversus screen
    //game_screen_flag=5 is ingame screen

public:
    SDL_Window *gWindow = NULL;
    SDL_Renderer *gRenderer = NULL;

    //built in SDL functions
    bool init();
    bool loadMedia();
    void run();
    void close();
    SDL_Texture *loadTexture(std::string path);

    //My_functions to update relevant screen, menu, game logic
    void updatemenu(SDL_Event, menu &, map &, playmusic &);
    void updatemap(SDL_Event, map &, background &, playerchoose &, playmusic &);
    void updateplayer(SDL_Event, playerchoose &, frontground &, insandmoves &, playmusic &);
    void updateinsandmoves(SDL_Event, insandmoves &, playmusic &, playerversus &, playerchoose &);
    void updateplayerversusdraw(playerversus &, playerchoose &, playmusic &);
    void updatebackground(background &, frontground &, playmusic &);
    void updatefrontground(SDL_Event, frontground &, playmusic &);
    void updatefrontgrounddraw(frontground &, playmusic &, Player *, Player *);
    void updatefightlogic(const Uint8 *, SDL_Event, Player *, Player *, frontground &);
    void updatefight(const Uint8 *, SDL_Event, Player *, Player *, frontground &);
    void updatefightdraw(Player *, Player *, bool);
};