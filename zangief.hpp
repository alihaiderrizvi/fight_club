#ifndef ZANGIEF_H
#define ZANGIEF_H
#include "playerupdate.hpp"

class zangief : public Player
{
private:
public:
    void rect_initializer();
    zangief();
    zangief(SDL_Renderer *, bool);
    virtual ~zangief();
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