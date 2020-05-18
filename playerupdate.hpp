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
    SDL_RendererFlip dontflip = SDL_FLIP_NONE;
    SDL_RendererFlip playerflip = SDL_FLIP_HORIZONTAL;

    bool opp_player = false;
    bool all_false = false;

    int total_frames = 0;
    int frame_delay = 0;
    int delay_time = 0;
    int frame_count = 0;

    SDL_Renderer *gRenderer = NULL;
    SDL_Texture *assets = NULL;

    SDL_Rect *src = NULL;
    SDL_Rect *dst = NULL;

    SDL_Rect *idle_src = NULL;
    SDL_Rect *idle_dst = NULL;

    SDL_Rect *walk_src = NULL;
    SDL_Rect *walk_dst = NULL;

    SDL_Rect *jump_src = NULL;
    SDL_Rect *jump_dst = NULL;

    SDL_Rect *crouch_src = NULL;
    SDL_Rect *crouch_dst = NULL;

    SDL_Rect *block_src = NULL;
    SDL_Rect *block_dst = NULL;

    SDL_Rect *idlepunch_src = NULL;
    SDL_Rect *idlepunch_dst = NULL;

    SDL_Rect *idlekick_src = NULL;
    SDL_Rect *idlekick_dst = NULL;

    SDL_Rect *crouchkick_src = NULL;
    SDL_Rect *crouchkick_dst = NULL;

    SDL_Rect *crouchpunch_src = NULL;
    SDL_Rect *crouchpunch_dst = NULL;

    SDL_Rect *idlehit_src = NULL;
    SDL_Rect *idlehit_dst = NULL;

    SDL_Rect *crouchhit_src = NULL;
    SDL_Rect *crouchhit_dst = NULL;

    SDL_Rect *knockdown_src = NULL;
    SDL_Rect *knockdown_dst = NULL;

    SDL_Rect *KO_src = NULL;
    SDL_Rect *KO_dst = NULL;

    SDL_Rect *victory_src = NULL;
    SDL_Rect *victory_dst = NULL;

public:
    bool idle_flag = true;
    bool walk_flag = false;
    bool jump_flag = false;
    bool crouch_flag = false;
    bool block_flag = false;
    bool idlepunch_flag = false;
    bool idlekick_flag = false;
    bool crouchkick_flag = false;
    bool crouchpunch_flag = false;
    bool idlehit_flag = false;
    bool crouchhit_flag = false;
    bool knockdown_flag = false;
    bool KO_flag = false;
    bool victory_flag = false;

    int idle_frames = 0;
    int walk_frames = 0;
    int jump_frames = 0;
    int crouch_frames = 0;
    int block_frames = 0;
    int idlepunch_frames = 0;
    int idlekick_frames = 0;
    int crouchkick_frames = 0;
    int crouchpunch_frames = 0;
    int idlehit_frames = 0;
    int crouchhit_frames = 0;
    int knockdown_frames = 0;
    int KO_frames = 0;
    int victory_frames = 0;

    int xpos = 0;
    int ypos = 400;

    int playerlife = 50;
    int playerpower = 50;

    bool move_continue = false;

    SDL_Texture *loadTexture(std::string path);
    Player();
    virtual ~Player();
    void draw_player(SDL_Rect *, SDL_Rect *, bool);
    void ratio_set(SDL_Rect *, SDL_Rect *, int);
    void false_all();
    bool false_check();
    void player_action(bool);
    void update_rect();
    virtual void idle();
    virtual void walk(bool);
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