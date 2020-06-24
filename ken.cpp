#include "ken.hpp"

ken::ken() {}
ken::~ken() {}

void ken::rect_initializer()
{

    idle_frames = 6;
    walkleft_frames = 6;
    walkright_frames = 6;
    jump_frames = 8;
    crouch_frames = 3;
    idleblock_frames = 3;
    crouchblock_frames = 3;
    idlepunch_frames = 4;
    idlekick_frames = 5;
    crouchkick_frames = 5;
    crouchpunch_frames = 3;
    idlehit_frames = 3;
    crouchhit_frames = 3;
    knockdown_frames = 7;
    KO_frames = 7;
    victory_frames = 6;
    special1_frames = 6;
    special2_frames = 4;

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
    idle_src[0] = {42, 16, 59, 90};
    idle_src[1] = {109, 17, 60, 89};
    idle_src[2] = {177, 16, 59, 90};
    idle_src[3] = {244, 14, 58, 92};
    idle_src[4] = {310, 13, 55, 93};
    idle_src[5] = {373, 14, 58, 92};

    //walkleft
    walkleft_src[0] = {41, 285, 61, 87};
    walkleft_src[1] = {110, 282, 59, 90};
    walkleft_src[2] = {177, 282, 57, 90};
    walkleft_src[3] = {242, 282, 58, 90};
    walkleft_src[4] = {308, 281, 58, 91};
    walkleft_src[5] = {374, 283, 57, 89};

    //walkright
    walkright_src[0] = {41, 553, 53, 83};
    walkright_src[1] = {102, 548, 60, 88};
    walkright_src[2] = {170, 546, 64, 90};
    walkright_src[3] = {242, 547, 63, 89};
    walkright_src[4] = {313, 547, 54, 89};
    walkright_src[5] = {375, 547, 50, 89};

    //jump
    jump_src[0] = {42, 896, 55, 85};
    jump_src[1] = {105, 872, 56, 104};
    jump_src[2] = {169, 835, 50, 89};
    jump_src[3] = {227, 813, 54, 77};
    jump_src[4] = {289, 810, 48, 70};
    jump_src[5] = {345, 820, 48, 86};
    jump_src[6] = {401, 846, 55, 103};
    jump_src[7] = {464, 896, 55, 85};

    //crouch
    crouch_src[0] = {50, 1056, 53, 83};
    crouch_src[1] = {111, 1070, 57, 69};
    crouch_src[2] = {176, 1078, 61, 61};

    //dleblock
    idleblock_src[0] = {31, 1291, 63, 92};
    idleblock_src[1] = {102, 1290, 64, 93};
    idleblock_src[2] = {174, 1291, 63, 92};

    //crouchblock
    crouchblock_src[0] = {53, 1414, 55, 61};
    crouchblock_src[1] = {116, 1411, 58, 64};
    crouchblock_src[2] = {182, 1414, 55, 61};

    //idlepunch
    idlepunch_src[0] = {39, 1511, 60, 94};
    idlepunch_src[1] = {107, 1510, 74, 95};
    idlepunch_src[2] = {189, 1511, 108, 94};
    idlepunch_src[3] = {307, 1510, 74, 95};

    //idlekick
    idlekick_src[0] = {53, 1779, 60, 94};
    idlekick_src[1] = {121, 1781, 66, 92};
    idlekick_src[2] = {195, 1781, 114, 92};
    idlekick_src[3] = {317, 1781, 66, 92};
    idlekick_src[4] = {391, 1779, 60, 94};

    //crouchpunch
    crouchpunch_src[0] = {40, 2033, 69, 61};
    crouchpunch_src[1] = {117, 2033, 95, 61};
    crouchpunch_src[2] = {220, 2033, 69, 61};

    //crouchkick
    crouchkick_src[0] = {24, 2282, 71, 66};
    crouchkick_src[1] = {103, 2288, 97, 60};
    crouchkick_src[2] = {208, 2295, 146, 53};
    crouchkick_src[3] = {362, 2288, 97, 60};
    crouchkick_src[4] = {467, 2284, 70, 64};

    //idlehit
    idlehit_src[0] = {57, 2531, 73, 88};
    idlehit_src[1] = {138, 2526, 83, 93};
    idlehit_src[2] = {229, 2529, 67, 90};

    //crouchhit
    crouchhit_src[0] = {84, 2784, 65, 64};
    crouchhit_src[1] = {157, 2783, 68, 65};
    crouchhit_src[2] = {233, 2778, 68, 70};
    crouchhit_src[3] = {307, 2783, 68, 65};

    //knockdown
    knockdown_src[0] = {25, 3026, 77, 87};
    knockdown_src[1] = {110, 3024, 65, 89};
    knockdown_src[2] = {183, 3023, 67, 90};
    knockdown_src[3] = {258, 3024, 65, 89};
    knockdown_src[4] = {331, 3026, 77, 87};
    knockdown_src[5] = {416, 3024, 65, 89};
    knockdown_src[6] = {489, 3023, 67, 90};

    //KO
    KO_src[0] = {25, 3026, 77, 87};
    KO_src[1] = {110, 3024, 65, 89};
    KO_src[2] = {183, 3023, 67, 90};
    KO_src[3] = {258, 3024, 65, 89};
    KO_src[4] = {331, 3026, 77, 87};
    KO_src[5] = {416, 3024, 65, 89};
    KO_src[6] = {489, 3023, 67, 90};

    //victory
    victory_src[0] = {53, 3557, 53, 83};
    victory_src[1] = {114, 3551, 60, 89};
    victory_src[2] = {182, 3543, 60, 97};
    victory_src[3] = {250, 3518, 55, 122};
    victory_src[4] = {322, 3543, 60, 97};
    victory_src[5] = {394, 3551, 60, 89};

    //special1
    special1_src[0] = {35, 3876, 62, 79};
    special1_src[1] = {105, 3867, 68, 89};
    special1_src[2] = {181, 3829, 59, 125};
    special1_src[3] = {248, 3770, 53, 119};
    special1_src[4] = {309, 3781, 49, 117};
    special1_src[5] = {366, 3858, 59, 98};

    //special2
    special2_src[0] = {25, 4067, 74, 90};
    special2_src[1] = {107, 4073, 85, 84};
    special2_src[2] = {200, 4076, 90, 81};
    special2_src[3] = {298, 4080, 106, 77};
}

ken::ken(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/ken.png");
    hitjump = Mix_LoadWAV("music/playerssound/ken_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/ken_lost.wav");
    special = Mix_LoadWAV("music/playerssound/ken_special.wav");
    stun = Mix_LoadWAV("music/playerssound/ken_stun.wav");

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

void ken::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void ken::walkleft()
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

void ken::walkright()
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
    ratio_set(src, dst, walkright_frames, playerwidth - 20, playerheight);
}

void ken::jump()
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
            case 3:
                ypos -= 20;
                break;
            case 4:
                ypos -= 20;
                break;
            case 7:
                ypos += 40;
                break;
            }
        }
    }
    ratio_set(src, dst, jump_frames, playerwidth, playerheight);
}

void ken::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void ken::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void ken::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void ken::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void ken::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void ken::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void ken::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void ken::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void ken::crouchhit()
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

void ken::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void ken::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
}

void ken::victory()
{
    if (victory_flag == false)
    {
        reset_move(2, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void ken::special1()
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
    ratio_set(special1_src, special1_dst, special1_frames, playerwidth, playerheight);
}

void ken::special2()
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
            case 3:
                ypos -= 30;
                break;
            case (6):
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