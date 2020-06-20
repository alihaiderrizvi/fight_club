#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <cstdio>
#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

//Abstract class of a player
class Player
{
protected:
    SDL_RendererFlip dontflip = SDL_FLIP_NONE;
    SDL_RendererFlip playerflip = SDL_FLIP_HORIZONTAL;

    //Sounds of a player
    Mix_Chunk *hitjump = NULL;
    Mix_Chunk *lost = NULL;
    Mix_Chunk *special = NULL;
    Mix_Chunk *stun = NULL;

    //relevant attributes of player frames
    bool opp_player = false;
    bool all_false = false;

    int total_frames = 0;
    int frame_delay = 0;
    int delay_time = 1;
    int frame_count = 0;

    SDL_Renderer *gRenderer = NULL;
    SDL_Texture *assets = NULL;

    //rectangles pointers of all the moves array
    SDL_Rect *src = NULL;
    SDL_Rect *dst = NULL;

    SDL_Rect *idle_src = NULL;
    SDL_Rect *idle_dst = NULL;

    SDL_Rect *walkleft_src = NULL;
    SDL_Rect *walkleft_dst = NULL;

    SDL_Rect *walkright_src = NULL;
    SDL_Rect *walkright_dst = NULL;

    SDL_Rect *jump_src = NULL;
    SDL_Rect *jump_dst = NULL;

    SDL_Rect *crouch_src = NULL;
    SDL_Rect *crouch_dst = NULL;

    SDL_Rect *idleblock_src = NULL;
    SDL_Rect *idleblock_dst = NULL;

    SDL_Rect *crouchblock_src = NULL;
    SDL_Rect *crouchblock_dst = NULL;

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

    SDL_Rect *special1_src = NULL;
    SDL_Rect *special1_dst = NULL;

    SDL_Rect *special2_src = NULL;
    SDL_Rect *special2_dst = NULL;

public:
    //flag for all the moves
    bool idle_flag = false;
    bool walkleft_flag = false;
    bool walkright_flag = false;
    bool jump_flag = false;
    bool crouch_flag = false;
    bool idleblock_flag = false;
    bool crouchblock_flag = false;
    bool idlepunch_flag = false;
    bool idlekick_flag = false;
    bool crouchkick_flag = false;
    bool crouchpunch_flag = false;
    bool idlehit_flag = false;
    bool crouchhit_flag = false;
    bool knockdown_flag = false;
    bool KO_flag = false;
    bool victory_flag = false;
    bool special1_flag = false;
    bool special2_flag = false;

    //frame counts of all the moves
    int idle_frames = 0;
    int walkleft_frames = 0;
    int walkright_frames = 0;
    int jump_frames = 0;
    int crouch_frames = 0;
    int idleblock_frames = 0;
    int crouchblock_frames = 0;
    int idlepunch_frames = 0;
    int idlekick_frames = 0;
    int crouchkick_frames = 0;
    int crouchpunch_frames = 0;
    int idlehit_frames = 0;
    int crouchhit_frames = 0;
    int knockdown_frames = 0;
    int KO_frames = 0;
    int victory_frames = 0;
    int special1_frames = 0;
    int special2_frames = 0;

    //coordinates of the player
    int xpos = 0;
    int ypos = 400;

    int xpos_opp = 0;
    int opp_player_width = 0;
    int xpos_distance = 0;

    int playerwidth = 0;
    int playerheight = 0;

    //player life and pwoer
    int playerlife = 0;
    int playerpower = 0;
    int difficulty = 0;

    //types of moves
    bool move_continue = false;
    bool move_loop = true;
    bool move_bound = false;

    int move_wait = 0;
    int move_wait_count = 0;

    //damage count of moves
    int punch_damage_given = 0;
    int kick_damage_given = 0;
    int block_damage_given = 0;
    int special_damage_given = 0;

    int punch_damage_taken = 0;
    int kick_damage_taken = 0;
    int block_damage_taken = 0;
    int special_damage_taken = 0;

    int power_restore_rate = 0;
    int power_restore_count = 0;

    //relevant funcitons to update player attributes and check other relevant information
    SDL_Texture *loadTexture(std::string path);
    Player();
    virtual ~Player();
    void draw_player(SDL_Rect *, SDL_Rect *, bool);
    void ratio_set(SDL_Rect *, SDL_Rect *, int, int, int);
    void reset_move(int, int, bool, bool, bool, SDL_Rect *, SDL_Rect *);
    void xmover();
    void power_restore();
    void player_difficulty(int, int);
    void false_all();
    bool false_check();
    void player_action(bool);
    void update_rect();
    void setvolumechunk(int);
    void setvolume(int);

    //virtual function of the player moves
    virtual void idle(int, int);
    virtual void walkleft();
    virtual void walkright();
    virtual void jump();
    virtual void crouch();
    virtual void idleblock();
    virtual void crouchblock();
    virtual void idlepunch();
    virtual void idlekick();
    virtual void crouchpunch();
    virtual void crouchkick();
    virtual void idlehit();
    virtual void crouchhit();
    virtual void knockdown();
    virtual void KO();
    virtual void victory();
    virtual void special1();
    virtual void special2();
};

#endif