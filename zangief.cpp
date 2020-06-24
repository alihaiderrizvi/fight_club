#include "zangief.hpp"

zangief::zangief() {}
zangief::~zangief() {}

void zangief::rect_initializer()
{
    idle_frames = 4;
    walkleft_frames = 6;
    walkright_frames = 6;
    jump_frames = 8;
    crouch_frames = 4;
    idleblock_frames = 2;
    crouchblock_frames = 5;
    idlepunch_frames = 5;
    idlekick_frames = 5;
    crouchkick_frames = 7;
    crouchpunch_frames = 6;
    idlehit_frames = 3;
    crouchhit_frames = 3;
    knockdown_frames = 5;
    KO_frames = 5;
    victory_frames = 5;
    special1_frames = 11;
    special2_frames = 10;

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
    idle_src[0] = {48, 54, 101, 110};
    idle_src[1] = {157, 55, 92, 109};
    idle_src[2] = {257, 58, 90, 106};
    idle_src[3] = {355, 55, 92, 109};

    //walkleft
    walkleft_src[0] = {48, 297, 90, 112};
    walkleft_src[1] = {146, 300, 90, 109};
    walkleft_src[2] = {244, 300, 82, 109};
    walkleft_src[3] = {334, 296, 98, 113};
    walkleft_src[4] = {440, 295, 82, 114};
    walkleft_src[5] = {530, 295, 90, 114};

    //walkright
    walkright_src[0] = {48, 542, 98, 109};
    walkright_src[1] = {154, 545, 92, 106};
    walkright_src[2] = {254, 545, 90, 106};
    walkright_src[3] = {352, 543, 100, 108};
    walkright_src[4] = {460, 540, 90, 111};
    walkright_src[5] = {558, 540, 87, 111};

    //jump
    jump_src[0] = {48, 54, 101, 110};
    jump_src[1] = {15, 795, 105, 98};
    jump_src[2] = {128, 782, 106, 111};
    jump_src[3] = {242, 794, 109, 99};
    jump_src[4] = {359, 808, 125, 85};
    jump_src[5] = {492, 794, 109, 99};
    jump_src[6] = {609, 782, 106, 111};
    jump_src[7] = {723, 795, 105, 98};

    //crouch
    crouch_src[0] = {48, 54, 101, 110};
    crouch_src[1] = {48, 1028, 106, 103};
    crouch_src[2] = {162, 1044, 96, 87};
    crouch_src[3] = {266, 1052, 91, 79};

    //idleblock
    idleblock_src[0] = {48, 54, 101, 110};
    idleblock_src[1] = {74, 1287, 84, 106};

    //crouchblock
    crouchblock_src[0] = {48, 54, 101, 110};
    crouchblock_src[1] = {48, 1028, 106, 103};
    crouchblock_src[2] = {162, 1044, 96, 87};
    crouchblock_src[3] = {266, 1052, 91, 79};
    crouchblock_src[4] = {203, 1393, 84, 69};

    //idlepunch
    idlepunch_src[0] = {48, 54, 101, 110};
    idlepunch_src[1] = {49, 1549, 101, 108};
    idlepunch_src[2] = {158, 1551, 130, 106};
    idlepunch_src[3] = {296, 1549, 101, 108};
    idlepunch_src[4] = {405, 1547, 101, 110};

    //idlekick
    idlekick_src[0] = {48, 54, 101, 110};
    idlekick_src[1] = {72, 1788, 93, 114};
    idlekick_src[2] = {173, 1792, 89, 110};
    idlekick_src[3] = {270, 1794, 120, 108};
    idlekick_src[4] = {403, 1792, 89, 110};

    //crouchkick
    crouchkick_src[0] = {48, 54, 101, 110};
    crouchkick_src[1] = {48, 1028, 106, 103};
    crouchkick_src[2] = {162, 1044, 96, 87};
    crouchkick_src[3] = {266, 1052, 91, 779};
    crouchkick_src[4] = {108, 2293, 95, 84};
    crouchkick_src[5] = {211, 2284, 144, 93};
    crouchkick_src[6] = {108, 2293, 95, 84};

    //crouchpunch
    crouchpunch_src[0] = {48, 54, 101, 110};
    crouchpunch_src[1] = {48, 1028, 106, 103};
    crouchpunch_src[2] = {162, 1044, 96, 87};
    crouchpunch_src[3] = {266, 1052, 91, 779};
    crouchpunch_src[4] = {106, 2041, 82, 77};
    crouchpunch_src[5] = {196, 2034, 120, 84};

    //idlehit
    idlehit_src[0] = {48, 54, 101, 110};
    idlehit_src[1] = {86, 2534, 93, 116};
    idlehit_src[2] = {187, 2533, 100, 117};

    //crouchhit
    crouchhit_src[0] = {59, 2807, 91, 87};
    crouchhit_src[1] = {158, 2804, 91, 90};
    crouchhit_src[2] = {59, 2807, 91, 87};

    //knockdown
    knockdown_src[0] = {44, 3030, 91, 109};
    knockdown_src[1] = {143, 3029, 77, 110};
    knockdown_src[2] = {228, 3038, 77, 101};
    knockdown_src[3] = {313, 3042, 99, 97};
    knockdown_src[4] = {420, 3030, 91, 109};

    //KO
    KO_src[0] = {44, 3030, 91, 109};
    KO_src[1] = {143, 3029, 77, 110};
    KO_src[2] = {228, 3038, 77, 101};
    KO_src[3] = {313, 3042, 99, 97};
    KO_src[4] = {420, 3030, 91, 109};

    //victory
    victory_src[0] = {30, 3534, 96, 115};
    victory_src[1] = {134, 3536, 62, 113};
    victory_src[2] = {204, 3538, 124, 111};
    victory_src[3] = {336, 3536, 58, 113};
    victory_src[4] = {402, 3536, 142, 113};

    //special1
    special1_src[0] = {48, 54, 101, 110};
    special1_src[1] = {25, 3815, 106, 103};
    special1_src[2] = {139, 3831, 96, 87};
    special1_src[3] = {243, 3839, 91, 79};
    special1_src[4] = {342, 3831, 96, 87};
    special1_src[5] = {446, 3820, 105, 98};
    special1_src[6] = {559, 3807, 106, 111};
    special1_src[7] = {673, 3790, 75, 128};
    special1_src[8] = {756, 3825, 104, 93};
    special1_src[9] = {868, 3807, 106, 111};
    special1_src[10] = {982, 3820, 105, 98};

    //special2
    special2_src[0] = {48, 54, 101, 110};
    special2_src[1] = {74, 4075, 106, 103};
    special2_src[2] = {188, 4091, 95, 87};
    special2_src[3] = {292, 4099, 93, 79};
    special2_src[4] = {391, 4091, 96, 87};
    special2_src[5] = {495, 4080, 105, 98};
    special2_src[6] = {608, 4068, 106, 110};
    special2_src[7] = {722, 4076, 104, 102};
    special2_src[8] = {834, 4107, 179, 71};
    special2_src[9] = {1021, 4080, 105, 98};
}

zangief::zangief(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/zangief.png");
    hitjump = Mix_LoadWAV("music/playerssound/zangief_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/zangief_lost.wav");
    special = Mix_LoadWAV("music/playerssound/zangief_special.wav");
    stun = Mix_LoadWAV("music/playerssound/zangief_stun.wav");

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

void zangief::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void zangief::walkleft()
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

void zangief::walkright()
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

void zangief::jump()
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
            case 5:
                ypos += 30;
                break;
            case 6:
                ypos += 20;
                break;
            }
        }
    }
    ratio_set(src, dst, jump_frames, playerwidth, playerheight);
}

void zangief::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void zangief::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void zangief::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void zangief::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void zangief::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void zangief::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void zangief::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void zangief::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void zangief::crouchhit()
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

void zangief::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void zangief::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
}

void zangief::victory()
{
    if (victory_flag == false)
    {
        reset_move(1, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void zangief::special1()
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
            case 4:
                ypos -= 30;
                break;
            case (10):
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
    ratio_set(special1_src, special1_dst, special1_frames, playerwidth, playerheight);
}

void zangief::special2()
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
            case 2:
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