#include "unit.hpp"

class frontground : public Unit
{
private:
    bool exit_mainmenu_screen = true;
    bool exit_mainmenu_yes_screen = false;
    bool exit_mainmenu_no_screen = false;

    int p1 = 1;
    int p2 = 1;

    int timecountdelay = 0;

    float tfx = 0;
    float tfy = 276;
    bool game_over = false;

    SDL_Rect p1rectsrc;
    SDL_Rect p2rectsrc;
    SDL_Rect p1rectdst;
    SDL_Rect p2rectdst;

    SDL_Rect p1lifesrcrect;
    SDL_Rect p2lifesrcrect;
    SDL_Rect p1powersrcrect;
    SDL_Rect p2powersrcrect;

    SDL_Rect p1lifedstrect;
    SDL_Rect p2lifedstrect;
    SDL_Rect p1powerdstrect;
    SDL_Rect p2powerdstrect;

    SDL_Rect playerlifesrcbar;
    SDL_Rect playerpowersrcbar;

    SDL_Rect p1lifedstbar;
    SDL_Rect p1powerdstbar;
    SDL_Rect p2lifedstbar;
    SDL_Rect p2powerdstbar;

    SDL_Rect returntohomesrc;
    SDL_Rect exittomainmenusrc;
    SDL_Rect timerectsrc;
    SDL_Rect clocksrc;

    SDL_Rect returntohomedst;
    SDL_Rect exittomainmenudst;
    SDL_Rect timerectdst;
    SDL_Rect clockdst;

    SDL_Rect gamewinsrc;
    SDL_Rect gamelosesrc;
    SDL_Rect gameoversrc;

    SDL_Rect gameresultdst;

public:
    int timecount = 1;

    frontground(SDL_Window *, SDL_Renderer *);
    virtual ~frontground();

    SDL_RendererFlip flip_none = SDL_FLIP_NONE;
    SDL_RendererFlip flip_horizontal = SDL_FLIP_HORIZONTAL;

    bool game_paused = false;
    bool exited = false;

    void reset_frontground();

    void setplayerrect(int, int);
    void drawplayerrect();
    void drawplayerlifepowerrect();
    void drawplayer1life(int);
    void drawplayer1power(int);
    void drawplayer2life(int);
    void drawplayer2power(int);
    void drawroundtime();
    void drawexittomainmenu();
    void drawresult(bool, bool, bool);

    bool hover(int, int);
    bool click(int, int);

    void draw_frontground(int, int, int, int);
};