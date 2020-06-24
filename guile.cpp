#include "guile.hpp"

guile::guile() {}
guile::~guile() {}

void guile::rect_initializer()
{

    idle_frames = 6;
    walkleft_frames = 5;
    walkright_frames = 5;
    jump_frames = 6;
    crouch_frames = 4;
    idleblock_frames = 3;
    crouchblock_frames = 6;
    idlepunch_frames = 5;
    idlekick_frames = 4;
    crouchkick_frames = 9;
    crouchpunch_frames = 8;
    idlehit_frames = 5;
    crouchhit_frames = 2;
    knockdown_frames = 7;
    KO_frames = 7;
    victory_frames = 3;
    special1_frames = 11;
    special2_frames = 7;

    idle_src = new SDL_Rect[idle_frames];
    idle_dst = new SDL_Rect[idle_frames];

    walkleft_src = new SDL_Rect[walkleft_frames];
    walkleft_dst = new SDL_Rect[walkleft_frames];

    walkright_src = new SDL_Rect[walkright_frames];
    walkright_dst = new SDL_Rect[walkright_frames];

    jump_src = new SDL_Rect[jump_frames];
    jump_dst = new SDL_Rect[jump_frames];

    crouch_src = new SDL_Rect[crouch_frames];
    crouch_dst = new SDL_Rect[crouch_frames];

    idleblock_src = new SDL_Rect[idleblock_frames];
    idleblock_dst = new SDL_Rect[idleblock_frames];

    crouchblock_src = new SDL_Rect[crouchblock_frames];
    crouchblock_dst = new SDL_Rect[crouchblock_frames];

    idlepunch_src = new SDL_Rect[idlepunch_frames];
    idlepunch_dst = new SDL_Rect[idlepunch_frames];

    idlekick_src = new SDL_Rect[idlekick_frames];
    idlekick_dst = new SDL_Rect[idlekick_frames];

    crouchkick_src = new SDL_Rect[crouchkick_frames];
    crouchkick_dst = new SDL_Rect[crouchkick_frames];

    crouchpunch_src = new SDL_Rect[crouchpunch_frames];
    crouchpunch_dst = new SDL_Rect[crouchpunch_frames];

    idlehit_src = new SDL_Rect[idlehit_frames];
    idlehit_dst = new SDL_Rect[idlehit_frames];

    idlehit_src = new SDL_Rect[idlehit_frames];
    idlehit_dst = new SDL_Rect[idlehit_frames];

    crouchhit_src = new SDL_Rect[crouchhit_frames];
    crouchhit_dst = new SDL_Rect[crouchhit_frames];

    knockdown_src = new SDL_Rect[knockdown_frames];
    knockdown_dst = new SDL_Rect[knockdown_frames];

    KO_src = new SDL_Rect[KO_frames];
    KO_dst = new SDL_Rect[KO_frames];

    victory_src = new SDL_Rect[victory_frames];
    victory_dst = new SDL_Rect[victory_frames];

    special1_src = new SDL_Rect[special1_frames];
    special1_dst = new SDL_Rect[special1_frames];

    special2_src = new SDL_Rect[special2_frames];
    special2_dst = new SDL_Rect[special2_frames];

    //idle
    idle_src[0] = {28, 14, 77, 91};
    idle_src[1] = {121, 14, 77, 91};
    idle_src[2] = {212, 14, 77, 91};
    idle_src[3] = {306, 14, 76, 91};
    idle_src[4] = {396, 14, 76, 91};
    idle_src[5] = {489, 14, 76, 91};

    //walkleft
    walkleft_src[0] = {29, 280, 86, 97};
    walkleft_src[1] = {129, 276, 70, 101};
    walkleft_src[2] = {216, 276, 67, 101};
    walkleft_src[3] = {298, 275, 67, 101};
    walkleft_src[4] = {388, 280, 70, 97};

    //walkright
    walkright_src[0] = {29, 540, 84, 93};
    walkright_src[1] = {129, 540, 68, 93};
    walkright_src[2] = {212, 540, 61, 93};
    walkright_src[3] = {290, 539, 59, 94};
    walkright_src[4] = {364, 540, 61, 93};

    //jump
    jump_src[0] = {28, 14, 77, 91};
    jump_src[1] = {32, 771, 69, 107};
    jump_src[2] = {32, 771, 69, 107};
    jump_src[3] = {112, 772, 62, 62};
    jump_src[4] = {32, 771, 69, 107};
    jump_src[5] = {32, 771, 69, 107};

    //crouch
    crouch_src[0] = {28, 14, 77, 91};
    crouch_src[1] = {51, 1018, 75, 82};
    crouch_src[2] = {140, 1034, 73, 66};
    crouch_src[3] = {228, 1036, 69, 64};

    //idleblock
    idleblock_src[0] = {28, 14, 77, 91};
    idleblock_src[1] = {28, 1271, 72, 89};
    idleblock_src[2] = {113, 1283, 86, 77};

    //crouchblock
    crouchblock_src[0] = {28, 14, 77, 91};
    crouchblock_src[1] = {51, 1018, 75, 82};
    crouchblock_src[2] = {140, 1034, 73, 66};
    crouchblock_src[3] = {228, 1036, 69, 64};
    crouchblock_src[4] = {82, 1383, 83, 72};
    crouchblock_src[5] = {179, 1386, 64, 69};

    //idlepunch
    idlepunch_src[0] = {28, 14, 77, 91};
    idlepunch_src[1] = {31, 1556, 72, 92};
    idlepunch_src[2] = {239, 1556, 80, 92};
    idlepunch_src[3] = {120, 1556, 103, 92};
    idlepunch_src[4] = {239, 1556, 80, 92};

    //idlekick
    idlekick_src[0] = {28, 14, 77, 91};
    idlekick_src[1] = {29, 1794, 61, 94};
    idlekick_src[2] = {104, 1794, 77, 94};
    idlekick_src[3] = {197, 1794, 120, 94};

    //crouchkick
    crouchkick_src[0] = {28, 14, 77, 91};
    crouchkick_src[1] = {51, 1018, 75, 82};
    crouchkick_src[2] = {140, 1034, 73, 66};
    crouchkick_src[3] = {228, 1036, 69, 64};
    crouchkick_src[4] = {45, 2293, 56, 57};
    crouchkick_src[5] = {117, 2289, 100, 61};
    crouchkick_src[6] = {233, 2284, 143, 66};
    crouchkick_src[7] = {392, 2287, 107, 63};
    crouchkick_src[8] = {515, 2289, 90, 61};

    //crouchpunch
    crouchpunch_src[0] = {28, 14, 77, 91};
    crouchpunch_src[1] = {51, 1018, 75, 82};
    crouchpunch_src[2] = {140, 1034, 73, 66};
    crouchpunch_src[3] = {228, 1036, 69, 64};
    crouchpunch_src[4] = {26, 2050, 72, 63};
    crouchpunch_src[5] = {230, 2050, 95, 63};
    crouchpunch_src[6] = {114, 2050, 103, 63};
    crouchpunch_src[7] = {230, 2050, 95, 63};

    //idlehit
    idlehit_src[0] = {28, 14, 77, 91};
    idlehit_src[1] = {31, 2512, 66, 95};
    idlehit_src[2] = {114, 2512, 79, 95};
    idlehit_src[3] = {207, 2525, 77, 82};
    idlehit_src[4] = {114, 2512, 79, 95};

    //crouchhit
    crouchhit_src[0] = {82, 1383, 83, 72};
    crouchhit_src[1] = {179, 1386, 64, 69};

    //knockdown
    knockdown_src[0] = {32, 3030, 77, 92};
    knockdown_src[1] = {120, 3030, 77, 92};
    knockdown_src[2] = {212, 3034, 87, 88};
    knockdown_src[3] = {314, 3031, 77, 91};
    knockdown_src[4] = {403, 3029, 77, 93};
    knockdown_src[5] = {496, 3030, 62, 92};
    knockdown_src[6] = {571, 3030, 67, 92};

    //KO
    KO_src[0] = {32, 3030, 77, 92};
    KO_src[1] = {120, 3030, 77, 92};
    KO_src[2] = {212, 3034, 87, 88};
    KO_src[3] = {314, 3031, 77, 91};
    KO_src[4] = {403, 3029, 77, 93};
    KO_src[5] = {496, 3030, 62, 92};
    KO_src[6] = {571, 3030, 67, 92};

    //victory
    victory_src[0] = {45, 3511, 72, 125};
    victory_src[1] = {129, 3515, 78, 121};
    victory_src[2] = {220, 3522, 70, 114};

    //special1
    special1_src[0] = {28, 14, 77, 91};
    special1_src[1] = {32, 3823, 74, 66};
    special1_src[2] = {120, 3797, 57, 92};
    special1_src[3] = {190, 3821, 56, 69};
    special1_src[4] = {263, 3806, 89, 84};
    special1_src[5] = {368, 3795, 99, 94};
    special1_src[6] = {481, 3839, 113, 50};
    special1_src[7] = {608, 3789, 127, 92};
    special1_src[8] = {802, 3848, 86, 42};
    special1_src[9] = {903, 3828, 62, 62};
    special1_src[10] = {976, 3798, 56, 92};

    //special2
    special2_src[0] = {28, 14, 77, 91};
    special2_src[1] = {27, 4057, 72, 83};
    special2_src[2] = {379, 4055, 88, 84};
    special2_src[3] = {114, 4050, 95, 89};
    special2_src[4] = {379, 4055, 88, 84};
    special2_src[5] = {259, 4050, 110, 89};
    special2_src[6] = {379, 4055, 88, 84};
}

