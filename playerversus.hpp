#include "unit.hpp"

//class for playercersus screen or oppostion screen
class playerversus : public Unit
{
private:
    SDL_Texture *versus_screen = NULL;
    SDL_RendererFlip flip = SDL_FLIP_HORIZONTAL;
    SDL_Rect p1_src;
    SDL_Rect p1_dst;
    SDL_Rect p2_src;
    SDL_Rect p2_dst;
    int p1_frames;
    int p2_frames;

public:
    //atributes and helper functions to updat logic of screen
    int delay;
    playerversus(SDL_Window *, SDL_Renderer *);
    virtual ~playerversus();
    void player_rect(int, int);
    void draw_opponents(SDL_Renderer *);
    void reset_playerversus();
};