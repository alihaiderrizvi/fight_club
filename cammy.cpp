#include "cammy.hpp"

cammy::cammy() {}
cammy::~cammy() {}

void cammy::rect_initializer()
{
    idle_frames = 8;
    walkleft_frames = 12;
    walkright_frames = 12;
    jump_frames = 7;
    crouch_frames = 3;
    block_frames = 3;
    idlepunch_frames = 3;
    idlekick_frames = 9;
    crouchkick_frames = 4;
    crouchpunch_frames = 4;
    idlehit_frames = 5;
    crouchhit_frames = 5;
    knockdown_frames = 17;
    KO_frames = 4;
    victory_frames = 11;

    idle_src = new SDL_Rect[11];
    idle_dst = new SDL_Rect[11];

    idle_src[0] = {0,1,71,94};
    idle_src[1] = {78,2,72,93};
    idle_src[2] = {156,3,72,92};
    idle_src[3] = {234,2,72,93};
    idle_src[4] = {312,1,71,94};
    idle_src[5] = {390,2,72,93};
    idle_src[6] = {469,3,70,92};
    idle_src[7] = {545,2,72,93};
    idle_src[8] = {618,2,69,93};
    idle_src[9] = {688,0,68,95};
    idle_src[10] = {757,2,69,93};

    walkleft_src = new SDL_Rect[12];
    walkleft_dst = new SDL_Rect[12];

    walkleft_src[0] = {0,261,68,99};
    walkleft_src[1] = {69,259,68,96};
    walkleft_src[2] = {138,262,68,101};
    walkleft_src[3] = {209,266,49,98};
    walkleft_src[4] = {273,267,42,97};
    walkleft_src[5] = {323,266,49,100};
    walkleft_src[6] = {378,260,68,98};
    walkleft_src[7] = {446,259,68,99};
    walkleft_src[8] = {515,262,73,101};
    walkleft_src[9] = {591,266,55,98};
    walkleft_src[10] = {656,267,46,95};
    walkleft_src[11] = {706,266,49,95};

    walkright_src = new SDL_Rect[12];
    walkright_dst = new SDL_Rect[12];

    walkright_src[0] = {2,515,72,97};
    walkright_src[1] = {75,514,72,94};
    walkright_src[2] = {148,517,72,99};
    walkright_src[3] = {221,521,64,96};
    walkright_src[4] = {292,523,46,94};
    walkright_src[5] = {343,521,64,98};
    walkright_src[6] = {408,515,72,96};
    walkright_src[7] = {481,514,72,97};
    walkright_src[8] = {554,517,73,99};
    walkright_src[9] = {628,521,64,96};
    walkright_src[10] = {694,523,51,92};
    walkright_src[11] = {750,521,64,93};

    jump_src = new SDL_Rect[7];
    jump_dst = new SDL_Rect[7];

    jump_src[0] = {16,844,57,117};
    jump_src[1] = {75,810,45,82};
    jump_src[2] = {132,798,49,66};
    jump_src[3] = {193,789,58,55};
    jump_src[4] = {257,781,54,66};
    jump_src[5] = {318,762,53,94};
    jump_src[6] = {382,764,57,121};

    crouch_src = new SDL_Rect[3];
    crouch_dst = new SDL_Rect[3];

    crouch_src[0] = {0,1008,66,83};
    crouch_src[1] = {67,1023,61,67};
    crouch_src[2] = {129,1034,64,57};

    block_src = new SDL_Rect[3];
    block_dst = new SDL_Rect[3];

    block_src[0] = {9,1268,63,92};
    block_src[1] = {84,1269,63,91};
    block_src[2] = {163,1268,63,92};
    
    //crouch block not added in moves
    crouchblock_src = new SDL_Rect[3];
    crouchblock_dst = new SDL_Rect[3];

    crouchblock_src[0] = {9,1414,62,57};
    crouchblock_src[1] = {81,1413,63,59};
    crouchblock_src[2] = {155,1414,62,57};

    idlepunch_src = new SDL_Rect[3];
    idlepunch_dst = new SDL_Rect[3];

    idlepunch_src[0] = {0,1511,69,94};
    idlepunch_src[1] = {78,1511,80,94};
    idlepunch_src[2] = {163,1511,107,94};

    idlekick_src = new SDL_Rect[9];
    idlekick_dst = new SDL_Rect[9];

    idlekick_src[0] = {0,1767,69,90};
    idlekick_src[1] = {70,1764,57,93};
    idlekick_src[2] = {128,1766,71,91};
    idlekick_src[3] = {200,1764,57,93};
    idlekick_src[4] = {258,1766,52,91};
    idlekick_src[5] = {351,1768,55,90};
    idlekick_src[6] = {438,1767,102,91};
    idlekick_src[7] = {541,1767,52,91};
    idlekick_src[8] = {594,1776,66,84};

    crouchkick_src = new SDL_Rect[4];
    crouchkick_dst = new SDL_Rect[4];

    crouchkick_src[0] = {9,2270,67,51};
    crouchkick_src[1] = {85,2270,97,51};
    crouchkick_src[2] = {186,2270,67,51};
    crouchkick_src[3] = {254,2267,68,55};

    crouchpunch_src = new SDL_Rect[4];
    crouchpunch_dst = new SDL_Rect[4];

    crouchpunch_src[0] = {4,2007,73,57};
    crouchpunch_src[1] = {78,2007,73,57};
    crouchpunch_src[2] = {156,2007,65,57};
    crouchpunch_src[3] = {229,2011,105,53};

    idlehit_src = new SDL_Rect[5];
    idlehit_dst = new SDL_Rect[5];

    idlehit_src[0] = {14,2520,72,91};
    idlehit_src[1] = {96,2523,82,89};
    idlehit_src[2] = {179,2525,96,86};
    idlehit_src[3] = {289,2523,82,89};
    idlehit_src[4] = {374,2520,72,91};

    crouchhit_src = new SDL_Rect[5];
    crouchhit_dst = new SDL_Rect[5];

    crouchhit_src[0] = {9,2771,66,65};
    crouchhit_src[1] = {81,2776,83,60};
    crouchhit_src[2] = {170,2776,95,60};
    crouchhit_src[3] = {271,2776,83,60};
    crouchhit_src[4] = {359,2771,66,65};

    knockdown_src = new SDL_Rect[11];
    knockdown_dst = new SDL_Rect[11];
    //todo
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

    KO_src = new SDL_Rect[4];
    KO_dst = new SDL_Rect[4];

    KO_src[0] = {12,3017,62,88};
    KO_src[1] = {75,3016,65,89};
    KO_src[2] = {147,3017,66,88};
    KO_src[3] = {214,3016,65,89};

    victory_src = new SDL_Rect[11];
    victory_dst = new SDL_Rect[11];

    victory_src[0] = {12,3536,73,93};
    victory_src[1] = {92,3523,64,107};
    victory_src[2] = {162,3537,68,92};
    victory_src[3] = {235,3534,67,95};
    victory_src[4] = {303,3534,67,95};
    victory_src[5] = {371,3534,42,95};
    victory_src[6] = {414,3533,43,96};
    victory_src[7] = {458,3533,52,96};
    victory_src[8] = {511,3537,61,92};
    victory_src[9] = {573,3530,54,99};
    victory_src[10] = {628,3531,58,98};
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
        total_frames = idle_frames;

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
        total_frames = walkleft_frames;

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
        total_frames = walkright_frames;

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
        total_frames = jump_frames;

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
        total_frames = block_frames;

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