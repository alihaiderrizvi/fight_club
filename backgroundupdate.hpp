#include "unit.hpp"

//following class draw the in game background
class background : public Unit
{
private:
    int map_select = 1;

public:
    //helper functions
    background(SDL_Window *, SDL_Renderer *);
    virtual ~background();

    void reset_background();
    void set_map(int);
};