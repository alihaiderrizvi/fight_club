#ifndef CHUNLI_H
#define CHUNLI_H
#include "playerupdate.hpp"

class chunli : public Player
{
private:
    void rect_initializer();

public:
    chunli();
    chunli(SDL_Renderer *, bool, int, int);
    virtual ~chunli();
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