guile::guile(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/guile.png");
    hitjump = Mix_LoadWAV("music/playerssound/guile_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/guile_lost.wav");
    special = Mix_LoadWAV("music/playerssound/guile_special.wav");
    stun = Mix_LoadWAV("music/playerssound/guile_stun.wav");

    playerwidth = 100;
    playerheight = 200;
    opp_player = opponent;
    rect_initializer();
    src = idle_src;
    dst = idle_dst;
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
    setvolume(vol);

    if (!opp_player)
    {
        xpos = 0;
        ypos = 600 - playerheight;
        player_difficulty(0, level);
    }
    else if (opp_player)
    {
        xpos = 800 - playerwidth;
        ypos = 600 - playerheight;
        player_difficulty(level, 0);
    }
}

void guile::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void guile::walkleft()
{
    if (walkleft_flag == false)
    {
        if (opp_player)
        {
            reset_move(1, walkright_frames, false, true, false, walkright_src, walkright_dst);
        }
        else
        {
            reset_move(1, walkleft_frames, false, true, false, walkleft_src, walkleft_dst);
        }
        Player::walkleft();
    }
    else
    {
        Player::walkleft();
    }
    ratio_set(src, dst, walkleft_frames, playerwidth + 20, playerheight);
}

void guile::walkright()
{
    if (walkright_flag == false)
    {
        if (opp_player)
        {
            reset_move(1, walkleft_frames, false, true, false, walkleft_src, walkleft_dst);
        }
        else
        {
            reset_move(1, walkright_frames, false, true, false, walkright_src, walkright_dst);
        }
        Player::walkright();
    }
    else
    {
        Player::walkright();
    }
    ratio_set(src, dst, walkright_frames, playerwidth + 20, playerheight);
}

