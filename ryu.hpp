#ifndef RYU_H
#define RYU_H
#include "playerupdate.hpp"

class ryu : public Player
{
private:
public:
    void rect_initializer();
    ryu();
    ryu(SDL_Renderer *renderer);
    virtual ~ryu();
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