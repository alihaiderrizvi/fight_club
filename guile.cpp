#include "guile.hpp"

guile::guile() {}
guile::~guile() {}

void guile::rect_initializer()
{

    idle_frames = 5;
    walkleft_frames = 6;
    walkright_frames = 6;
    jump_frames = 9;
    crouch_frames = 4;
    idleblock_frames = 3;
    crouchblock_frames = 6;
    idlepunch_frames = 5;
    idlekick_frames = 5;
    crouchkick_frames = 8;
    crouchpunch_frames = 8;
    idlehit_frames = 5;
    crouchhit_frames = 4;
    knockdown_frames = 3;
    KO_frames = 3;
    victory_frames = 5;
    special1_frames = 7;
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
    idle_src[0] = {55, 44, 59, 91};
    idle_src[1] = {142, 45, 60, 90};
    idle_src[2] = {232, 44, 60, 91};
    idle_src[3] = {327, 41, 56, 94};
    idle_src[4] = {415, 42, 58, 92};

    //walkleft
    walkleft_src[0] = {55, 302, 61, 88};
    walkleft_src[1] = {141, 300, 60, 91};
    walkleft_src[2] = {226, 299, 57, 91};
    walkleft_src[3] = {310, 298, 58, 91};
    walkleft_src[4] = {396, 299, 58, 91};
    walkleft_src[5] = {486, 299, 58, 91};

    //walkright
    walkright_src[0] = {55, 548, 53, 83};
    walkright_src[1] = {124, 543, 60, 88};
    walkright_src[2] = {208, 539, 64, 93};
    walkright_src[3] = {305, 539, 64, 91};
    walkright_src[4] = {398, 540, 54, 91};
    walkright_src[5] = {478, 542, 51, 91};

    //jump
    jump_src[0] = {55, 44, 59, 91};
    jump_src[1] = {55, 845, 55, 85};
    jump_src[2] = {138, 821, 56, 104};
    jump_src[3] = {214, 803, 50, 89};
    jump_src[4] = {289, 796, 54, 77};
    jump_src[5] = {365, 811, 48, 70};
    jump_src[6] = {289, 796, 54, 77};
    jump_src[7] = {214, 803, 50, 89};
    jump_src[8] = {138, 821, 56, 104};

    //crouch
    crouch_src[0] = {55, 44, 59, 91};
    crouch_src[1] = {80, 1043, 53, 83};
    crouch_src[2] = {163, 1058, 57, 69};
    crouch_src[3] = {245, 1066, 61, 61};

    //idleblock
    idleblock_src[0] = {55, 44, 59, 91};
    idleblock_src[1] = {55, 1278, 63, 93};
    idleblock_src[2] = {137, 1277, 64, 94};

    //crouchblock
    crouchblock_src[0] = {55, 44, 59, 91};
    crouchblock_src[1] = {80, 1043, 53, 83};
    crouchblock_src[2] = {163, 1058, 57, 69};
    crouchblock_src[3] = {245, 1066, 61, 61};
    crouchblock_src[4] = {80, 1392, 55, 61};
    crouchblock_src[5] = {160, 1389, 58, 64};

    //idlepunch
    idlepunch_src[0] = {55, 44, 59, 91};
    idlepunch_src[1] = {19, 1551, 60, 94};
    idlepunch_src[2] = {99, 1550, 74, 95};
    idlepunch_src[3] = {198, 1550, 108, 95};
    idlepunch_src[4] = {99, 1550, 74, 95};

    //idlekick
    idlekick_src[0] = {55, 44, 59, 91};
    idlekick_src[1] = {19, 1551, 60, 94};
    idlekick_src[2] = {115, 1795, 49, 95};
    idlekick_src[3] = {186, 1795, 81, 95};
    idlekick_src[4] = {115, 1795, 49, 95};

    //crouchkick
    crouchkick_src[0] = {55, 44, 59, 91};
    crouchkick_src[1] = {80, 1043, 53, 83};
    crouchkick_src[2] = {163, 1058, 57, 69};
    crouchkick_src[3] = {245, 1066, 61, 61};
    crouchkick_src[4] = {39, 2277, 70, 64};
    crouchkick_src[5] = {138, 2282, 97, 61};
    crouchkick_src[6] = {254, 2287, 146, 54};
    crouchkick_src[7] = {138, 2282, 97, 61};

    //crouchpunch
    crouchpunch_src[0] = {55, 44, 59, 91};
    crouchpunch_src[1] = {80, 1043, 53, 83};
    crouchpunch_src[2] = {163, 1058, 57, 69};
    crouchpunch_src[3] = {245, 1066, 61, 61};
    crouchpunch_src[4] = {28, 2033, 65, 62};
    crouchpunch_src[5] = {123, 2033, 66, 62};
    crouchpunch_src[6] = {213, 2032, 93, 63};
    crouchpunch_src[7] = {123, 2033, 66, 62};

    //idlehit
    idlehit_src[0] = {55, 44, 59, 91};
    idlehit_src[1] = {41, 2532, 64, 91};
    idlehit_src[2] = {132, 2532, 69, 91};
    idlehit_src[3] = {222, 2532, 73, 88};
    idlehit_src[4] = {132, 2532, 69, 91};

    //crouchhit
    crouchhit_src[0] = {67, 2794, 65, 65};
    crouchhit_src[1] = {151, 2794, 67, 67};
    crouchhit_src[2] = {67, 2794, 65, 65};
    crouchhit_src[3] = {151, 2794, 67, 67};

    //knockdown
    knockdown_src[0] = {53, 3026, 67, 90};
    knockdown_src[1] = {143, 3026, 65, 90};
    knockdown_src[2] = {223, 3029, 78, 87};

    //KO
    KO_src[0] = {53, 3026, 67, 90};
    KO_src[1] = {143, 3026, 65, 90};
    KO_src[2] = {223, 3029, 78, 87};

    //victory
    victory_src[0] = {117, 3555, 60, 89};
    victory_src[1] = {204, 3546, 61, 98};
    victory_src[2] = {289, 3520, 55, 124};
    victory_src[3] = {204, 3546, 61, 98};
    victory_src[4] = {117, 3555, 60, 89};

    //special1
    special1_src[0] = {55, 44, 59, 91};
    special1_src[1] = {42, 3809, 74, 90};
    special1_src[2] = {143, 3814, 85, 85};
    special1_src[3] = {251, 3815, 91, 85};
    special1_src[4] = {143, 3814, 85, 85};
    special1_src[5] = {251, 3815, 91, 85};
    special1_src[6] = {365, 3821, 119, 79};

    //special2
    special2_src[0] = {55, 44, 59, 91};
    special2_src[1] = {23, 4059, 62, 88};
    special2_src[2] = {110, 4058, 68, 90};
    special2_src[3] = {200, 4020, 59, 125};
    special2_src[4] = {290, 4020, 54, 119};
    special2_src[5] = {374, 4020, 49, 117};
    special2_src[6] = {453, 4041, 59, 106};
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
    ratio_set(src, dst, walkleft_frames, playerwidth, playerheight);
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
    ratio_set(src, dst, walkright_frames, playerwidth - 20, playerheight);
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
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void guile::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
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