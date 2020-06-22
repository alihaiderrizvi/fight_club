#include "dictador.hpp"

dictador::dictador() {}
dictador::~dictador() {}

void dictador::rect_initializer()
{
    idle_frames = 4;
    walkleft_frames = 4;
    walkright_frames = 4;
    jump_frames = 8;
    crouch_frames = 4;
    idleblock_frames = 3;
    crouchblock_frames = 5;
    idlepunch_frames = 9;
    idlekick_frames = 7;
    crouchkick_frames = 7;
    crouchpunch_frames = 11;
    idlehit_frames = 5;
    crouchhit_frames = 6;
    knockdown_frames = 7;
    KO_frames = 7;
    victory_frames = 4;
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
    idle_src[0] = {64, 31, 104, 96};
    idle_src[1] = {176, 33, 103, 94};
    idle_src[2] = {287, 36, 103, 91};
    idle_src[3] = {398, 33, 103, 94};

    //walkleft
    walkleft_src[0] = {64, 291, 80, 101};
    walkleft_src[1] = {152, 290, 66, 102};
    walkleft_src[2] = {226, 295, 68, 97};
    walkleft_src[3] = {302, 296, 104, 96};

    //walkright
    walkright_src[0] = {64, 527, 80, 101};
    walkright_src[1] = {152, 526, 66, 102};
    walkright_src[2] = {226, 531, 68, 97};
    walkright_src[3] = {302, 532, 104, 96};

    //jump
    jump_src[0] = {64, 31, 104, 96};
    jump_src[1] = {49, 907, 87, 82};
    jump_src[2] = {144, 887, 71, 97};
    jump_src[3] = {223, 815, 81, 87};
    jump_src[4] = {312, 791, 109, 70};
    jump_src[5] = {429, 794, 81, 87};
    jump_src[6] = {518, 816, 71, 97};
    jump_src[7] = {597, 907, 87, 82};

    //crouch
    crouch_src[0] = {64, 31, 104, 96};
    crouch_src[1] = {49, 1052, 103, 90};
    crouch_src[2] = {160, 1071, 104, 71};
    crouch_src[3] = {272, 1080, 105, 62};

    //idleblock
    idleblock_src[0] = {64, 31, 104, 96};
    idleblock_src[1] = {64, 1276, 95, 96};
    idleblock_src[2] = {167, 1282, 91, 90};

    //crouchblock
    crouchblock_src[0] = {64, 31, 104, 96};
    crouchblock_src[1] = {49, 1052, 103, 90};
    crouchblock_src[2] = {160, 1071, 104, 71};
    crouchblock_src[3] = {272, 1080, 105, 62};
    crouchblock_src[4] = {115, 1405, 93, 68};

    //idlepunch
    idlepunch_src[0] = {64, 31, 104, 96};
    idlepunch_src[1] = {64, 1541, 103, 90};
    idlepunch_src[2] = {175, 1541, 103, 90};
    idlepunch_src[3] = {286, 1541, 103, 90};
    idlepunch_src[4] = {397, 1536, 129, 95};
    idlepunch_src[5] = {534, 1536, 129, 95};
    idlepunch_src[6] = {671, 1541, 103, 90};
    idlepunch_src[7] = {782, 1541, 103, 90};
    idlepunch_src[8] = {893, 1541, 103, 90};

    //idlekick
    idlekick_src[0] = {64, 31, 104, 96};
    idlekick_src[1] = {64, 1809, 87, 82};
    idlekick_src[2] = {159, 1794, 71, 97};
    idlekick_src[3] = {238, 1794, 75, 97};
    idlekick_src[4] = {321, 1825, 140, 66};
    idlekick_src[5] = {469, 1794, 71, 97};
    idlekick_src[6] = {548, 1809, 87, 82};

    //crouchkick
    crouchkick_src[0] = {64, 31, 104, 96};
    crouchkick_src[1] = {49, 1052, 103, 90};
    crouchkick_src[2] = {160, 1071, 104, 71};
    crouchkick_src[3] = {272, 1080, 105, 62};
    crouchkick_src[4] = {80, 2273, 100, 67};
    crouchkick_src[5] = {188, 2274, 140, 66};
    crouchkick_src[6] = {336, 2273, 100, 67};

    //crouchpunch
    crouchpunch_src[0] = {64, 31, 104, 96};
    crouchpunch_src[1] = {49, 1052, 103, 90};
    crouchpunch_src[2] = {160, 1071, 104, 71};
    crouchpunch_src[3] = {272, 1080, 105, 62};
    crouchpunch_src[4] = {64, 2037, 100, 68};
    crouchpunch_src[5] = {172, 2034, 102, 71};
    crouchpunch_src[6] = {282, 2034, 102, 71};
    crouchpunch_src[7] = {394, 2040, 130, 65};
    crouchpunch_src[8] = {530, 2040, 130, 65};
    crouchpunch_src[9] = {668, 2037, 100, 68};
    crouchpunch_src[10] = {776, 2037, 100, 68};

    //idlehit
    idlehit_src[0] = {64, 31, 104, 96};
    idlehit_src[1] = {47, 2518, 103, 103};
    idlehit_src[2] = {158, 2516, 92, 105};
    idlehit_src[3] = {258, 2517, 92, 104};
    idlehit_src[4] = {358, 2516, 92, 105};

    //crouchhit
    crouchhit_src[0] = {80, 2800, 105, 72};
    crouchhit_src[1] = {193, 2793, 100, 79};
    crouchhit_src[2] = {80, 2800, 105, 72};
    crouchhit_src[3] = {193, 2793, 100, 79};
    crouchhit_src[4] = {80, 2800, 105, 72};
    crouchhit_src[5] = {193, 2793, 100, 79};

    //knockdown
    knockdown_src[0] = {30, 3054, 101, 91};
    knockdown_src[1] = {139, 3052, 99, 93};
    knockdown_src[2] = {246, 3048, 103, 97};
    knockdown_src[3] = {357, 3052, 99, 93};
    knockdown_src[4] = {464, 3054, 101, 91};
    knockdown_src[5] = {573, 3052, 99, 93};
    knockdown_src[6] = {680, 3048, 103, 97};

    //KO
    KO_src[0] = {30, 3054, 101, 91};
    KO_src[1] = {139, 3052, 99, 93};
    KO_src[2] = {246, 3048, 103, 97};
    KO_src[3] = {357, 3052, 99, 93};
    KO_src[4] = {464, 3054, 101, 91};
    KO_src[5] = {573, 3052, 99, 93};
    KO_src[6] = {680, 3048, 103, 97};

    //victory
    victory_src[0] = {34, 3536, 104, 96};
    victory_src[1] = {146, 3531, 80, 101};
    victory_src[2] = {234, 3522, 59, 110};
    victory_src[3] = {306, 3531, 80, 101};

    //special1
    special1_src[0] = {64, 31, 104, 96};
    special1_src[1] = {47, 3795, 95, 96};
    special1_src[2] = {150, 3801, 95, 90};
    special1_src[3] = {253, 3809, 87, 82};
    special1_src[4] = {348, 3812, 149, 67};
    special1_src[5] = {505, 3798, 168, 47};
    special1_src[6] = {681, 3797, 172, 46};
    special1_src[7] = {861, 3807, 168, 47};
    special1_src[8] = {1037, 3799, 170, 44};
    special1_src[9] = {1215, 3806, 149, 67};
    special1_src[10] = {1372, 3801, 103, 90};

    //special2
    special2_src[0] = {64, 31, 104, 96};
    special2_src[1] = {34, 4051, 87, 82};
    special2_src[2] = {129, 4036, 71, 97};
    special2_src[3] = {208, 4034, 69, 99};
    special2_src[4] = {285, 4036, 75, 97};
    special2_src[5] = {368, 4067, 140, 66};
    special2_src[6] = {516, 4036, 71, 97};
    special2_src[7] = {595, 4051, 87, 82};
}

dictador::dictador(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/dictador.png");
    hitjump = Mix_LoadWAV("music/playerssound/dictador_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/dictador_lost.wav");
    special = Mix_LoadWAV("music/playerssound/dictador_special.wav");
    stun = Mix_LoadWAV("music/playerssound/dictador_stun.wav");

    playerwidth = 130;
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

void dictador::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void dictador::walkleft()
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

void dictador::walkright()
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

void dictador::jump()
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

void dictador::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void dictador::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void dictador::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void dictador::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void dictador::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void dictador::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void dictador::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void dictador::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void dictador::crouchhit()
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
    ratio_set(crouchhit_src, crouchhit_dst, crouchhit_frames, 130, 130);
}

void dictador::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void dictador::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
}

void dictador::victory()
{
    if (victory_flag == false)
    {
        reset_move(1, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void dictador::special1()
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

void dictador::special2()
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