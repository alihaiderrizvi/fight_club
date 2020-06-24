#include "sagat.hpp"

sagat::sagat() {}
sagat::~sagat() {}

void sagat::rect_initializer()
{
    idle_frames = 4;
    walkleft_frames = 4;
    walkright_frames = 4;
    jump_frames = 6;
    crouch_frames = 5;
    idleblock_frames = 3;
    crouchblock_frames = 7;
    idlepunch_frames = 7;
    idlekick_frames = 7;
    crouchkick_frames = 7;
    crouchpunch_frames = 8;
    idlehit_frames = 5;
    crouchhit_frames = 4;
    knockdown_frames = 4;
    KO_frames = 4;
    victory_frames = 8;
    special1_frames = 11;
    special2_frames = 8;

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
    idle_src[0] = {58, 27, 82, 117};
    idle_src[1] = {143, 25, 82, 119};
    idle_src[2] = {228, 23, 82, 121};
    idle_src[3] = {314, 21, 82, 123};

    //walkleft
    walkleft_src[0] = {66, 291, 84, 117};
    walkleft_src[1] = {152, 284, 83, 124};
    walkleft_src[2] = {241, 282, 76, 126};
    walkleft_src[3] = {321, 281, 76, 127};

    //walkright
    walkright_src[0] = {66, 555, 84, 117};
    walkright_src[1] = {154, 548, 82, 124};
    walkright_src[2] = {241, 546, 76, 126};
    walkright_src[3] = {321, 546, 76, 126};

    //jump
    jump_src[0] = {58, 27, 82, 117};
    jump_src[1] = {62, 847, 81, 117};
    jump_src[2] = {182, 863, 89, 101};
    jump_src[3] = {286, 840, 75, 103};
    jump_src[4] = {182, 863, 89, 101};
    jump_src[5] = {62, 847, 81, 117};

    //crouch
    crouch_src[0] = {58, 27, 82, 117};
    crouch_src[1] = {62, 847, 81, 117};
    crouch_src[2] = {182, 863, 89, 101};
    crouch_src[3] = {259, 1056, 86, 85};
    crouch_src[4] = {349, 1061, 86, 80};

    //idleblock
    idleblock_src[0] = {58, 27, 82, 117};
    idleblock_src[1] = {59, 1269, 83, 119};
    idleblock_src[2] = {145, 1267, 74, 121};

    //crouchblock
    crouchblock_src[0] = {58, 27, 82, 117};
    crouchblock_src[1] = {62, 847, 81, 117};
    crouchblock_src[2] = {182, 863, 89, 101};
    crouchblock_src[3] = {259, 1056, 86, 85};
    crouchblock_src[4] = {349, 1061, 86, 80};
    crouchblock_src[5] = {96, 1412, 81, 72};
    crouchblock_src[6] = {180, 1409, 89, 75};

    //idlepunch
    idlepunch_src[0] = {58, 27, 82, 117};
    idlepunch_src[1] = {126, 1546, 105, 116};
    idlepunch_src[2] = {235, 1544, 103, 118};
    idlepunch_src[3] = {342, 1545, 109, 117};
    idlepunch_src[4] = {455, 1550, 146, 112};
    idlepunch_src[5] = {605, 1546, 121, 117};
    idlepunch_src[6] = {730, 1552, 127, 111};

    //idlekick
    idlekick_src[0] = {58, 27, 82, 117};
    idlekick_src[1] = {160, 1793, 116, 122};
    idlekick_src[2] = {280, 1788, 112, 127};
    idlekick_src[3] = {396, 1793, 89, 122};
    idlekick_src[4] = {489, 1803, 159, 112};
    idlekick_src[5] = {396, 1793, 89, 122};
    idlekick_src[6] = {280, 1788, 112, 127};

    //crouchkick
    crouchkick_src[0] = {58, 27, 82, 117};
    crouchkick_src[1] = {62, 847, 81, 117};
    crouchkick_src[2] = {182, 863, 89, 101};
    crouchkick_src[3] = {259, 1056, 86, 85};
    crouchkick_src[4] = {349, 1061, 86, 80};
    crouchkick_src[5] = {80, 2308, 94, 73};
    crouchkick_src[6] = {180, 2308, 141, 73};

    //crouchpunch
    crouchpunch_src[0] = {58, 27, 82, 117};
    crouchpunch_src[1] = {62, 847, 81, 117};
    crouchpunch_src[2] = {182, 863, 89, 101};
    crouchpunch_src[3] = {259, 1056, 86, 85};
    crouchpunch_src[4] = {349, 1061, 86, 80};
    crouchpunch_src[5] = {66, 2041, 85, 81};
    crouchpunch_src[6] = {157, 2034, 65, 98};
    crouchpunch_src[7] = {228, 2038, 131, 92};

    //idlehit
    idlehit_src[0] = {58, 27, 82, 117};
    idlehit_src[1] = {64, 2530, 91, 121};
    idlehit_src[2] = {159, 2535, 85, 116};
    idlehit_src[3] = {248, 2540, 90, 111};
    idlehit_src[4] = {159, 2535, 85, 116};

    //crouchhit
    crouchhit_src[0] = {53, 2789, 91, 86};
    crouchhit_src[1] = {147, 2793, 96, 82};
    crouchhit_src[2] = {246, 2795, 103, 80};
    crouchhit_src[3] = {147, 2793, 96, 82};

    //knockdown
    knockdown_src[0] = {51, 3049, 86, 111};
    knockdown_src[1] = {142, 3047, 85, 113};
    knockdown_src[2] = {232, 3042, 81, 118};
    knockdown_src[3] = {318, 3041, 81, 119};

    //KO
    KO_src[0] = {51, 3049, 86, 111};
    KO_src[1] = {142, 3047, 85, 113};
    KO_src[2] = {232, 3042, 81, 118};
    KO_src[3] = {318, 3041, 81, 119};

    //victory
    victory_src[0] = {20, 3570, 82, 119};
    victory_src[1] = {106, 3567, 74, 121};
    victory_src[2] = {184, 3567, 78, 122};
    victory_src[3] = {266, 3561, 82, 128};
    victory_src[4] = {352, 3561, 82, 128};
    victory_src[5] = {438, 3561, 82, 128};
    victory_src[6] = {524, 3561, 82, 128};
    victory_src[7] = {610, 3561, 82, 128};
    victory_src[8] = {784, 3566, 78, 123};
    victory_src[9] = {866, 3586, 74, 121};

    //special1
    special1_src[0] = {58, 27, 82, 117};
    special1_src[1] = {13, 3788, 89, 123};
    special1_src[2] = {106, 3796, 159, 115};
    special1_src[3] = {268, 3759, 127, 116};
    special1_src[4] = {398, 3797, 88, 114};
    special1_src[5] = {491, 3809, 72, 102};
    special1_src[6] = {566, 3785, 112, 127};
    special1_src[7] = {691, 3791, 77, 121};
    special1_src[8] = {771, 3794, 157, 118};
    special1_src[9] = {951, 3792, 77, 120};
    special1_src[10] = {1036, 3785, 111, 127};

    //special2
    special2_src[0] = {58, 27, 82, 117};
    special2_src[1] = {13, 4050, 89, 120};
    special2_src[2] = {106, 4088, 79, 82};
    special2_src[3] = {189, 4053, 107, 117};
    special2_src[4] = {299, 4053, 84, 83};
    special2_src[5] = {387, 4056, 111, 76};
    special2_src[6] = {502, 4059, 80, 88};
    special2_src[7] = {586, 4069, 90, 101};
}

sagat::sagat(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/sagat.png");
    hitjump = Mix_LoadWAV("music/playerssound/sagat_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/sagat_lost.wav");
    special = Mix_LoadWAV("music/playerssound/sagat_special.wav");
    stun = Mix_LoadWAV("music/playerssound/sagat_stun.wav");

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

void sagat::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void sagat::walkleft()
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
    ratio_set(src, dst, walkleft_frames, playerwidth, playerheight);
}

void sagat::walkright()
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
    ratio_set(src, dst, walkright_frames, playerwidth, playerheight);
}

void sagat::jump()
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
                ypos -= 20;
                break;
            case 4:
                ypos += 20;
                break;
            case 5:
                ypos += 20;
                break;
            }
        }
    }
    ratio_set(src, dst, jump_frames, playerwidth, playerheight);
}

void sagat::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void sagat::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void sagat::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void sagat::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void sagat::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void sagat::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void sagat::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void sagat::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void sagat::crouchhit()
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

void sagat::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void sagat::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
}

void sagat::victory()
{
    if (victory_flag == false)
    {
        reset_move(1, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void sagat::special1()
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
            case (10):
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

void sagat::special2()
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
            case 4:
                ypos -= 30;
                break;
            case (7):
                ypos += 30;
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