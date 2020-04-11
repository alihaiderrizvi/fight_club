#include <SDL.h>
#include <SDL_image.h>

class menu
{
private:
    SDL_Surface *mainmenu = NULL;
    SDL_Surface *newgame = NULL;
    SDL_Surface *difficulty = NULL;
    SDL_Surface *sound = NULL;
    SDL_Surface *exit = NULL;

    SDL_Surface *difficultymenu = NULL;
    SDL_Surface *difficultynoob = NULL;
    SDL_Surface *difficultyaverage = NULL;
    SDL_Surface *difficultypro = NULL;

    SDL_Surface *soundmenu = NULL;
    SDL_Surface *soundoff = NULL;
    SDL_Surface *soundon = NULL;
    SDL_Surface *soundhigh = NULL;
    SDL_Surface *soundmedium = NULL;
    SDL_Surface *soundlow = NULL;

    SDL_Surface *exitmenu = NULL;
    SDL_Surface *exitoff = NULL;
    SDL_Surface *exiton = NULL;

public:
    menu(SDL_Window *);
    ~menu();

    SDL_Surface *gScreenSurface = NULL;
    SDL_Window *gWindow = NULL;

    int screen_level;
    int difficulty_level;
    int sound_level;
    int sound_intensity_level;
    int exit_level;
    bool game_select_flag;

    bool hover_flag;
    bool click_flag;

    void reset_menu();
    bool hover(int, int);
    bool click(int, int);
};