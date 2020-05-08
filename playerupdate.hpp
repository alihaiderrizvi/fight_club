#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <cstdio>
#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
protected:
    int xpos = 0;
    int ypos = 400;

    int playerlife = 0;
    int playerpower = 0;

    int total_frames = 0;
    int frame_delay = 0;
    int delay_time = 0;
    int frame_count = 0;

    SDL_Renderer *gRenderer = NULL;
    SDL_Texture *assets = NULL;

    SDL_Rect *idle_src = NULL;
    SDL_Rect *idle_dst = NULL;
    bool idle_flag = false;

    SDL_Rect *walk_src = NULL;
    SDL_Rect *walk_dst = NULL;
    bool walk_flag = false;

    SDL_Rect *jump_src = NULL;
    SDL_Rect *jump_dst = NULL;
    bool jump_flag = false;

    SDL_Rect *crouch_src = NULL;
    SDL_Rect *crouch_dst = NULL;
    bool crouch_flag = false;

    SDL_Rect *block_src = NULL;
    SDL_Rect *block_dst = NULL;
    bool block_flag = false;

    SDL_Rect *idlepunch_src = NULL;
    SDL_Rect *idlepunch_dst = NULL;
    bool idlepunch_flag = false;

    SDL_Rect *idlekick_src = NULL;
    SDL_Rect *idlekick_dst = NULL;
    bool idlekick_flag = false;

    SDL_Rect *crouchkick_src = NULL;
    SDL_Rect *crouchkick_dst = NULL;
    bool crouchkick_flag = false;

    SDL_Rect *crouchpunch_src = NULL;
    SDL_Rect *crouchpunch_dst = NULL;
    bool crouchpunch_flag = false;

    SDL_Rect *idlehit_src = NULL;
    SDL_Rect *idlehit_dst = NULL;
    bool idlehit_flag = false;

    SDL_Rect *crouchhit_src = NULL;
    SDL_Rect *crouchhit_dst = NULL;
    bool crouchhit_flag = false;

    SDL_Rect *knockdown_src = NULL;
    SDL_Rect *knockdown_dst = NULL;
    bool knockdown_flag = false;

    SDL_Rect *KO_src = NULL;
    SDL_Rect *KO_dst = NULL;
    bool KO_flag = false;

    SDL_Rect *victory_src = NULL;
    SDL_Rect *victory_dst = NULL;
    bool victor_flag = false;

public:
    SDL_Texture *loadTexture(std::string path);
    Player();
    virtual ~Player();
    void draw_player(SDL_Rect *, SDL_Rect *, bool);
    void ratio_set(SDL_Rect *, SDL_Rect *, int);
    virtual void idle();
    virtual void walk();
    virtual void jump();
    virtual void crouch();
    virtual void block();
    virtual void idlepunch();
    virtual void idlekick();
    virtual void crouchpunch();
    virtual void crouchkick();
    virtual void idlehit();
    virtual void crouchhit();
    virtual void knockdown();
    virtual void KO();
    virtual void victory();
};

#endif