#include "sagat.hpp"

sagat::sagat() {}
sagat::~sagat() {}

void sagat::rect_initializer()
{
    frame_count = 0;
    frame_delay = 5;
    total_frames = 6;

    idle_src = new SDL_Rect[5];
    idle_dst = new SDL_Rect[5];

    idle_src[0] = {5, 31, 46, 81};
    idle_src[1] = {59, 30, 46, 82};
    idle_src[2] = {111, 29, 46, 83};
    idle_src[3] = {164, 30, 46, 82};
    idle_src[4] = {217, 31, 46, 81};
}

sagat::sagat(SDL_Renderer *renderer, bool opponent)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/sagat.png");
    rect_initializer();
}

void sagat::idle()
{
    idle_dst[0] = {xpos, ypos, 100, 200};
    idle_dst[1] = {xpos, ypos - 1, 100, 201};
    idle_dst[2] = {xpos, ypos - 2, 100, 202};
    idle_dst[3] = {xpos, ypos - 1, 100, 201};
    idle_dst[4] = {xpos, ypos, 100, 200};
    Player::idle();
}

void sagat::walk()
{
    walk_dst[0] = {0, 300, 100, 200};
    Player::walk();
}

void sagat::jump()
{
    jump_dst[0] = {0, 300, 100, 200};
    Player::jump();
}

void sagat::crouch()
{
    crouch_dst[0] = {0, 300, 100, 200};
    Player::crouch();
}

void sagat::block()
{
    block_dst[0] = {0, 300, 100, 200};
    Player::block();
}

void sagat::idlepunch()
{
    idlepunch_dst[0] = {0, 300, 100, 200};
    Player::idlepunch();
}

void sagat::idlekick()
{
    idlekick_dst[0] = {0, 300, 100, 200};
    Player::idlekick();
}

void sagat::crouchpunch()
{
    crouchpunch_dst[0] = {0, 300, 100, 200};
    Player::crouchpunch();
}

void sagat::crouchkick()
{
    crouchkick_dst[0] = {0, 300, 100, 200};
    Player::crouchkick();
}

void sagat::idlehit()
{
    idlehit_dst[0] = {0, 300, 100, 200};
    Player::idlehit();
}

void sagat::crouchhit()
{
    crouchhit_dst[0] = {0, 300, 100, 200};
    Player::crouchhit();
}

void sagat::knockdown()
{
    knockdown_dst[0] = {0, 300, 100, 200};
    Player::knockdown();
}

void sagat::KO()
{
    KO_dst[0] = {0, 300, 100, 200};
    Player::KO();
}

void sagat::victory()
{
    victory_dst[0] = {0, 300, 100, 200};
    Player::victory();
}