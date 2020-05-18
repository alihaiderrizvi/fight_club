#ifndef CAMMY_H
#define CAMMY_H
#include "playerupdate.hpp"

class cammy : public Player
{
private:
public:
    void rect_initializer();
    cammy();
    cammy(SDL_Renderer *, bool);
    virtual ~cammy();
    void intro();
    void idle();
    void walk(bool);
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