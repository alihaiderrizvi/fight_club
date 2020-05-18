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

Player::Player()
{
    src = idle_src;
    dst = idle_dst;
}

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
    if (opp_player)
    {
        SDL_RenderCopyEx(gRenderer, assets, &source[frame_count], &dst[frame_count], 0, NULL, playerflip);
    }
    else if (!opp_player)
    {
        SDL_RenderCopyEx(gRenderer, assets, &source[frame_count], &dst[frame_count], 0, NULL, dontflip);
    }
    if (update == true)
    {
        frame_delay++;
        if (frame_delay % delay_time == 0)
        {
            frame_count++;
        }
        if (frame_count == total_frames)
        {
            frame_count = 0;
            frame_delay = 0;
        }
    }
}

void Player::false_all()
{
    idle_flag = false;
    walk_flag = false;
    jump_flag = false;
    crouch_flag = false;
    block_flag = false;
    idlepunch_flag = false;
    idlekick_flag = false;
    crouchkick_flag = false;
    crouchpunch_flag = false;
    idlehit_flag = false;
    crouchhit_flag = false;
    knockdown_flag = false;
    KO_flag = false;
    victory_flag = false;
}

bool Player::false_check()
{
    if (walk_flag == true)
    {
        return true;
    }
    else if (jump_flag == true)
    {
        return true;
    }
    else if (crouch_flag == true)
    {
        return true;
    }
    else if (block_flag == true)
    {
        return true;
    }
    else if (idlepunch_flag == true)
    {
        return true;
    }
    else if (idlekick_flag == true)
    {
        return true;
    }
    else if (crouchkick_flag == true)
    {
        return true;
    }
    else if (crouchpunch_flag == true)
    {
        return true;
    }
    else if (idlehit_flag == true)
    {
        return true;
    }
    else if (crouchhit_flag == true)
    {
        return true;
    }
    else if (knockdown_flag == true)
    {
        return true;
    }
    else if (KO_flag == true)
    {
        return true;
    }
    else if (victory_flag == true)
    {
        return true;
    }
    else if (idle_flag = true)
    {
        return true;
    }
    return false;
}

void Player::idle()
{
    //draw_player(idle_src, idle_dst, true);
}

void Player::walk(bool forward)
{
    //draw_player(walk_src, walk_dst, true);
}

void Player::jump()
{

    //draw_player(jump_src, jump_dst, true);
}

void Player::crouch()
{
    //draw_player(crouch_src, crouch_dst, true);
}

void Player::block()
{
    //draw_player(block_src, block_dst, true);
}

void Player::idlepunch()
{
    //draw_player(idlepunch_src, idlepunch_dst, true);
}

void Player::idlekick()
{
    //draw_player(idlekick_src, idlekick_dst, true);
}

void Player::crouchpunch()
{
    //draw_player(crouchpunch_src, crouchpunch_dst, true);
}

void Player::crouchkick()
{
    //draw_player(crouchkick_src, crouchkick_dst, true);
}

void Player::idlehit()
{
    //draw_player(idlehit_src, idlehit_dst, true);
}

void Player::crouchhit()
{
    //draw_player(crouchhit_src, crouchhit_dst, true);
}

void Player::knockdown()
{
    //draw_player(knockdown_src, knockdown_dst, true);
}

void Player::KO()
{
    //draw_player(KO_src, KO_dst, true);
}

void Player::victory()
{
    //draw_player(victory_src, victory_dst, true);
}

void Player::player_action(bool update)
{
    draw_player(src, dst, update);
}

void Player::update_rect()
{
    if (idle_flag == true)
    {
        ratio_set(idle_src, idle_dst, idle_frames);
        src = idle_src;
        dst = idle_dst;
    }
    else if (walk_flag == true)
    {
        ratio_set(walk_src, walk_dst, walk_frames);
        src = walk_src;
        dst = walk_dst;
    }
    else if (jump_flag == true)
    {
        jump();
        ratio_set(jump_src, jump_dst, jump_frames);
        src = jump_src;
        dst = jump_dst;
        if (frame_count == jump_frames - 1)
        {
            move_continue = false;
        }
    }
    else if (crouch_flag == true)
    {
        src = crouch_src;
        dst = crouch_dst;
    }
    else if (block_flag == true)
    {
        src = block_src;
        dst = block_dst;
    }
    else if (idlepunch_flag == true)
    {
        src = idlepunch_src;
        dst = idlepunch_dst;
    }
    else if (idlekick_flag == true)
    {
        src = idlekick_src;
        dst = idlekick_dst;
    }
    else if (crouchkick_flag == true)
    {
        src = crouchkick_src;
        dst = crouchkick_dst;
    }
    else if (crouchpunch_flag == true)
    {
        src = crouchpunch_src;
        dst = crouchpunch_dst;
    }
    else if (idlehit_flag == true)
    {
        src = idlehit_src;
        dst = idlehit_dst;
    }
    else if (crouchhit_flag == true)
    {
        src = crouchhit_src;
        dst = crouchhit_dst;
    }
    else if (knockdown_flag == true)
    {
        src = knockdown_src;
        dst = knockdown_dst;
    }
    else if (KO_flag == true)
    {
        src = KO_src;
        dst = KO_dst;
    }
    else if (victory_flag == true)
    {
        src = victory_src;
        dst = victory_dst;
    }
}