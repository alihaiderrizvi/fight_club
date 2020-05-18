#ifndef KEN_H
#define KEN_H
#include "playerupdate.hpp"

class ken : public Player
{
private:
public:
    void rect_initializer();
    ken();
    ken(SDL_Renderer *, bool);
    virtual ~ken();
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