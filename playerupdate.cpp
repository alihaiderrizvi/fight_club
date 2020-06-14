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

    delete walkleft_src;
    delete walkleft_dst;

    delete walkright_src;
    delete walkright_dst;

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
        if (frame_count == total_frames && move_loop == true)
        {
            frame_count = 0;
            frame_delay = 0;
        }
    }
}

void Player::false_all()
{
    idle_flag = false;
    walkleft_flag = false;
    walkright_flag = false;
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
    return (walkleft_flag || walkright_flag || jump_flag || crouch_flag || block_flag || 
    idlepunch_flag || idlekick_flag || crouchkick_flag || crouchpunch_flag || idlehit_flag || 
    crouchhit_flag || knockdown_flag || KO_flag || victory_flag || idle_flag);    
}

void Player::idle()
{
    //draw_player(idle_src, idle_dst, true);
}

void Player::walkleft()
{
    //draw_player(walkleft_src, walkleft_dst, true);
}

void Player::walkright()
{
    //draw_player(walkright_src, walkright_dst, true);
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
    if (idle_flag)
    {
        move_loop = true;
        src = idle_src, dst = idle_dst;
        ratio_set(src, dst, idle_frames);
    }
    else if (walkleft_flag)
    {
        move_loop = true;
        src = walkleft_src, dst = walkleft_dst;
        ratio_set(src, dst, walkleft_frames);
    }
    else if (walkright_flag)
    {
        move_loop = true;
        src = walkright_src, dst = walkright_dst;
        ratio_set(src, dst, walkright_frames);
    }
    else if (jump_flag)
    {
        move_loop = false;
        src = jump_src, dst = jump_dst;
        ratio_set(src, dst, jump_frames);
        jump();
    }
    else if (crouch_flag)
    {
        src = crouch_src;
        dst = crouch_dst;
    }
    else if (block_flag)
    {
        //move_loop = false;
        src = block_src, dst = block_dst;
        ratio_set(src, dst, block_frames);
        if (frame_count == block_frames - 1)
        {
            move_continue = false;
        }
    }
    else if (idlepunch_flag)
    {
        src = idlepunch_src, dst = idlepunch_dst;
    }
    else if (idlekick_flag)
    {
        src = idlekick_src, dst = idlekick_dst;
    }
    else if (crouchkick_flag)
    {
        src = crouchkick_src, dst = crouchkick_dst;
    }
    else if (crouchpunch_flag)
    {
        src = crouchpunch_src, dst = crouchpunch_dst;
    }
    else if (idlehit_flag)
    {
        src = idlehit_src, dst = idlehit_dst;
    }
    else if (crouchhit_flag)
    {
        src = crouchhit_src, dst = crouchhit_dst;
    }
    else if (knockdown_flag)
    {
        src = knockdown_src, dst = knockdown_dst;
    }
    else if (KO_flag)
    {
        src = KO_src, dst = KO_dst;
    }
    else if (victory_flag)
    {
        src = victory_src, dst = victory_dst;
    }
}