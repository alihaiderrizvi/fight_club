#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <cstdio>
#include <string>
using namespace std;

class playmusic
{
private:
    Mix_Music *gMusic = NULL;
    Mix_Music *gMusic_menu = NULL;
    Mix_Music *gMusic_ingame = NULL;

    Mix_Chunk *ghover = NULL;
    Mix_Chunk *gclick = NULL;

    Mix_Chunk *gwin = NULL;
    Mix_Chunk *glose = NULL;
    Mix_Chunk *gover = NULL;

public:
    playmusic();
    ~playmusic();

    bool hover_sound_flag = false;
    bool click_sound_flag = false;
    bool playing_flag = true;

    void playbackground(int);
    void setvolumechunk(int);
    void setvolume(int);
    void setpause();
    void setresume();
    void playhover();
    void playclick();
    void playwin();
    void playlose();
    void playover();
};