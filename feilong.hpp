#ifndef FEILONG_H
#define FEILONG_H
#include "playerupdate.hpp"

class feilong : public Player
{
private:
    void rect_initializer();

public:
    feilong();
    feilong(SDL_Renderer *, bool, int, int);
    virtual ~feilong();
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