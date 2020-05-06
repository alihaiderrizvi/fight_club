#ifndef GUILE_H
#define GUILE_H
#include "playerupdate.hpp"

class guile : public Player
{
private:
public:
    void rect_initializer();
    guile();
    guile(SDL_Renderer *renderer);
    virtual ~guile();
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