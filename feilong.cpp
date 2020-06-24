#include "feilong.hpp"

feilong::feilong() {}
feilong::~feilong() {}

void feilong::rect_initializer()
{
    idle_frames = 11;
    walkleft_frames = 8;
    walkright_frames = 8;
    jump_frames = 9;
    crouch_frames = 4;
    idleblock_frames = 3;
    crouchblock_frames = 6;
    idlepunch_frames = 5;
    idlekick_frames = 8;
    crouchkick_frames = 11;
    crouchpunch_frames = 11;
    idlehit_frames = 7;
    crouchhit_frames = 4;
    knockdown_frames = 9;
    KO_frames = 9;
    victory_frames = 11;
    special1_frames = 7;
    special2_frames = 14;

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
    idle_src[0] = {28, 9, 88, 87};
    idle_src[1] = {133, 7, 90, 89};
    idle_src[2] = {237, 6, 91, 90};
    idle_src[3] = {340, 6, 91, 91};
    idle_src[4] = {447, 5, 93, 92};
    idle_src[5] = {552, 5, 94, 92};
    idle_src[6] = {659, 6, 90, 91};
    idle_src[7] = {763, 7, 91, 90};
    idle_src[8] = {869, 4, 91, 92};
    idle_src[9] = {971, 4, 91, 92};
    idle_src[10] = {1078, 5, 90, 91};

    //walkleft
    walkleft_src[0] = {28, 312, 76, 99};
    walkleft_src[1] = {117, 311, 76, 99};
    walkleft_src[2] = {205, 312, 77, 97};
    walkleft_src[3] = {299, 305, 75, 103};
    walkleft_src[4] = {389, 305, 76, 102};
    walkleft_src[5] = {486, 307, 76, 99};
    walkleft_src[6] = {575, 309, 77, 97};
    walkleft_src[7] = {666, 303, 75, 102};

    //walkright
    walkright_src[0] = {28, 535, 51, 101};
    walkright_src[1] = {97, 537, 49, 97};
    walkright_src[2] = {168, 536, 51, 97};
    walkright_src[3] = {241, 532, 50, 100};
    walkright_src[4] = {311, 528, 50, 102};
    walkright_src[5] = {378, 531, 45, 97};
    walkright_src[6] = {440, 530, 41, 97};
    walkright_src[7] = {496, 526, 46, 99};

    //jump
    jump_src[0] = {28, 9, 88, 87};
    jump_src[1] = {28, 791, 91, 75};
    jump_src[2] = {144, 762, 50, 112};
    jump_src[3] = {213, 776, 74, 85};
    jump_src[4] = {306, 786, 68, 73};
    jump_src[5] = {390, 794, 61, 62};
    jump_src[6] = {474, 793, 68, 73};
    jump_src[7] = {578, 784, 74, 85};
    jump_src[8] = {666, 771, 50, 112};

    //crouch
    crouch_src[0] = {28, 9, 88, 87};
    crouch_src[1] = {28, 1020, 78, 83};
    crouch_src[2] = {128, 1024, 73, 76};
    crouch_src[3] = {221, 1023, 73, 74};

    //idleblock
    idleblock_src[0] = {28, 9, 88, 87};
    idleblock_src[1] = {67, 1257, 87, 89};
    idleblock_src[2] = {179, 1257, 76, 87};

    //crouchblock
    crouchblock_src[0] = {28, 9, 88, 87};
    crouchblock_src[1] = {28, 1020, 78, 83};
    crouchblock_src[2] = {128, 1024, 73, 76};
    crouchblock_src[3] = {221, 1023, 73, 74};
    crouchblock_src[4] = {90, 1394, 54, 74};
    crouchblock_src[5] = {167, 1392, 53, 73};

    //idlepunch
    idlepunch_src[0] = {28, 9, 88, 87};
    idlepunch_src[1] = {28, 1527, 84, 84};
    idlepunch_src[2] = {131, 1516, 111, 94};
    idlepunch_src[3] = {256, 1516, 81, 94};
    idlepunch_src[4] = {354, 1518, 92, 92};

    //idlekick
    idlekick_src[0] = {28, 9, 88, 87};
    idlekick_src[1] = {28, 1786, 72, 96};
    idlekick_src[2] = {118, 1781, 121, 99};
    idlekick_src[3] = {259, 1780, 114, 99};
    idlekick_src[4] = {396, 1781, 91, 97};
    idlekick_src[5] = {508, 1778, 71, 98};
    idlekick_src[6] = {601, 1780, 93, 94};
    idlekick_src[7] = {719, 1781, 97, 91};

    //courchpunch
    crouchpunch_src[0] = {28, 9, 88, 87};
    crouchpunch_src[1] = {28, 1020, 78, 83};
    crouchpunch_src[2] = {128, 1024, 73, 76};
    crouchpunch_src[3] = {221, 1023, 73, 74};
    crouchpunch_src[4] = {41, 2035, 58, 72};
    crouchpunch_src[5] = {115, 2038, 80, 68};
    crouchpunch_src[6] = {216, 2034, 57, 72};
    crouchpunch_src[7] = {292, 2038, 90, 67};
    crouchpunch_src[8] = {398, 2041, 132, 62};
    crouchpunch_src[9] = {542, 2038, 90, 67};
    crouchpunch_src[10] = {656, 2034, 57, 72};

    //crouchkick
    crouchkick_src[0] = {28, 9, 88, 87};
    crouchkick_src[1] = {28, 1020, 78, 83};
    crouchkick_src[2] = {128, 1024, 73, 76};
    crouchkick_src[3] = {221, 1023, 73, 74};
    crouchkick_src[4] = {28, 2280, 62, 73};
    crouchkick_src[5] = {105, 2282, 60, 70};
    crouchkick_src[6] = {181, 2286, 108, 64};
    crouchkick_src[7] = {303, 2281, 77, 67};
    crouchkick_src[8] = {395, 2294, 133, 54};
    crouchkick_src[9] = {547, 2280, 77, 67};
    crouchkick_src[10] = {641, 2274, 66, 73};

    //idlehit
    idlehit_src[0] = {28, 9, 88, 87};
    idlehit_src[1] = {28, 2542, 92, 92};
    idlehit_src[2] = {134, 2539, 87, 94};
    idlehit_src[3] = {236, 2536, 64, 96};
    idlehit_src[4] = {316, 2541, 63, 90};
    idlehit_src[5] = {390, 2538, 93, 92};
    idlehit_src[6] = {497, 2534, 88, 94};

    //crouchhit
    crouchhit_src[0] = {41, 2799, 63, 75};
    crouchhit_src[1] = {120, 2797, 63, 76};
    crouchhit_src[2] = {197, 2797, 56, 74};
    crouchhit_src[3] = {260, 2797, 63, 76};

    //knockdown
    knockdown_src[0] = {38, 3045, 90, 88};
    knockdown_src[1] = {145, 3048, 84, 85};
    knockdown_src[2] = {248, 3046, 65, 85};
    knockdown_src[3] = {328, 3040, 90, 88};
    knockdown_src[4] = {436, 3042, 84, 85};
    knockdown_src[5] = {536, 3040, 65, 85};
    knockdown_src[6] = {626, 3028, 85, 90};
    knockdown_src[7] = {726, 3026, 84, 92};
    knockdown_src[8] = {826, 3032, 84, 85};

    //KO
    KO_src[0] = {38, 3045, 90, 88};
    KO_src[1] = {145, 3048, 84, 85};
    KO_src[2] = {248, 3046, 65, 85};
    KO_src[3] = {328, 3040, 90, 88};
    KO_src[4] = {436, 3042, 84, 85};
    KO_src[5] = {536, 3040, 65, 85};
    KO_src[6] = {626, 3028, 85, 90};
    KO_src[7] = {726, 3026, 84, 92};
    KO_src[8] = {826, 3032, 84, 85};

    //victory
    victory_src[0] = {28, 3528, 65, 100};
    victory_src[1] = {113, 3525, 67, 100};
    victory_src[2] = {198, 3524, 65, 100};
    victory_src[3] = {276, 3524, 65, 100};
    victory_src[4] = {356, 3524, 65, 100};
    victory_src[5] = {440, 3524, 67, 100};
    victory_src[6] = {526, 3523, 70, 100};
    victory_src[7] = {612, 3523, 73, 100};
    victory_src[8] = {698, 3523, 72, 100};
    victory_src[9] = {784, 3524, 78, 100};
    victory_src[10] = {879, 3527, 76, 97};

    //special1
    special1_src[0] = {28, 9, 88, 87};
    special1_src[1] = {29, 3798, 95, 89};
    special1_src[2] = {140, 3797, 94, 89};
    special1_src[3] = {253, 3813, 78, 72};
    special1_src[4] = {349, 3797, 68, 86};
    special1_src[5] = {434, 3803, 73, 79};
    special1_src[6] = {516, 3790, 116, 93};

    //special2
    special2_src[0] = {28, 9, 88, 87};
    special2_src[1] = {5, 4042, 65, 79};
    special2_src[2] = {89, 4031, 54, 90};
    special2_src[3] = {160, 4041, 82, 80};
    special2_src[4] = {259, 4043, 86, 75};
    special2_src[5] = {362, 4027, 96, 91};
    special2_src[6] = {476, 4030, 95, 87};
    special2_src[7] = {588, 4039, 74, 77};
    special2_src[8] = {678, 4041, 117, 74};
    special2_src[9] = {812, 4036, 69, 78};
    special2_src[10] = {900, 4026, 58, 87};
    special2_src[11] = {974, 4018, 106, 95};
    special2_src[12] = {1104, 4026, 58, 87};
    special2_src[13] = {1182, 4036, 69, 78};
}

feilong::feilong(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/feilong.png");
    hitjump = Mix_LoadWAV("music/playerssound/feilong_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/feilong_lost.wav");
    special = Mix_LoadWAV("music/playerssound/feilong_special.wav");
    stun = Mix_LoadWAV("music/playerssound/feilong_stun.wav");

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

void feilong::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void feilong::walkleft()
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

void feilong::walkright()
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

void feilong::jump()
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
                ypos -= 30;
                break;
            case 4:
                ypos -= 10;
                break;
            case 7:
                ypos += 10;
                break;
            case 8:
                ypos += 30;
                break;
            }
        }
    }
    ratio_set(src, dst, jump_frames, playerwidth, playerheight);
}

void feilong::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void feilong::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void feilong::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void feilong::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void feilong::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void feilong::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void feilong::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void feilong::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void feilong::crouchhit()
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

void feilong::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void feilong::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
}

void feilong::victory()
{
    if (victory_flag == false)
    {
        reset_move(2, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void feilong::special1()
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

void feilong::special2()
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
            case (13):
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