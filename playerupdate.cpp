#include "playerupdate.hpp"

SDL_Texture *Player::loadTexture(std::string path)
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

Player::Player() {}
Player::~Player()
{
    SDL_DestroyTexture(assets);
    assets = NULL;
    gRenderer = NULL;

    delete idle_src;
    delete idle_dst;

    delete walk_src;
    delete walk_dst;

    delete jump_src;
    delete jump_dst;

    delete crouch_src;
    delete crouch_dst;

    delete block_src;
    delete block_dst;

    delete idlepunch_src;
    delete idlepunch_dst;

    delete idlekick_src;
    delete idlekick_dst;

    delete crouchkick_src;
    delete crouchkick_dst;

    delete crouchpunch_src;
    delete crouchpunch_dst;

    delete idlehit_src;
    delete idlehit_dst;

    delete crouchhit_src;
    delete crouchhit_dst;

    delete knockdown_src;
    delete knockdown_dst;

    delete KO_src;
    delete KO_dst;

    delete victory_src;
    delete victory_dst;
}

void Player::draw_player(SDL_Rect *source, SDL_Rect *dst, bool update)
{
    SDL_RenderCopy(gRenderer, assets, &source[source_count], &dst[dst_count]);
    frame_delay++;
    if (update == true && frame_delay % 1 == 0)
    {
        source_count++;
        dst_count++;
    }
    if (dst_count == total_frames_dst)
    {
        dst_count = 0;
        //frame_delay = 0;
    }
    if (source_count == total_frames_source)
    {
        source_count = 0;
        frame_delay = 0;
    }
}

void Player::idle()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::walk()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::jump()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::crouch()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::block()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::idlepunch()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::idlekick()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::crouchpunch()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::crouchkick()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::idlehit()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::crouchhit()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::knockdown()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::KO()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::victory()
{
    draw_player(idle_src, idle_dst, true);
}