#include "unit.hpp"

Unit::Unit() {}

Unit::~Unit()
{
    //frees up memory
    SDL_DestroyTexture(assets);
    assets = NULL;

    delete[] src;
    src = NULL;

    gWindow = NULL;
    gRenderer = NULL;
}

void Unit::draw(SDL_Renderer *renderer, SDL_Rect source, SDL_Rect dst, SDL_RendererFlip flip)
{
    //draws object with one frame
    SDL_RenderCopyEx(renderer, assets, &source, &dst, 0, NULL, flip);
}

void Unit::draw_frames(SDL_Renderer *renderer, bool update)
{
    //draws object with multiple frames
    SDL_RenderCopy(renderer, assets, &src[frames_count], &mover);
    frame_delay++;
    if (update == true && frame_delay % 1 == 0)
    {
        frames_count++;
    }
    if (frames_count == total_frames)
    {
        frames_count = 0;
        frame_delay = 0;
    }
}

void Unit::set_full_frames(int set_frames_rows, int set_frames_columns, int set_total_frames)
{
    //set rectangles for map sprites
    total_frames = set_total_frames;
    frames_rows = set_frames_rows;
    frames_columns = set_frames_columns;

    src = new SDL_Rect[total_frames];
    int x_initial = 0;
    int y_initial = 0;
    for (int i = 0; i < frames_rows; i++)
    {
        for (int j = 0; j < frames_columns; j++)
        {
            if ((frames_columns * i + j) < total_frames)
            {
                src[frames_columns * i + j] = {x_initial, y_initial, 800, 600};
                x_initial = x_initial + 800;
            }
        }
        x_initial = 0;
        y_initial = y_initial + 600;
    }
}

SDL_Texture *Unit::loadTexture(std::string path)
{
    //The final texture
    SDL_Texture *newTexture = NULL;

    //Load image at specified path
    SDL_Surface *loadedSurface = IMG_Load(path.c_str());
    if (loadedSurface == NULL)
    {
        printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
    }
    else
    {
        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface(gRenderer, loadedSurface);
        if (newTexture == NULL)
        {
            printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
        }

        //Get rid of old loaded surface
        SDL_FreeSurface(loadedSurface);
    }

    return newTexture;
}

//Initializes the position and area of object
SDL_Rect Unit::set_mover(int x_, int y_, int w_, int h_)
{
    mover.x = x_;
    mover.y = y_;
    mover.w = w_;
    mover.h = h_;
}

//Sets and get width and height of object
int Unit::get_width()
{
    return mover.w;
}
void Unit::set_width(int w_)
{
    mover.w = w_;
}
int Unit::get_height()
{
    return mover.h;
}
void Unit::set_height(int h_)
{
    mover.h = h_;
}

//Sets and Gets coordinates of object
int Unit::get_x()
{
    return mover.x;
}
int Unit::get_y()
{
    return mover.y;
}
void Unit::set_x(int x_)
{
    mover.x = x_;
}
void Unit::set_y(int y_)
{
    mover.y = y_;
}