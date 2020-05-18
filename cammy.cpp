#include "cammy.hpp"

cammy::cammy() {}
cammy::~cammy() {}

void cammy::rect_initializer()
{
    idle_src = new SDL_Rect[5];
    idle_dst = new SDL_Rect[5];

    idle_src[0] = {5, 31, 47, 82};
    idle_src[1] = {59, 30, 47, 83};
    idle_src[2] = {111, 29, 47, 84};
    idle_src[3] = {164, 30, 47, 83};
    idle_src[4] = {217, 31, 47, 82};

    walk_src = new SDL_Rect[6];
    walk_dst = new SDL_Rect[6];

    walk_src[0] = {271, 26, 44, 87};
    walk_src[1] = {323, 31, 40, 82};
    walk_src[2] = {372, 29, 41, 84};
    walk_src[3] = {420, 26, 45, 87};
    walk_src[4] = {474, 31, 42, 82};
    walk_src[5] = {524, 29, 41, 84};

    jump_src = new SDL_Rect[6];
    jump_dst = new SDL_Rect[6];

    jump_src[0] = {572, 39, 47, 74};
    jump_src[1] = {670, 12, 39, 101};
    jump_src[2] = {711, 25, 29, 70};
    jump_src[3] = {745, 33, 33, 48};
    jump_src[4] = {786, 18, 31, 78};
    jump_src[5] = {826, 9, 35, 104};
}

cammy::cammy(SDL_Renderer *renderer, bool opponent)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/cammy.png");
    opp_player = opponent;
    rect_initializer();
    if (!opp_player)
    {
        xpos = 0;
        ypos = 400;
    }
    else if (opp_player)
    {
        xpos = 700;
        ypos = 400;
    }
    frame_count = 0;
    frame_delay = 0;
    delay_time = 1;
    total_frames = 5;

    idle_frames = 5;
    walk_frames = 6;
    jump_frames = 6;
    crouch_frames = 0;
    block_frames = 0;
    idlepunch_frames = 0;
    idlekick_frames = 0;
    crouchkick_frames = 0;
    crouchpunch_frames = 0;
    idlehit_frames = 0;
    crouchhit_frames = 0;
    knockdown_frames = 0;
    KO_frames = 0;
    victory_frames = 0;
}

void cammy::idle()
{
    if (idle_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = 5;

        false_all();
        idle_flag = true;
    }

    //Player::idle();
}

void cammy::walk(bool forward)
{
    if (walk_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = 6;

        false_all();
        walk_flag = true;
    }
    else
    {
        if (forward)
        {
            if (xpos < 700)
            {
                xpos = xpos + 20;
            }
        }
        else if (!forward)
        {
            if (xpos > 0)
            {
                xpos = xpos - 20;
            }
        }
    }

    //Player::walk();
}

void cammy::jump()
{
    if (jump_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 2;
        total_frames = 6;

        false_all();
        jump_flag = true;
        move_continue = true;
    }
    else
    {
        if (frame_delay % delay_time == 0)
        {
            switch (frame_count)
            {
            case 0:
                ypos -= 20;
                break;
            case 1:
                ypos -= 30;
                break;
            case 2:
                ypos -= 40;
                break;
            case 3:
                ypos += 20;
                break;
            case 4:
                ypos += 30;
                break;
            case 5:
                ypos += 40;
                break;
            }
        }

        //Player::jump();
    }
}

void cammy::crouch()
{
    ratio_set(crouch_src, crouch_dst, 2);
    Player::crouch();
}

void cammy::block()
{
    ratio_set(block_src, block_dst, 2);
    Player::block();
}

void cammy::idlepunch()
{
    ratio_set(idlepunch_src, idlepunch_dst, 5);
    Player::idlepunch();
}

void cammy::idlekick()
{
    ratio_set(idlekick_src, idlekick_dst, 5);
    Player::idlekick();
}

void cammy::crouchpunch()
{
    ratio_set(crouchpunch_src, crouchpunch_dst, 5);
    Player::crouchpunch();
}

void cammy::crouchkick()
{
    ratio_set(crouchkick_src, crouchkick_dst, 5);
    Player::crouchkick();
}

void cammy::idlehit()
{
    ratio_set(idlehit_src, idlehit_dst, 5);
    Player::idlehit();
}

void cammy::crouchhit()
{
    ratio_set(crouchhit_src, crouchhit_dst, 5);
    Player::crouchhit();
}

void cammy::knockdown()
{
    ratio_set(knockdown_src, knockdown_dst, 5);
    Player::knockdown();
}

void cammy::KO()
{
    ratio_set(KO_src, KO_dst, 5);
    Player::KO();
}

void cammy::victory()
{
    ratio_set(victory_src, victory_dst, 5);
    Player::victory();
}