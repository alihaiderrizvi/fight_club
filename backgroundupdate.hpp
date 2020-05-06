#include "unit.hpp"

class background : public Unit
{
private:
    int map_select = 1;

public:
    background(SDL_Window *, SDL_Renderer *);
    virtual ~background();

    void reset_background();
    void set_map(int);
};