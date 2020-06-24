#ifndef ZANGIEF_H
#define ZANGIEF_H
#include "playerupdate.hpp"

class zangief : public Player
{
private:
    void rect_initializer();

public:
    zangief();
    zangief(SDL_Renderer *, bool, int, int);
    virtual ~zangief();
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