#ifndef CLAW_H
#define CLAW_H
#include "playerupdate.hpp"

class claw : public Player
{
private:
public:
    void rect_initializer();
    claw();
    claw(SDL_Renderer *renderer);
    virtual ~claw();
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