#ifndef FEILONG_H
#define FEILONG_H
#include "playerupdate.hpp"

class feilong : public Player
{
private:
public:
    void rect_initializer();
    feilong();
    feilong(SDL_Renderer *renderer);
    virtual ~feilong();
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