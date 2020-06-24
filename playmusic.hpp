#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <cstdio>
#include <string>
using namespace std;

//following class take cares of all the sounds in the game
class playmusic
{
private:
    //making relevant pointers to music chunks
    Mix_Music *gMusic = NULL;
    Mix_Music *gMusic_menu = NULL;
    Mix_Music *gMusic_playerversus = NULL;
    Mix_Music *gMusic_ingame = NULL;

    Mix_Chunk *ghover = NULL;
    Mix_Chunk *gclick = NULL;

    Mix_Chunk *gfight = NULL;
    Mix_Chunk *gwin = NULL;
    Mix_Chunk *glose = NULL;
    Mix_Chunk *gover = NULL;

    bool resultplayed = false;

public:
    playmusic();
    ~playmusic();

    //relevant flags
    bool hover_sound_flag = false;
    bool click_sound_flag = false;
    bool playing_flag = true;

    //helper functions for sound manipulation
    void playbackground(int);
    void setvolumechunk(int);
    void setvolume(int);
    void setpause();
    void setresume();
    void playhover();
    void playclick();
    void playfight();
    void playwin();
    void playlose();
    void playover();
    void reset_music();

    void operator+();
    void operator-();
};