#include "cammy.hpp"

cammy::cammy() {}
cammy::~cammy() {}

void cammy::rect_initializer()
{
    frame_count = 0;
    frame_delay = 0;
    delay_time = 1;
    total_frames = 6;

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

cammy::cammy(SDL_Renderer *renderer)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/cammy.png");
    rect_initializer();
}

void cammy::idle()
{
    ratio_set(idle_src, idle_dst, 5);
    Player::idle();
}

void cammy::walk()
{
    ratio_set(walk_src, walk_dst, 6);
    xpos = xpos + 20;
    Player::walk();
}

void cammy::jump()
{
    ratio_set(jump_src, jump_dst, 6);
    Player::jump();
}

void cammy::crouch()
{
    crouch_dst[0] = {xpos, ypos, 100, 200};
    Player::crouch();
}

void cammy::block()
{
    block_dst[0] = {xpos, ypos, 100, 200};
    Player::block();
}

void cammy::idlepunch()
{
    idlepunch_dst[0] = {xpos, ypos, 100, 200};
    Player::idlepunch();
}

void cammy::idlekick()
{
    idlekick_dst[0] = {xpos, ypos, 100, 200};
    Player::idlekick();
}

void cammy::crouchpunch()
{
    crouchpunch_dst[0] = {xpos, ypos, 100, 200};
    Player::crouchpunch();
}

void cammy::crouchkick()
{
    crouchkick_dst[0] = {xpos, ypos, 100, 200};
    Player::crouchkick();
}

void cammy::idlehit()
{
    idlehit_dst[0] = {xpos, ypos, 100, 200};
    Player::idlehit();
}

void cammy::crouchhit()
{
    crouchhit_dst[0] = {xpos, ypos, 100, 200};
    Player::crouchhit();
}

void cammy::knockdown()
{
    knockdown_dst[0] = {xpos, ypos, 100, 200};
    Player::knockdown();
}

void cammy::KO()
{
    KO_dst[0] = {xpos, ypos, 100, 200};
    Player::KO();
}

void cammy::victory()
{
    victory_dst[0] = {xpos, ypos, 100, 200};
    Player::victory();
}