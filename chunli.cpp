#include "chunli.hpp"

chunli::chunli() {}
chunli::~chunli() {}

void chunli::rect_initializer()
{
    idle_frames = 4;
    walkleft_frames = 12;
    walkright_frames = 12;
    jump_frames = 10;
    crouch_frames = 4;
    idleblock_frames = 4;
    crouchblock_frames = 7;
    idlepunch_frames = 6;
    idlekick_frames = 6;
    crouchkick_frames = 9;
    crouchpunch_frames = 9;
    idlehit_frames = 6;
    crouchhit_frames = 5;
    knockdown_frames = 10;
    KO_frames = 10;
    victory_frames = 16;
    special1_frames = 13;
    special2_frames = 12;

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
    idle_src[0] = {0, 14, 72, 85};
    idle_src[1] = {80, 13, 72, 86};
    idle_src[2] = {160, 12, 72, 87};
    idle_src[3] = {240, 13, 72, 86};

    //walkleft
    walkleft_src[0] = {0, 269, 73, 86};
    walkleft_src[1] = {81, 266, 63, 89};
    walkleft_src[2] = {152, 265, 60, 90};
    walkleft_src[3] = {220, 264, 63, 91};
    walkleft_src[4] = {291, 265, 64, 90};
    walkleft_src[5] = {363, 266, 65, 89};
    walkleft_src[6] = {436, 267, 72, 88};
    walkleft_src[7] = {516, 266, 65, 89};
    walkleft_src[8] = {589, 265, 64, 90};
    walkleft_src[9] = {661, 264, 63, 91};
    walkleft_src[10] = {732, 265, 60, 90};
    walkleft_src[11] = {800, 266, 63, 89};

    //walkright
    walkright_src[0] = {0, 519, 78, 84};
    walkright_src[1] = {86, 516, 71, 87};
    walkright_src[2] = {165, 515, 63, 88};
    walkright_src[3] = {236, 514, 62, 89};
    walkright_src[4] = {306, 515, 67, 88};
    walkright_src[5] = {381, 516, 76, 87};
    walkright_src[6] = {465, 517, 81, 86};
    walkright_src[7] = {554, 516, 76, 87};
    walkright_src[8] = {638, 515, 67, 88};
    walkright_src[9] = {713, 514, 62, 89};
    walkright_src[10] = {783, 515, 63, 88};
    walkright_src[11] = {854, 516, 71, 87};

    //jump
    jump_src[0] = {0, 14, 72, 85};
    jump_src[1] = {29, 791, 74, 81};
    jump_src[2] = {111, 762, 47, 110};
    jump_src[3] = {166, 788, 50, 84};
    jump_src[4] = {224, 797, 52, 75};
    jump_src[5] = {284, 807, 57, 65};
    jump_src[6] = {349, 797, 52, 75};
    jump_src[7] = {409, 788, 50, 84};
    jump_src[8] = {467, 762, 47, 110};
    jump_src[9] = {522, 791, 74, 81};

    //crouch
    crouch_src[0] = {0, 14, 72, 85};
    crouch_src[1] = {39, 1019, 74, 81};
    crouch_src[2] = {121, 1028, 74, 72};
    crouch_src[3] = {202, 1034, 72, 66};

    //idleblock
    idleblock_src[0] = {0, 14, 72, 85};
    idleblock_src[1] = {39, 1265, 73, 86};
    idleblock_src[2] = {120, 1266, 83, 85};
    idleblock_src[3] = {211, 1265, 73, 86};

    //crouchblock
    crouchblock_src[0] = {0, 14, 72, 85};
    crouchblock_src[1] = {39, 1019, 74, 81};
    crouchblock_src[2] = {121, 1028, 74, 72};
    crouchblock_src[3] = {202, 1034, 72, 66};
    crouchblock_src[4] = {38, 1400, 73, 68};
    crouchblock_src[5] = {119, 1401, 74, 67};
    crouchblock_src[6] = {201, 1400, 73, 68};

    //idlepunch
    idlepunch_src[0] = {0, 14, 72, 85};
    idlepunch_src[1] = {13, 1525, 78, 87};
    idlepunch_src[2] = {99, 1523, 101, 89};
    idlepunch_src[3] = {208, 1517, 87, 95};
    idlepunch_src[4] = {303, 1523, 101, 89};
    idlepunch_src[5] = {412, 1525, 78, 87};

    //idlekick
    idlekick_src[0] = {0, 14, 72, 85};
    idlekick_src[1] = {29, 1783, 66, 89};
    idlekick_src[2] = {103, 1779, 71, 93};
    idlekick_src[3] = {182, 1777, 109, 95};
    idlekick_src[4] = {299, 1779, 71, 93};
    idlekick_src[5] = {378, 1783, 66, 89};

    //crouchpunch
    crouchpunch_src[0] = {0, 14, 72, 85};
    crouchpunch_src[1] = {39, 1019, 74, 81};
    crouchpunch_src[2] = {121, 1028, 74, 72};
    crouchpunch_src[3] = {202, 1034, 72, 66};
    crouchpunch_src[4] = {0, 2031, 80, 67};
    crouchpunch_src[5] = {88, 2031, 88, 67};
    crouchpunch_src[6] = {184, 2031, 124, 67};
    crouchpunch_src[7] = {316, 2031, 88, 67};
    crouchpunch_src[8] = {412, 2031, 80, 67};

    //crouchkick
    crouchkick_src[0] = {0, 14, 72, 85};
    crouchkick_src[1] = {39, 1019, 74, 81};
    crouchkick_src[2] = {121, 1028, 74, 72};
    crouchkick_src[3] = {202, 1034, 72, 66};
    crouchkick_src[4] = {29, 2274, 63, 58};
    crouchkick_src[5] = {100, 2274, 61, 58};
    crouchkick_src[6] = {169, 2284, 107, 48};
    crouchkick_src[7] = {284, 2274, 61, 58};
    crouchkick_src[8] = {353, 2274, 63, 58};

    //idlehit
    idlehit_src[0] = {0, 14, 72, 85};
    idlehit_src[1] = {32, 2536, 73, 92};
    idlehit_src[2] = {113, 2536, 76, 92};
    idlehit_src[3] = {197, 2538, 87, 90};
    idlehit_src[4] = {289, 2536, 76, 92};
    idlehit_src[5] = {372, 2536, 73, 92};

    //crouchhit
    crouchhit_src[0] = {32, 2781, 72, 69};
    crouchhit_src[1] = {112, 2779, 73, 71};
    crouchhit_src[2] = {193, 2783, 76, 67};
    crouchhit_src[3] = {282, 2779, 73, 71};
    crouchhit_src[4] = {362, 2781, 72, 69};

    //knockdown
    knockdown_src[0] = {23, 3033, 72, 80};
    knockdown_src[1] = {103, 3030, 72, 83};
    knockdown_src[2] = {183, 3026, 76, 87};
    knockdown_src[3] = {267, 3026, 79, 87};
    knockdown_src[4] = {354, 3026, 76, 87};
    knockdown_src[5] = {438, 3030, 72, 83};
    knockdown_src[6] = {518, 3033, 72, 80};
    knockdown_src[7] = {598, 3030, 72, 83};
    knockdown_src[8] = {678, 3026, 76, 87};
    knockdown_src[9] = {762, 3026, 79, 87};

    //KO
    KO_src[0] = {23, 3033, 72, 80};
    KO_src[1] = {103, 3030, 72, 83};
    KO_src[2] = {183, 3026, 76, 87};
    KO_src[3] = {267, 3026, 79, 87};
    KO_src[4] = {354, 3026, 76, 87};
    KO_src[5] = {438, 3030, 72, 83};
    KO_src[6] = {518, 3033, 72, 80};
    KO_src[7] = {598, 3030, 72, 83};
    KO_src[8] = {678, 3026, 76, 87};
    KO_src[9] = {762, 3026, 79, 87};

    //victory
    victory_src[0] = {23, 3547, 73, 91};
    victory_src[1] = {104, 3541, 68, 97};
    victory_src[2] = {180, 3536, 48, 102};
    victory_src[3] = {236, 3510, 74, 128};
    victory_src[4] = {318, 3526, 74, 112};
    victory_src[5] = {400, 3537, 74, 101};
    victory_src[6] = {482, 3526, 75, 112};
    victory_src[7] = {564, 3510, 74, 128};
    victory_src[8] = {646, 3535, 48, 103};
    victory_src[9] = {702, 3536, 48, 102};
    victory_src[10] = {758, 3535, 48, 103};
    victory_src[11] = {814, 3536, 48, 102};
    victory_src[12] = {870, 3535, 48, 103};
    victory_src[13] = {926, 3536, 48, 102};
    victory_src[14] = {982, 3535, 48, 103};
    victory_src[15] = {1038, 3522, 58, 116};

    //special1
    special1_src[0] = {0, 14, 72, 85};
    special1_src[1] = {13, 3799, 66, 89};
    special1_src[2] = {87, 3795, 711, 93};
    special1_src[3] = {166, 3789, 107, 99};
    special1_src[4] = {281, 3793, 71, 95};
    special1_src[5] = {412, 3793, 119, 95};
    special1_src[6] = {539, 3793, 78, 95};
    special1_src[7] = {684, 3795, 120, 93};
    special1_src[8] = {812, 3793, 71, 95};
    special1_src[9] = {973, 3795, 101, 93};
    special1_src[10] = {1082, 3793, 78, 95};
    special1_src[11] = {1226, 3795, 71, 93};
    special1_src[12] = {1305, 3799, 66, 89};

    //special2
    special2_src[0] = {0, 14, 72, 85};
    special2_src[1] = {29, 4044, 74, 81};
    special2_src[2] = {111, 4015, 47, 110};
    special2_src[3] = {166, 4027, 96, 98};
    special2_src[4] = {270, 4029, 86, 96};
    special2_src[5] = {364, 4028, 87, 97};
    special2_src[6] = {459, 4060, 99, 65};
    special2_src[7] = {566, 4055, 110, 70};
    special2_src[8] = {684, 4032, 86, 93};
    special2_src[9] = {778, 4057, 101, 68};
    special2_src[10] = {887, 4044, 88, 81};
    special2_src[11] = {983, 4044, 74, 81};
}

chunli::chunli(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/chunli.png");
    hitjump = Mix_LoadWAV("music/playerssound/chunli_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/chunli_lost.wav");
    special = Mix_LoadWAV("music/playerssound/chunli_special.wav");
    stun = Mix_LoadWAV("music/playerssound/chunli_stun.wav");

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

void chunli::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void chunli::walkleft()
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

void chunli::walkright()
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

void chunli::jump()
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
                ypos -= 20;
                break;
            case 6:
                ypos += 20;
                break;
            case 7:
                ypos += 20;
                break;
            case 8:
                ypos += 20;
                break;
            }
        }
    }
    ratio_set(src, dst, jump_frames, playerwidth, playerheight);
}

void chunli::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void chunli::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void chunli::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void chunli::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void chunli::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void chunli::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void chunli::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void chunli::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void chunli::crouchhit()
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

void chunli::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void chunli::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
}

void chunli::victory()
{
    if (victory_flag == false)
    {
        reset_move(1, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void chunli::special1()
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
            case (12):
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

void chunli::special2()
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
            case 6:
                ypos -= 30;
                break;
            case 7:
                ypos -= 20;
                break;
            case 8:
                ypos += 50;
                break;
            case (11):
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