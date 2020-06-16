#ifndef CAMMY_H
#define CAMMY_H
#include "playerupdate.hpp"

class cammy : public Player
{
private:
public:
    void rect_initializer();
    cammy();
    cammy(SDL_Renderer *, bool, int);
    virtual ~cammy();
    void idle();
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