void guile::jump()
{
    if (jump_flag == false)
    {
        reset_move(1, jump_frames, true, false, false, jump_src, jump_dst);
        Player::jump();
    }
    else
    {
        if (frame_delay % delay_time == 0)
        {
            switch (frame_count)
            {
            case 2:
                ypos -= 20;
                break;
            case 3:
                ypos -= 30;
                break;
            case 4:
                ypos += 20;
                break;
            case 5:
                ypos += 30;
                break;
            }
        }
    }
    ratio_set(src, dst, jump_frames, playerwidth, playerheight);
}

void guile::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void guile::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void guile::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void guile::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void guile::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void guile::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void guile::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void guile::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void guile::crouchhit()
{
    if (crouchhit_flag == false)
    {
        reset_move(1, crouchhit_frames, true, false, false, crouchhit_src, crouchhit_dst);
        Player::crouchhit();
        ypos = ypos + 70;
    }
    else
    {
        if (frame_count == crouchhit_frames - 1 && frame_delay % delay_time == 0)
        {
            ypos = ypos - 70;
        }
    }
    ratio_set(crouchhit_src, crouchhit_dst, crouchhit_frames, 100, 130);
}

void guile::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth + 20, playerheight);
}

void guile::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth + 20, playerheight);
}

void guile::victory()
{
    if (victory_flag == false)
    {
        reset_move(2, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void guile::special1()
{
    if (special1_flag == false)
    {
        reset_move(1, special1_frames, true, false, false, special1_src, special1_dst);
        xpos_distance = abs(xpos_opp - xpos) / special1_frames;
        Player::special1();
    }
    else
    {
        if (frame_delay % delay_time == 0)
        {
            xmover();
            switch (frame_count)
            {
            case (2):
                ypos = ypos - 20;
                break;
            case (3):
                ypos = ypos - 30;
                break;
            case (9):
                ypos = ypos + 30;
                break;
            case (10):
                ypos = ypos + 20;
                if (opp_player)
                {
                    xpos += playerwidth;
                }
                else if (!opp_player)
                {
                    xpos -= playerwidth;
                }
                break;
            }
        }
    }
    ratio_set(special1_src, special1_dst, special1_frames, playerwidth, playerheight);
}

void guile::special2()
{
    if (special2_flag == false)
    {
        reset_move(1, special2_frames, true, false, false, special2_src, special2_dst);
        xpos_distance = abs(xpos_opp - xpos) / special2_frames;
        Player::special2();
    }
    else
    {
        if (frame_delay % delay_time == 0)
        {
            xmover();
            switch (frame_count)
            {
            case (6):
                if (opp_player)
                {
                    xpos += playerwidth;
                }
                else if (!opp_player)
                {
                    xpos -= playerwidth;
                }
                break;
            }
        }
    }
    ratio_set(special2_src, special2_dst, special2_frames, playerwidth, playerheight);
}