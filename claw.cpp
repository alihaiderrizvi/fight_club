#include "claw.hpp"

claw::claw() {}
claw::~claw() {}

void claw::rect_initializer()
{
    idle_frames = 5;
    walkleft_frames = 6;
    walkright_frames = 6;
    jump_frames = 8;
    crouch_frames = 4;
    idleblock_frames = 2;
    crouchblock_frames = 5;
    idlepunch_frames = 6;
    idlekick_frames = 8;
    crouchkick_frames = 9;
    crouchpunch_frames = 11;
    idlehit_frames = 7;
    crouchhit_frames = 5;
    knockdown_frames = 7;
    KO_frames = 7;
    victory_frames = 7;
    special1_frames = 9;
    special2_frames = 11;

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
    idle_src[0] = {29, 35, 71, 110};
    idle_src[1] = {108, 36, 72, 109};
    idle_src[2] = {188, 34, 73, 111};
    idle_src[3] = {269, 32, 75, 113};
    idle_src[4] = {352, 34, 73, 111};

    //walkleft
    walkleft_src[0] = {29, 266, 67, 109};
    walkleft_src[1] = {104, 264, 68, 111};
    walkleft_src[2] = {180, 268, 69, 107};
    walkleft_src[3] = {257, 264, 68, 111};
    walkleft_src[4] = {333, 266, 67, 109};
    walkleft_src[5] = {408, 265, 71, 110};

    //walkright
    walkright_src[0] = {29, 524, 67, 109};
    walkright_src[1] = {104, 522, 68, 111};
    walkright_src[2] = {180, 526, 69, 107};
    walkright_src[3] = {257, 522, 68, 111};
    walkright_src[4] = {333, 524, 67, 109};
    walkright_src[5] = {408, 523, 71, 110};

    //jump
    jump_src[0] = {29, 35, 71, 110};
    jump_src[1] = {36, 872, 71, 96};
    jump_src[2] = {115, 849, 59, 115};
    jump_src[3] = {182, 769, 75, 92};
    jump_src[4] = {265, 783, 74, 86};
    jump_src[5] = {182, 769, 75, 92};
    jump_src[6] = {115, 849, 59, 115};
    jump_src[7] = {347, 872, 71, 96};

    //crouch
    crouch_src[0] = {29, 35, 71, 110};
    crouch_src[1] = {30, 1046, 71, 96};
    crouch_src[2] = {109, 1060, 65, 82};
    crouch_src[3] = {182, 1074, 72, 68};

    //idleblock
    idleblock_src[0] = {29, 35, 71, 110};
    idleblock_src[1] = {52, 1261, 71, 116};

    //crouchblock
    crouchblock_src[0] = {29, 35, 71, 110};
    crouchblock_src[1] = {30, 1046, 71, 96};
    crouchblock_src[2] = {109, 1060, 65, 82};
    crouchblock_src[3] = {182, 1074, 72, 68};
    crouchblock_src[4] = {57, 1400, 62, 86};

    //idlepunch
    idlepunch_src[0] = {29, 35, 71, 110};
    idlepunch_src[1] = {57, 1532, 71, 96};
    idlepunch_src[2] = {136, 1540, 84, 88};
    idlepunch_src[3] = {228, 1529, 145, 99};
    idlepunch_src[4] = {381, 1540, 84, 88};
    idlepunch_src[5] = {473, 1532, 71, 96};

    //idlekick
    idlekick_src[0] = {29, 35, 71, 110};
    idlekick_src[1] = {36, 1793, 71, 96};
    idlekick_src[2] = {115, 1774, 59, 115};
    idlekick_src[3] = {182, 1797, 75, 92};
    idlekick_src[4] = {265, 1803, 74, 86};
    idlekick_src[5] = {347, 1813, 110, 76};
    idlekick_src[6] = {465, 1803, 74, 86};
    idlekick_src[7] = {547, 1793, 71, 96};

    //crouchkick
    crouchkick_src[0] = {29, 35, 71, 110};
    crouchkick_src[1] = {30, 1046, 71, 96};
    crouchkick_src[2] = {109, 1060, 65, 82};
    crouchkick_src[3] = {182, 1074, 72, 68};
    crouchkick_src[4] = {36, 2287, 89, 60};
    crouchkick_src[5] = {133, 2290, 73, 57};
    crouchkick_src[6] = {214, 2287, 89, 60};
    crouchkick_src[7] = {311, 2296, 116, 51};
    crouchkick_src[8] = {435, 2287, 68, 60};

    //crouchpunch
    crouchpunch_src[0] = {29, 35, 71, 110};
    crouchpunch_src[1] = {30, 1046, 71, 96};
    crouchpunch_src[2] = {109, 1060, 65, 82};
    crouchpunch_src[3] = {182, 1074, 72, 68};
    crouchpunch_src[4] = {29, 2041, 65, 66};
    crouchpunch_src[5] = {102, 2035, 62, 72};
    crouchpunch_src[6] = {172, 2034, 99, 73};
    crouchpunch_src[7] = {279, 2035, 169, 72};
    crouchpunch_src[8] = {456, 2034, 99, 73};
    crouchpunch_src[9] = {563, 2035, 62, 72};
    crouchpunch_src[10] = {633, 2041, 65, 66};

    //idlehit
    idlehit_src[0] = {29, 35, 71, 110};
    idlehit_src[1] = {70, 2527, 70, 103};
    idlehit_src[2] = {148, 2534, 71, 96};
    idlehit_src[3] = {227, 2540, 74, 90};
    idlehit_src[4] = {309, 2540, 75, 90};
    idlehit_src[5] = {397, 2540, 74, 90};
    idlehit_src[6] = {478, 2534, 71, 96};

    //crouchhit
    crouchhit_src[0] = {52, 2769, 69, 74};
    crouchhit_src[1] = {129, 2766, 78, 77};
    crouchhit_src[2] = {215, 2769, 69, 74};
    crouchhit_src[3] = {292, 2766, 78, 77};
    crouchhit_src[4] = {375, 2769, 69, 74};

    //knockdown
    knockdown_src[0] = {52, 3023, 70, 103};
    knockdown_src[1] = {130, 3025, 69, 101};
    knockdown_src[2] = {207, 3023, 70, 103};
    knockdown_src[3] = {285, 3030, 72, 96};
    knockdown_src[4] = {365, 3023, 70, 103};
    knockdown_src[5] = {443, 3025, 69, 101};
    knockdown_src[6] = {520, 3023, 70, 103};

    //KO
    KO_src[0] = {52, 3023, 70, 103};
    KO_src[1] = {130, 3025, 69, 101};
    KO_src[2] = {207, 3023, 70, 103};
    KO_src[3] = {285, 3030, 72, 96};
    KO_src[4] = {365, 3023, 70, 103};
    KO_src[5] = {443, 3025, 69, 101};
    KO_src[6] = {520, 3023, 70, 103};

    //victory
    victory_src[0] = {28, 3563, 66, 112};
    victory_src[1] = {134, 3560, 59, 116};
    victory_src[2] = {201, 3558, 59, 118};
    victory_src[3] = {268, 3557, 59, 119};
    victory_src[4] = {335, 3574, 97, 102};
    victory_src[5] = {440, 3523, 53, 153};
    victory_src[6] = {335, 3574, 97, 102};

    //special1
    special1_src[0] = {29, 35, 71, 110};
    special1_src[1] = {19, 3800, 90, 88};
    special1_src[2] = {117, 3818, 92, 70};
    special1_src[3] = {217, 3824, 68, 64};
    special1_src[4] = {293, 3830, 106, 58};
    special1_src[5] = {407, 3786, 54, 102};
    special1_src[6] = {469, 3819, 169, 69};
    special1_src[7] = {646, 3786, 54, 102};
    special1_src[8] = {708, 3792, 71, 96};

    //special2
    special2_src[0] = {29, 35, 71, 110};
    special2_src[1] = {29, 4036, 59, 115};
    special2_src[2] = {96, 4063, 90, 88};
    special2_src[3] = {194, 4081, 85, 70};
    special2_src[4] = {287, 4087, 68, 64};
    special2_src[5] = {363, 4093, 106, 58};
    special2_src[6] = {477, 4082, 95, 69};
    special2_src[7] = {580, 4036, 59, 115};
    special2_src[8] = {647, 4079, 91, 72};
    special2_src[9] = {746, 4036, 59, 115};
    special2_src[10] = {813, 4036, 59, 115};
}

claw::claw(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/claw.png");
    hitjump = Mix_LoadWAV("music/playerssound/claw_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/claw_lost.wav");
    special = Mix_LoadWAV("music/playerssound/claw_special.wav");
    stun = Mix_LoadWAV("music/playerssound/claw_stun.wav");

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

void claw::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void claw::walkleft()
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

void claw::walkright()
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

void claw::jump()
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
            case 5:
                ypos += 20;
                break;
            case 6:
                ypos += 20;
                break;
            }
        }
    }
    ratio_set(src, dst, jump_frames, playerwidth, playerheight);
}

void claw::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void claw::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void claw::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void claw::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void claw::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void claw::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void claw::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void claw::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void claw::crouchhit()
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

void claw::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void claw::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
}

void claw::victory()
{
    if (victory_flag == false)
    {
        reset_move(1, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void claw::special1()
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
            case 1:
                ypos -= 30;
                break;
            case (8):
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

void claw::special2()
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
                ypos -= 40;
                break;
            case 7:
                ypos += 40;
                break;
            case 8:
                ypos += 20;
                break;
            case 9:
                ypos -= 20;
                break;
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
    ratio_set(special2_src, special2_dst, special2_frames, playerwidth, playerheight);
}