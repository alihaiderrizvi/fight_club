#include "cammy.hpp"

cammy::cammy() {}
cammy::~cammy() {}

void cammy::rect_initializer()
{
    idle_frames = 5;
    walkleft_frames = 6;
    walkright_frames = 6;
    jump_frames = 6;
    crouch_frames = 2;
    block_frames = 2;
    idlepunch_frames = 3;
    idlekick_frames = 3;
    crouchkick_frames = 3;
    crouchpunch_frames = 3;
    idlehit_frames = 4;
    crouchhit_frames = 1;
    knockdown_frames = 11;
    KO_frames = 5;
    victory_frames = 5;

    idle_src = new SDL_Rect[5];
    idle_dst = new SDL_Rect[5];

    idle_src[0] = {5, 31, 47, 82};
    idle_src[1] = {59, 30, 47, 83};
    idle_src[2] = {111, 29, 47, 84};
    idle_src[3] = {164, 30, 47, 83};
    idle_src[4] = {217, 31, 47, 82};

    walkleft_src = new SDL_Rect[6];
    walkleft_dst = new SDL_Rect[6];

    walkleft_src[0] = {271, 26, 44, 87};
    walkleft_src[1] = {323, 31, 40, 82};
    walkleft_src[2] = {372, 29, 41, 84};
    walkleft_src[3] = {420, 26, 45, 87};
    walkleft_src[4] = {474, 31, 42, 82};
    walkleft_src[5] = {524, 29, 41, 84};

    walkright_src = new SDL_Rect[6];
    walkright_dst = new SDL_Rect[6];

    walkright_src[0] = {271, 26, 44, 87};
    walkright_src[1] = {323, 31, 40, 82};
    walkright_src[2] = {372, 29, 41, 84};
    walkright_src[3] = {420, 26, 45, 87};
    walkright_src[4] = {474, 31, 42, 82};
    walkright_src[5] = {524, 29, 41, 84};

    jump_src = new SDL_Rect[6];
    jump_dst = new SDL_Rect[6];

    jump_src[0] = {572, 39, 47, 74};
    jump_src[1] = {670, 12, 39, 101};
    jump_src[2] = {711, 25, 29, 70};
    jump_src[3] = {745, 33, 33, 48};
    jump_src[4] = {786, 18, 31, 78};
    jump_src[5] = {826, 9, 35, 104};

    crouch_src = new SDL_Rect[2];
    crouch_dst = new SDL_Rect[2];

    crouch_src[0] = {1268, 39, 47, 74};
    crouch_src[1] = {1320, 63, 43, 50};

    block_src = new SDL_Rect[2];
    block_dst = new SDL_Rect[2];

    block_src[0] = {1200, 137, 47, 81};
    block_src[1] = {1252, 168, 43, 52};

    idlepunch_src = new SDL_Rect[3];
    idlepunch_dst = new SDL_Rect[3];

    idlepunch_src[0] = {3, 134, 48, 84};
    idlepunch_src[1] = {58, 134, 70, 84};
    idlepunch_src[2] = {132, 134, 46, 84};

    idlekick_src = new SDL_Rect[3];
    idlekick_dst = new SDL_Rect[3];

    idlekick_src[0] = {7, 255, 51, 82};
    idlekick_src[1] = {63, 255, 60, 82};
    idlekick_src[2] = {129, 255, 51, 82};

    crouchkick_src = new SDL_Rect[3];
    crouchkick_dst = new SDL_Rect[3];

    crouchkick_src[0] = {650, 491, 47, 45};
    crouchkick_src[1] = {701, 491, 66, 45};
    crouchkick_src[2] = {771, 491, 47, 45};

    crouchpunch_src = new SDL_Rect[3];
    crouchpunch_dst = new SDL_Rect[3];

    crouchpunch_src[0] = {182, 487, 49, 50};
    crouchpunch_src[1] = {235, 490, 67, 46};
    crouchpunch_src[2] = {306, 487, 44, 49};

    idlehit_src = new SDL_Rect[4];
    idlehit_dst = new SDL_Rect[4];

    idlehit_src[0] = {408, 895, 47, 82};
    idlehit_src[1] = {464, 899, 48, 78};
    idlehit_src[2] = {517, 900, 55, 77};
    idlehit_src[3] = {579, 899, 48, 78};

    crouchhit_src = new SDL_Rect[1];
    crouchhit_dst = new SDL_Rect[1];

    crouchhit_src[0] = {866, 921, 44, 57};

    knockdown_src = new SDL_Rect[11];
    knockdown_dst = new SDL_Rect[11];

    knockdown_src[0] = {4, 1034, 51, 62};
    knockdown_src[1] = {59, 1039, 63, 52};
    knockdown_src[2] = {130, 1038, 64, 53};
    knockdown_src[3] = {198, 1073, 65, 29};
    knockdown_src[4] = {269, 1070, 73, 26};
    knockdown_src[5] = {345, 1050, 54, 52};
    knockdown_src[6] = {403, 1025, 42, 70};
    knockdown_src[7] = {450, 995, 41, 100};
    knockdown_src[8] = {495, 1025, 41, 69};
    knockdown_src[9] = {541, 1006, 33, 48};
    knockdown_src[10] = {585, 1020, 47, 74};

    KO_src = new SDL_Rect[5];
    KO_dst = new SDL_Rect[5];

    KO_src[0] = {646, 1025, 64, 64};
    KO_src[1] = {726, 1039, 75, 43};
    KO_src[2] = {805, 1075, 75, 22};
    KO_src[3] = {885, 1039, 75, 43};
    KO_src[4] = {965, 1075, 75, 22};

    victory_src = new SDL_Rect[5];
    victory_dst = new SDL_Rect[5];

    victory_src[0] = {4, 1123, 47, 81};
    victory_src[1] = {56, 1110, 47, 95};
    victory_src[2] = {108, 1122, 47, 82};
    victory_src[3] = {161, 1119, 47, 86};
    victory_src[4] = {213, 1119, 47, 85};
}

