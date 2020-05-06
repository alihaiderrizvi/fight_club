#include "chunli.hpp"

chunli::chunli() {}
chunli::~chunli() {}

void chunli::rect_initializer()
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

chunli::chunli(SDL_Renderer *renderer)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/chunli.png");
    rect_initializer();
}

void chunli::idle()
{
    idle_dst[0] = {xpos, ypos, 100, 200};
    idle_dst[1] = {xpos, ypos - 1, 100, 201};
    idle_dst[2] = {xpos, ypos - 2, 100, 202};
    idle_dst[3] = {xpos, ypos - 1, 100, 201};
    idle_dst[4] = {xpos, ypos, 100, 200};
    Player::idle();
}

void chunli::walk()
{
    walk_dst[0] = {0, 300, 100, 200};
    Player::walk();
}

void chunli::jump()
{
    jump_dst[0] = {0, 300, 100, 200};
    Player::jump();
}

void chunli::crouch()
{
    crouch_dst[0] = {0, 300, 100, 200};
    Player::crouch();
}

void chunli::block()
{
    block_dst[0] = {0, 300, 100, 200};
    Player::block();
}

void chunli::idlepunch()
{
    idlepunch_dst[0] = {0, 300, 100, 200};
    Player::idlepunch();
}

void chunli::idlekick()
{
    idlekick_dst[0] = {0, 300, 100, 200};
    Player::idlekick();
}

void chunli::crouchpunch()
{
    crouchpunch_dst[0] = {0, 300, 100, 200};
    Player::crouchpunch();
}

void chunli::crouchkick()
{
    crouchkick_dst[0] = {0, 300, 100, 200};
    Player::crouchkick();
}

void chunli::idlehit()
{
    idlehit_dst[0] = {0, 300, 100, 200};
    Player::idlehit();
}

void chunli::crouchhit()
{
    crouchhit_dst[0] = {0, 300, 100, 200};
    Player::crouchhit();
}

void chunli::knockdown()
{
    knockdown_dst[0] = {0, 300, 100, 200};
    Player::knockdown();
}

void chunli::KO()
{
    KO_dst[0] = {0, 300, 100, 200};
    Player::KO();
}

void chunli::victory()
{
    victory_dst[0] = {0, 300, 100, 200};
    Player::victory();
}