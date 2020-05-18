#ifndef SAGAT_H
#define SAGAT_H
#include "playerupdate.hpp"

class sagat : public Player
{
private:
public:
    void rect_initializer();
    sagat();
    sagat(SDL_Renderer *, bool);
    virtual ~sagat();
    void intro();
    void idle();
    void walk();
    void jump();
    void crouch();
    void block();
    void idlepunch();
    void idlekick();
    void crouchpunch();
    void crouchkick();
    void idlehit();
    void crouchhit();
    void knockdown();
    void KO();
    void victory();
};
#endif