#include "ryu.hpp"

ryu::ryu() {}
ryu::~ryu() {}

void ryu::rect_initializer()
{
    frame_count = 0;
    frame_delay = 5;
    total_frames = 6;

    idle_src = new SDL_Rect[4];
    idle_dst = new SDL_Rect[4];

    idle_src[0] = {6, 18, 42, 80};
    idle_src[1] = {55, 18, 42, 80};
    idle_src[2] = {104, 18, 42, 80};
    idle_src[3] = {153, 18, 42, 80};
}

ryu::ryu(SDL_Renderer *renderer, bool opponent)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/ryu.png");
    rect_initializer();
}

void ryu::idle()
{
    idle_dst[0] = {xpos, ypos, 100, 200};
    idle_dst[1] = {xpos, ypos - 1, 100, 201};
    idle_dst[2] = {xpos, ypos - 2, 100, 202};
    idle_dst[3] = {xpos, ypos - 1, 100, 201};
    Player::idle();
}

void ryu::walk()
{
    walk_dst[0] = {0, 300, 100, 200};
    Player::walk();
}

void ryu::jump()
{
    jump_dst[0] = {0, 300, 100, 200};
    Player::jump();
}

void ryu::crouch()
{
    crouch_dst[0] = {0, 300, 100, 200};
    Player::crouch();
}

void ryu::block()
{
    block_dst[0] = {0, 300, 100, 200};
    Player::block();
}

void ryu::idlepunch()
{
    idlepunch_dst[0] = {0, 300, 100, 200};
    Player::idlepunch();
}

void ryu::idlekick()
{
    idlekick_dst[0] = {0, 300, 100, 200};
    Player::idlekick();
}

void ryu::crouchpunch()
{
    crouchpunch_dst[0] = {0, 300, 100, 200};
    Player::crouchpunch();
}

void ryu::crouchkick()
{
    crouchkick_dst[0] = {0, 300, 100, 200};
    Player::crouchkick();
}

void ryu::idlehit()
{
    idlehit_dst[0] = {0, 300, 100, 200};
    Player::idlehit();
}

void ryu::crouchhit()
{
    crouchhit_dst[0] = {0, 300, 100, 200};
    Player::crouchhit();
}

void ryu::knockdown()
{
    knockdown_dst[0] = {0, 300, 100, 200};
    Player::knockdown();
}

void ryu::KO()
{
    KO_dst[0] = {0, 300, 100, 200};
    Player::KO();
}

void ryu::victory()
{
    victory_dst[0] = {0, 300, 100, 200};
    Player::victory();
}