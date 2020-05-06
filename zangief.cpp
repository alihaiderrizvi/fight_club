#include "zangief.hpp"

zangief::zangief() {}
zangief::~zangief() {}

void zangief::rect_initializer()
{
    source_count = 0;
    dst_count = 0;
    frame_delay = 0;
    total_frames_source = 5;
    total_frames_dst = 5;

    idle_src = new SDL_Rect[5];
    idle_dst = new SDL_Rect[5];

    idle_src[0] = {5, 31, 46, 81};
    idle_src[1] = {59, 30, 46, 82};
    idle_src[2] = {111, 29, 46, 83};
    idle_src[3] = {164, 30, 46, 82};
    idle_src[4] = {217, 31, 46, 81};
}

zangief::zangief(SDL_Renderer *renderer)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/zangief.png");
    rect_initializer();
}

void zangief::idle()
{
    idle_dst[0] = {xpos, ypos, 100, 200};
    idle_dst[1] = {xpos, ypos - 1, 100, 201};
    idle_dst[2] = {xpos, ypos - 2, 100, 202};
    idle_dst[3] = {xpos, ypos - 1, 100, 201};
    idle_dst[4] = {xpos, ypos, 100, 200};
    Player::idle();
}

void zangief::walk()
{
    walk_dst[0] = {0, 300, 100, 200};
    Player::walk();
}

void zangief::jump()
{
    jump_dst[0] = {0, 300, 100, 200};
    Player::jump();
}

void zangief::crouch()
{
    crouch_dst[0] = {0, 300, 100, 200};
    Player::crouch();
}

void zangief::block()
{
    block_dst[0] = {0, 300, 100, 200};
    Player::block();
}

void zangief::idlepunch()
{
    idlepunch_dst[0] = {0, 300, 100, 200};
    Player::idlepunch();
}

void zangief::idlekick()
{
    idlekick_dst[0] = {0, 300, 100, 200};
    Player::idlekick();
}

void zangief::crouchpunch()
{
    crouchpunch_dst[0] = {0, 300, 100, 200};
    Player::crouchpunch();
}

void zangief::crouchkick()
{
    crouchkick_dst[0] = {0, 300, 100, 200};
    Player::crouchkick();
}

void zangief::idlehit()
{
    idlehit_dst[0] = {0, 300, 100, 200};
    Player::idlehit();
}

void zangief::crouchhit()
{
    crouchhit_dst[0] = {0, 300, 100, 200};
    Player::crouchhit();
}

void zangief::knockdown()
{
    knockdown_dst[0] = {0, 300, 100, 200};
    Player::knockdown();
}

void zangief::KO()
{
    KO_dst[0] = {0, 300, 100, 200};
    Player::KO();
}

void zangief::victory()
{
    victory_dst[0] = {0, 300, 100, 200};
    Player::victory();
}