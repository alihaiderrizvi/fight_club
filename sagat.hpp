#ifndef SAGAT_H
#define SAGAT_H
#include "playerupdate.hpp"

class sagat : public Player
{
private:
    void rect_initializer();

public:
    sagat();
    sagat(SDL_Renderer *, bool, int, int);
    virtual ~sagat();
    void idle(int, int);
    void walkleft();
    void walkright();
    void jump();
    void crouch();
    void idleblock();
    void crouchblock();
    void idlepunch();
    void idlekick();
    void crouchpunch();
    void crouchkick();
    void idlehit();
    void crouchhit();
    void knockdown();
    void KO();
    void victory();
    void special1();
    void special2();
};
#endif