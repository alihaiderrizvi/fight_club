#include "playmusic.hpp"

playmusic::playmusic()
{
    //loading sound assets and intializing
    gMusic_menu = Mix_LoadMUS("music/mainmenu.wav");
    gMusic_playerversus = Mix_LoadMUS("music/playerversus.wav");
    gMusic_ingame = Mix_LoadMUS("music/ingame.wav");

    ghover = Mix_LoadWAV("music/hover.wav");
    gclick = Mix_LoadWAV("music/click.wav");
    gfight = Mix_LoadWAV("music/fight.wav");
    gwin = Mix_LoadWAV("music/win.wav");
    glose = Mix_LoadWAV("music/lose.wav");
    gover = Mix_LoadWAV("music/over.wav");

    gMusic = gMusic_menu;
    Mix_FadeInMusic(gMusic, -1, 10000);
    Mix_VolumeMusic(64);
}

playmusic::~playmusic()
{
    //freeing up all the memory
    Mix_FreeMusic(gMusic_menu);
    Mix_FreeMusic(gMusic_playerversus);
    Mix_FreeMusic(gMusic_ingame);
    Mix_FreeChunk(ghover);
    Mix_FreeChunk(gclick);
    Mix_FreeChunk(gfight);
    Mix_FreeChunk(gwin);
    Mix_FreeChunk(glose);
    Mix_FreeChunk(gover);
    gMusic = NULL;
    gMusic_menu = NULL;
    gMusic_playerversus = NULL;
    gMusic_ingame = NULL;
    ghover = NULL;
    gclick = NULL;
    gfight = NULL;
    gwin = NULL;
    glose = NULL;
    gover = NULL;
}

void playmusic::reset_music()
{
    resultplayed = false;
}

void playmusic::setvolumechunk(int vol)
{
    //sets volume
    Mix_VolumeMusic(vol);
    Mix_VolumeChunk(ghover, vol);
    Mix_VolumeChunk(gclick, vol);
    Mix_VolumeChunk(gfight, vol);
    Mix_VolumeChunk(gwin, vol);
    Mix_VolumeChunk(glose, vol);
    Mix_VolumeChunk(gover, vol);
}

void playmusic::setvolume(int volume)
{
    //sets volume intensity
    if (volume == 2)
    {
        setvolumechunk(128);
    }
    else if (volume == 1)
    {
        setvolumechunk(64);
    }
    else if (volume == 0)
    {
        setvolumechunk(32);
    }
}

void playmusic::operator+()
{
    Mix_ResumeMusic();
    playing_flag = true;
}

void playmusic::operator-()
{
    Mix_PauseMusic();
    playing_flag = false;
}

void playmusic::playbackground(int screen)
{
    //plays backgound music
    if (screen == 0)
    {
        gMusic = gMusic_menu;
    }
    else if (screen == 1)
    {
        gMusic = gMusic_playerversus;
    }
    else if (screen == 2)
    {
        gMusic = gMusic_ingame;
    }
    Mix_FadeInMusic(gMusic, -1, 10000);
}

void playmusic::playhover()
{
    //hover sound
    if (hover_sound_flag == false)
    {
        Mix_PlayChannel(-1, ghover, 0);
        hover_sound_flag = true;
    }
}

void playmusic::playclick()
{
    //click sound
    Mix_PlayChannel(-1, gclick, 0);
}

void playmusic::playfight()
{
    //fight sound
    Mix_PlayChannel(-1, gfight, 0);
}
void playmusic::playwin()
{
    //win sound
    if (resultplayed == false)
    {
        Mix_PlayChannel(-1, gwin, 0);
        resultplayed = true;
    }
}
void playmusic::playlose()
{
    //loose sound
    if (resultplayed == false)
    {
        Mix_PlayChannel(-1, glose, 0);
        resultplayed = true;
    }
}
void playmusic::playover()
{
    if (resultplayed == false)
    {
        Mix_PlayChannel(-1, gover, 0);
        resultplayed = true;
    }
}