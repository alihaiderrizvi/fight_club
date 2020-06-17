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
}

Player::~Player()
{
    Mix_FreeChunk(hitjump);
    Mix_FreeChunk(lost);
    Mix_FreeChunk(special);
    Mix_FreeChunk(stun);

    hitjump = NULL;
    lost = NULL;
    special = NULL;
    stun = NULL;

    SDL_DestroyTexture(assets);
    assets = NULL;
    gRenderer = NULL;

    delete[] idle_src;
    delete[] idle_dst;

    delete[] walkleft_src;
    delete[] walkleft_dst;

    delete[] walkright_src;
    delete[] walkright_dst;

    delete[] jump_src;
    delete[] jump_dst;

    delete[] crouch_src;
    delete[] crouch_dst;

    delete[] idleblock_src;
    delete[] idleblock_dst;

    delete[] crouchblock_src;
    delete[] crouchblock_dst;

    delete[] idlepunch_src;
    delete[] idlepunch_dst;

    delete[] idlekick_src;
    delete[] idlekick_dst;

    delete[] crouchkick_src;
    delete[] crouchkick_dst;

    delete[] crouchpunch_src;
    delete[] crouchpunch_dst;

    delete[] idlehit_src;
    delete[] idlehit_dst;

    delete[] crouchhit_src;
    delete[] crouchhit_dst;

    delete[] knockdown_src;
    delete[] knockdown_dst;

    delete[] KO_src;
    delete[] KO_dst;

    delete[] victory_src;
    delete[] victory_dst;

    delete[] special1_src;
    delete[] special1_dst;

    delete[] special2_src;
    delete[] special2_dst;
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
        else if (frame_count == total_frames && move_loop == false)
        {
            if (move_continue == true)
            {
                move_continue = false;
                false_all();
            }
            else if (move_bound == true)
            {
                frame_count--;
            }
        }
    }
}

void Player::setvolumechunk(int vol)
{
    Mix_VolumeChunk(hitjump, vol);
    Mix_VolumeChunk(lost, vol);
    Mix_VolumeChunk(special, vol);
    Mix_VolumeChunk(stun, vol);
}

void Player::setvolume(int volume)
{
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

void Player::false_all()
{
    idle_flag = false;
    walkleft_flag = false;
    walkright_flag = false;
    jump_flag = false;
    crouch_flag = false;
    idleblock_flag = false;
    crouchblock_flag = false;
    idlepunch_flag = false;
    idlekick_flag = false;
    crouchkick_flag = false;
    crouchpunch_flag = false;
    idlehit_flag = false;
    crouchhit_flag = false;
    knockdown_flag = false;
    KO_flag = false;
    victory_flag = false;
    special1_flag = false;
    special2_flag = false;
}

bool Player::false_check()
{
    return (walkleft_flag || walkright_flag || jump_flag || crouch_flag || idleblock_flag || crouchblock_flag ||
            idlepunch_flag || idlekick_flag || crouchkick_flag || crouchpunch_flag || idlehit_flag ||
            crouchhit_flag || knockdown_flag || KO_flag || victory_flag || idle_flag || special1_flag || special2_flag);
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

void Player::idleblock()
{
    //draw_player(block_src, block_dst, true);
}

void Player::crouchblock()
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

void Player::special1()
{
    //draw_player(victory_src, victory_dst, true);
}

void Player::special2()
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
    }
    else if (walkleft_flag)
    {
    }
    else if (walkright_flag)
    {
    }
    else if (jump_flag)
    {
    }
    else if (crouch_flag)
    {
    }
    else if (idleblock_flag)
    {
    }
    else if (crouchblock_flag)
    {
    }
    else if (idlepunch_flag)
    {
    }
    else if (idlekick_flag)
    {
    }
    else if (crouchkick_flag)
    {
    }
    else if (crouchpunch_flag)
    {
    }
    else if (idlehit_flag)
    {
    }
    else if (crouchhit_flag)
    {
    }
    else if (knockdown_flag)
    {
    }
    else if (KO_flag)
    {
    }
    else if (victory_flag)
    {
    }
    else if (special1_flag)
    {
    }
    else if (special2_flag)
    {
    }
}