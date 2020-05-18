#ifndef DICTADOR_H
#define DICTADOR_H
#include "playerupdate.hpp"

class dictador : public Player
{
private:
public:
    void rect_initializer();
    dictador();
    dictador(SDL_Renderer *, bool);
    virtual ~dictador();
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