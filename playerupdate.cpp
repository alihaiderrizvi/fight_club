#include "playerupdate.hpp"

void Player::ratio_set(SDL_Rect *src, SDL_Rect *dst, int frames)
{
    for (int i = 0; i < frames; i++)
    {
        dst[i].x = xpos + (int)(((float)(src[0].w - src[i].w) / (float)src[0].w) * 100);
        dst[i].y = ypos + (int)(((float)(src[0].h - src[i].h) / (float)src[0].h) * 200);
        dst[i].w = 100 - (int)(((float)(src[0].w - src[i].w) / (float)src[0].w) * 100);
        dst[i].h = 200 - (int)(((float)(src[0].h - src[i].h) / (float)src[0].h) * 200);
    }
}

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
    SDL_RenderCopy(gRenderer, assets, &source[frame_count], &dst[frame_count]);
    frame_delay++;
    if (update == true && frame_delay % delay_time == 0)
    {
        frame_count++;
    }
    if (frame_count == total_frames)
    {
        frame_count = 0;
        frame_delay = 0;
    }
}

void Player::idle()
{
    draw_player(idle_src, idle_dst, true);
}

void Player::walk()
{
    if (xpos > 800)
    {
        xpos = 0;
    }
    draw_player(walk_src, walk_dst, true);
}

void Player::jump()
{
    draw_player(jump_src, jump_dst, true);
}

void Player::crouch()
{
    draw_player(crouch_src, crouch_dst, true);
}

void Player::block()
{
    draw_player(block_src, block_dst, true);
}

void Player::idlepunch()
{
    draw_player(idlepunch_src, idlepunch_dst, true);
}

void Player::idlekick()
{
    draw_player(idlekick_src, idlekick_dst, true);
}

void Player::crouchpunch()
{
    draw_player(crouchpunch_src, crouchpunch_dst, true);
}

void Player::crouchkick()
{
    draw_player(crouchkick_src, crouchkick_dst, true);
}

void Player::idlehit()
{
    draw_player(idlehit_src, idlehit_dst, true);
}

void Player::crouchhit()
{
    draw_player(crouchhit_src, crouchhit_dst, true);
}

void Player::knockdown()
{
    draw_player(knockdown_src, knockdown_dst, true);
}

void Player::KO()
{
    draw_player(KO_src, KO_dst, true);
}

void Player::victory()
{
    draw_player(victory_src, victory_dst, true);
}