#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <cstdio>
#include <string>
using namespace std;

//parent class to help take care of similar drawing aspects
class Unit
{
protected:
    //relevant pointers and attributes
    SDL_Texture *assets = NULL;
    SDL_Rect *src = NULL;
    SDL_Rect mover;

    SDL_Window *gWindow = NULL;
    SDL_Renderer *gRenderer = NULL;

    int frames_count = 0;
    int total_frames = 0;
    int frames_rows = 0;
    int frames_columns = 0;
    int frame_delay = 0;

public:
    Unit();
    virtual ~Unit();

    //Initialized frames of objects
    void set_full_frames(int, int, int);

    //draws object with one or multiple frames
    virtual void draw(SDL_Renderer *, SDL_Rect, SDL_Rect, SDL_RendererFlip);
    virtual void draw_frames(SDL_Renderer *, bool);

    //Initializes the position and area of object
    SDL_Rect set_mover(int x_, int y_, int w_, int h_);
    SDL_Texture *loadTexture(std::string path);

    //Gets dimensions of object
    int get_width();
    int get_height();

    //Sets dimensions of object
    void set_width(int w_);
    void set_height(int h_);

    //Gets coordinates of object
    int get_x();
    int get_y();

    //Sets coordinates of object
    void set_x(int x_);
    void set_y(int y_);
};