cammy::cammy(SDL_Renderer *renderer, bool opponent)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/cammy.png");
    opp_player = opponent;
    rect_initializer();
    if (!opp_player)
    {
        xpos = 0;
        ypos = 400;
    }
    else if (opp_player)
    {
        xpos = 700;
        ypos = 400;
    }
    frame_count = 0;
    frame_delay = 0;
    delay_time = 1;
    total_frames = 5;
}

void cammy::idle()
{
    if (idle_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = 5;

        false_all();
        idle_flag = true;
    }

    //Player::idle();
}

void cammy::walkleft()
{
    if (walkleft_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = 6;

        false_all();
        walkleft_flag = true;
    }
    else
    {
        if (xpos > 0)
        {
            xpos = xpos - 20;
        }
    }
    //Player::walk();
}

void cammy::walkright()
{
    if (walkright_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = 6;

        false_all();
        walkright_flag = true;
    }
    else
    {
        if (xpos < 700)
        {
            xpos = xpos + 20;
        }
    }
    //Player::walk();
}

void cammy::jump()
{
    if (jump_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 5;
        total_frames = 6;

        false_all();
        jump_flag = true;
        move_continue = true;
    }
    else
    {
        if (frame_delay % delay_time == 0)
        {
            switch (frame_count)
            {
            case 0:
                ypos -= 20;
                break;
            case 1:
                ypos -= 30;
                break;
            case 2:
                ypos -= 40;
                break;
            case 3:
                ypos += 20;
                break;
            case 4:
                ypos += 30;
                break;
            case 5:
                ypos += 40;
                break;
            }
        }
        //Player::jump();
        if (frame_count == jump_frames - 1)
        {
            move_continue = false;
        }
    }
}

void cammy::crouch()
{
    ratio_set(crouch_src, crouch_dst, 2);
    Player::crouch();
}

void cammy::block()
{
    if (block_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 2;
        total_frames = 2;

        false_all();
        block_flag = true;
        move_continue = true;
    }
    else
    {
    }

    //Player::block();
}

void cammy::idlepunch()
{
    ratio_set(idlepunch_src, idlepunch_dst, 5);
    Player::idlepunch();
}

void cammy::idlekick()
{
    ratio_set(idlekick_src, idlekick_dst, 5);
    Player::idlekick();
}

void cammy::crouchpunch()
{
    ratio_set(crouchpunch_src, crouchpunch_dst, 5);
    Player::crouchpunch();
}

void cammy::crouchkick()
{
    ratio_set(crouchkick_src, crouchkick_dst, 5);
    Player::crouchkick();
}

void cammy::idlehit()
{
    ratio_set(idlehit_src, idlehit_dst, 5);
    Player::idlehit();
}

void cammy::crouchhit()
{
    ratio_set(crouchhit_src, crouchhit_dst, 5);
    Player::crouchhit();
}

void cammy::knockdown()
{
    ratio_set(knockdown_src, knockdown_dst, 5);
    Player::knockdown();
}

void cammy::KO()
{
    ratio_set(KO_src, KO_dst, 5);
    Player::KO();
}

void cammy::victory()
{
    ratio_set(victory_src, victory_dst, 5);
    Player::victory();
}