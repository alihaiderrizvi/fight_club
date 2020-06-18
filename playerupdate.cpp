#include "playerupdate.hpp"

void Player::ratio_set(SDL_Rect *src, SDL_Rect *dst, int frames, int width, int height)
{
    for (int i = 0; i < frames; i++)
    {
        dst[i].x = xpos + (int)(((float)(src[0].w - src[i].w) / (float)src[0].w) * width);
        dst[i].y = ypos + (int)(((float)(src[0].h - src[i].h) / (float)src[0].h) * height);
        dst[i].w = width - (int)(((float)(src[0].w - src[i].w) / (float)src[0].w) * width);
        dst[i].h = height - (int)(((float)(src[0].h - src[i].h) / (float)src[0].h) * height);
    }
}

void Player::power_restore()
{
    power_restore_count++;
    if (playerpower < 50 && power_restore_count >= power_restore_rate)
    {
        playerpower++;
        power_restore_count = 0;
    }
}

void Player::player_difficulty(int level)
{
    playerlife = 50;
    playerpower = 50;
    difficulty = level;
    if (difficulty == 0)
    {
        move_wait = 10;
        power_restore_rate = 6;

        block_damage_given = 2;
        punch_damage_given = 5;
        kick_damage_given = 5;
        special_damage_given = 10;
    }
    else if (difficulty == 1)
    {
        move_wait = 5;
        power_restore_rate = 4;

        block_damage_given = 4;
        punch_damage_given = 10;
        kick_damage_given = 10;
        special_damage_given = 20;
    }
    else if (difficulty == 2)
    {
        move_wait = 1;
        power_restore_rate = 2;

        block_damage_given = 6;
        punch_damage_given = 15;
        kick_damage_given = 15;
        special_damage_given = 20;
    }
    move_wait_count = move_wait;
}

void Player::reset_move(int delay, int moveframes, bool continous, bool loop, bool bound, SDL_Rect *movesrc, SDL_Rect *movedst)
{
    frame_count = 0;
    frame_delay = 0;
    delay_time = delay;
    total_frames = moveframes;

    false_all();
    if (continous)
    {
        move_continue = true;
        move_loop = false;
        move_bound = false;
    }
    else if (loop)
    {
        move_continue = false;
        move_loop = true;
        move_bound = false;
    }
    else if (bound)
    {
        move_continue = false;
        move_loop = false;
        move_bound = true;
    }
    src = movesrc;
    dst = movedst;
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
        else if (frame_count == total_frames && move_bound == true)
        {
            frame_count--;
        }
        else if (frame_count == total_frames && move_continue == true)
        {
            move_continue = false;
            false_all();
            move_wait_count = 0;
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
    idle_flag = true;
}

void Player::walkleft()
{
    walkleft_flag = true;
}

void Player::walkright()
{
    walkright_flag = true;
}

void Player::jump()
{
    Mix_PlayChannel(-1, hitjump, 0);
    jump_flag = true;
}

void Player::crouch()
{
    Mix_PlayChannel(-1, hitjump, 0);
    crouch_flag = true;
}

void Player::idleblock()
{
    idleblock_flag = true;
}

void Player::crouchblock()
{
    crouchblock_flag = true;
}

void Player::idlepunch()
{
    Mix_PlayChannel(-1, hitjump, 0);
    idlepunch_flag = true;
}

void Player::idlekick()
{
    Mix_PlayChannel(-1, hitjump, 0);
    idlekick_flag = true;
}

void Player::crouchpunch()
{
    Mix_PlayChannel(-1, hitjump, 0);
    crouchpunch_flag = true;
}

void Player::crouchkick()
{
    Mix_PlayChannel(-1, hitjump, 0);
    crouchkick_flag = true;
}

void Player::idlehit()
{
    Mix_PlayChannel(-1, stun, 0);
    idlehit_flag = true;
}

void Player::crouchhit()
{
    Mix_PlayChannel(-1, stun, 0);
    crouchhit_flag = true;
}

void Player::knockdown()
{
    Mix_PlayChannel(-1, stun, 0);
    knockdown_flag = true;
}

void Player::KO()
{
    Mix_PlayChannel(-1, lost, 0);
    KO_flag = true;
}

void Player::victory()
{
    Mix_PlayChannel(-1, special, 0);
    victory_flag = true;
}

void Player::special1()
{
    Mix_PlayChannel(-1, special, 0);
    special1_flag = true;
    playerpower = 0;
}

void Player::special2()
{
    Mix_PlayChannel(-1, special, 0);
    special2_flag = true;
    playerpower = 0;
}

void Player::player_action(bool update)
{
    draw_player(src, dst, update);
}

void Player::update_rect()
{
    if (idle_flag)
    {
        power_restore();
        move_wait_count++;
    }
    else if (walkleft_flag)
    {
        power_restore();
        move_wait_count++;
    }
    else if (walkright_flag)
    {
        power_restore();
        move_wait_count++;
    }
    else if (jump_flag)
    {
        power_restore();
        move_wait_count++;
        jump();
    }
    else if (crouch_flag)
    {
        power_restore();
        move_wait_count++;
        crouch();
    }
    else if (idleblock_flag)
    {
        power_restore();
        move_wait_count++;
        idleblock();
    }
    else if (crouchblock_flag)
    {
        power_restore();
        move_wait_count++;
        crouchblock();
    }
    else if (idlepunch_flag)
    {
        idlepunch();
    }
    else if (idlekick_flag)
    {
        idlekick();
    }
    else if (crouchkick_flag)
    {
        crouchkick();
    }
    else if (crouchpunch_flag)
    {
        crouchpunch();
    }
    else if (idlehit_flag)
    {
        move_wait_count++;
        idlehit();
    }
    else if (crouchhit_flag)
    {
        move_wait_count++;
        crouchhit();
    }
    else if (knockdown_flag)
    {
        move_wait_count++;
        knockdown();
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