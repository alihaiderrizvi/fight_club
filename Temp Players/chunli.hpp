#ifndef CHUNLI_H
#define CHUNLI_H
#include "playerupdate.hpp"

class chunli : public Player
{
private:
public:
    void rect_initializer();
    chunli();
    chunli(SDL_Renderer *, bool);
    virtual ~chunli();
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