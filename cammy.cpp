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
    idleblock_frames = 3;
    crouchblock_frames = 3;
    idlepunch_frames = 3;
    idlekick_frames = 9;
    crouchkick_frames = 4;
    crouchpunch_frames = 4;
    idlehit_frames = 5;
    crouchhit_frames = 5;
    knockdown_frames = 11;
    KO_frames = 4;
    victory_frames = 11;
    special1_frames = 11;
    special2_frames = 11;

    idle_src = new SDL_Rect[idle_frames];
    idle_dst = new SDL_Rect[idle_frames];

    idle_src[0] = {0, 1, 71, 94};
    idle_src[1] = {78, 2, 72, 93};
    idle_src[2] = {156, 3, 72, 92};
    idle_src[3] = {234, 2, 72, 93};
    idle_src[4] = {312, 1, 71, 94};
    idle_src[5] = {390, 2, 72, 93};
    idle_src[6] = {469, 3, 70, 92};
    idle_src[7] = {545, 2, 72, 93};

    walkleft_src = new SDL_Rect[walkleft_frames];
    walkleft_dst = new SDL_Rect[walkleft_frames];

    walkleft_src[0] = {0, 261, 68, 99};
    walkleft_src[1] = {69, 259, 68, 96};
    walkleft_src[2] = {138, 262, 68, 101};
    walkleft_src[3] = {209, 266, 49, 98};
    walkleft_src[4] = {273, 267, 42, 97};
    walkleft_src[5] = {323, 266, 49, 100};
    walkleft_src[6] = {378, 260, 68, 98};
    walkleft_src[7] = {446, 259, 68, 99};
    walkleft_src[8] = {515, 262, 73, 101};
    walkleft_src[9] = {591, 266, 55, 98};
    walkleft_src[10] = {656, 267, 46, 95};
    walkleft_src[11] = {706, 266, 49, 95};

    walkright_src = new SDL_Rect[walkright_frames];
    walkright_dst = new SDL_Rect[walkright_frames];

    walkright_src[0] = {2, 515, 72, 97};
    walkright_src[1] = {75, 514, 72, 94};
    walkright_src[2] = {148, 517, 72, 99};
    walkright_src[3] = {221, 521, 64, 96};
    walkright_src[4] = {292, 523, 46, 94};
    walkright_src[5] = {343, 521, 64, 98};
    walkright_src[6] = {408, 515, 72, 96};
    walkright_src[7] = {481, 514, 72, 97};
    walkright_src[8] = {554, 517, 73, 99};
    walkright_src[9] = {628, 521, 64, 96};
    walkright_src[10] = {694, 523, 51, 92};
    walkright_src[11] = {750, 521, 64, 93};

    jump_src = new SDL_Rect[jump_frames];
    jump_dst = new SDL_Rect[jump_frames];

    jump_src[0] = {16, 844, 57, 117};
    jump_src[1] = {75, 810, 45, 82};
    jump_src[2] = {132, 798, 49, 66};
    jump_src[3] = {193, 789, 58, 55};
    jump_src[4] = {257, 781, 54, 66};
    jump_src[5] = {318, 762, 53, 94};
    jump_src[6] = {382, 764, 57, 121};

    crouch_src = new SDL_Rect[crouch_frames];
    crouch_dst = new SDL_Rect[crouch_frames];

    crouch_src[0] = {0, 1008, 66, 83};
    crouch_src[1] = {67, 1023, 61, 67};
    crouch_src[2] = {129, 1034, 64, 57};

    idleblock_src = new SDL_Rect[idleblock_frames];
    idleblock_dst = new SDL_Rect[idleblock_frames];

    idleblock_src[0] = {9, 1268, 63, 92};
    idleblock_src[1] = {84, 1269, 63, 91};
    idleblock_src[2] = {163, 1268, 63, 92};

    crouchblock_src = new SDL_Rect[crouchblock_frames];
    crouchblock_dst = new SDL_Rect[crouchblock_frames];

    crouchblock_src[0] = {9, 1414, 62, 57};
    crouchblock_src[1] = {81, 1413, 63, 59};
    crouchblock_src[2] = {155, 1414, 62, 57};

    idlepunch_src = new SDL_Rect[idlepunch_frames];
    idlepunch_dst = new SDL_Rect[idlepunch_frames];

    idlepunch_src[0] = {0, 1511, 69, 94};
    idlepunch_src[1] = {78, 1511, 80, 94};
    idlepunch_src[2] = {163, 1511, 107, 94};

    idlekick_src = new SDL_Rect[idlekick_frames];
    idlekick_dst = new SDL_Rect[idlekick_frames];

    idlekick_src[0] = {0, 1767, 69, 90};
    idlekick_src[1] = {70, 1764, 57, 93};
    idlekick_src[2] = {128, 1766, 71, 91};
    idlekick_src[3] = {200, 1764, 57, 93};
    idlekick_src[4] = {258, 1766, 52, 91};
    idlekick_src[5] = {351, 1768, 55, 90};
    idlekick_src[6] = {438, 1767, 102, 91};
    idlekick_src[7] = {541, 1767, 52, 91};
    idlekick_src[8] = {594, 1776, 66, 84};

    crouchkick_src = new SDL_Rect[crouchkick_frames];
    crouchkick_dst = new SDL_Rect[crouchkick_frames];

    crouchkick_src[0] = {9, 2270, 67, 51};
    crouchkick_src[1] = {85, 2270, 97, 51};
    crouchkick_src[2] = {186, 2270, 67, 51};
    crouchkick_src[3] = {254, 2267, 68, 55};

    crouchpunch_src = new SDL_Rect[crouchpunch_frames];
    crouchpunch_dst = new SDL_Rect[crouchpunch_frames];

    crouchpunch_src[0] = {4, 2007, 73, 57};
    crouchpunch_src[1] = {78, 2007, 73, 57};
    crouchpunch_src[2] = {156, 2007, 65, 57};
    crouchpunch_src[3] = {229, 2011, 105, 53};

    idlehit_src = new SDL_Rect[idlehit_frames];
    idlehit_dst = new SDL_Rect[idlehit_frames];

    idlehit_src[0] = {14, 2520, 72, 91};
    idlehit_src[1] = {96, 2523, 82, 89};
    idlehit_src[2] = {179, 2525, 96, 86};
    idlehit_src[3] = {289, 2523, 82, 89};
    idlehit_src[4] = {374, 2520, 72, 91};

    crouchhit_src = new SDL_Rect[crouchhit_frames];
    crouchhit_dst = new SDL_Rect[crouchhit_frames];

    crouchhit_src[0] = {9, 2771, 66, 65};
    crouchhit_src[1] = {81, 2776, 83, 60};
    crouchhit_src[2] = {170, 2776, 95, 60};
    crouchhit_src[3] = {271, 2776, 83, 60};
    crouchhit_src[4] = {359, 2771, 66, 65};

    knockdown_src = new SDL_Rect[knockdown_frames];
    knockdown_dst = new SDL_Rect[knockdown_frames];

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

    KO_src = new SDL_Rect[KO_frames];
    KO_dst = new SDL_Rect[KO_frames];

    KO_src[0] = {12, 3017, 62, 88};
    KO_src[1] = {75, 3016, 65, 89};
    KO_src[2] = {147, 3017, 66, 88};
    KO_src[3] = {214, 3016, 65, 89};

    victory_src = new SDL_Rect[victory_frames];
    victory_dst = new SDL_Rect[victory_frames];

    victory_src[0] = {12, 3536, 73, 93};
    victory_src[1] = {92, 3523, 64, 107};
    victory_src[2] = {162, 3537, 68, 92};
    victory_src[3] = {235, 3534, 67, 95};
    victory_src[4] = {303, 3534, 67, 95};
    victory_src[5] = {371, 3534, 42, 95};
    victory_src[6] = {414, 3533, 43, 96};
    victory_src[7] = {458, 3533, 52, 96};
    victory_src[8] = {511, 3537, 61, 92};
    victory_src[9] = {573, 3530, 54, 99};
    victory_src[10] = {628, 3531, 58, 98};

    special1_src = new SDL_Rect[special1_frames];
    special1_dst = new SDL_Rect[special1_frames];

    special1_src[0] = {12, 3536, 73, 93};
    special1_src[1] = {92, 3523, 64, 107};
    special1_src[2] = {162, 3537, 68, 92};
    special1_src[3] = {235, 3534, 67, 95};
    special1_src[4] = {303, 3534, 67, 95};
    special1_src[5] = {371, 3534, 42, 95};
    special1_src[6] = {414, 3533, 43, 96};
    special1_src[7] = {458, 3533, 52, 96};
    special1_src[8] = {511, 3537, 61, 92};
    special1_src[9] = {573, 3530, 54, 99};
    special1_src[10] = {628, 3531, 58, 98};

    special2_src = new SDL_Rect[special2_frames];
    special2_dst = new SDL_Rect[special2_frames];

    special2_src[0] = {12, 3536, 73, 93};
    special2_src[1] = {92, 3523, 64, 107};
    special2_src[2] = {162, 3537, 68, 92};
    special2_src[3] = {235, 3534, 67, 95};
    special2_src[4] = {303, 3534, 67, 95};
    special2_src[5] = {371, 3534, 42, 95};
    special2_src[6] = {414, 3533, 43, 96};
    special2_src[7] = {458, 3533, 52, 96};
    special2_src[8] = {511, 3537, 61, 92};
    special2_src[9] = {573, 3530, 54, 99};
    special2_src[10] = {628, 3531, 58, 98};
}

cammy::cammy(SDL_Renderer *renderer, bool opponent, int vol)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/cammy.png");
    opp_player = opponent;
    rect_initializer();

    hitjump = Mix_LoadWAV("music/playerssound/cammy_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/cammy_lost.wav");
    special = Mix_LoadWAV("music/playerssound/cammy_special.wav");
    stun = Mix_LoadWAV("music/playerssound/cammy_stun.wav");
    setvolume(vol);

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
        move_continue = false;
        move_loop = true;
        move_bound = false;
        src = idle_src, dst = idle_dst;
        idle_flag = true;
    }
    else
    {
    }
    ratio_set(src, dst, idle_frames);
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
        move_continue = false;
        move_loop = true;
        move_bound = false;
        src = walkleft_src, dst = walkleft_dst;
        walkleft_flag = true;
    }
    else
    {
        if (xpos > 0)
        {
            xpos = xpos - 20;
        }
    }
    ratio_set(src, dst, walkleft_frames);
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
        move_continue = false;
        move_loop = true;
        move_bound = false;
        src = walkright_src, dst = walkright_dst;
        walkright_flag = true;
    }
    else
    {
        if (xpos < 700)
        {
            xpos = xpos + 20;
        }
    }
    ratio_set(src, dst, walkright_frames);
}

void cammy::jump()
{
    if (jump_flag == false)
    {
        Mix_PlayChannel(-1, hitjump, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = jump_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = jump_src, dst = jump_dst;
        jump_flag = true;
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
                break;
            case 4:
                ypos += 40;
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
    ratio_set(src, dst, jump_frames);
}

void cammy::crouch()
{
    if (crouch_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = crouch_frames;

        false_all();
        move_continue = false;
        move_loop = false;
        move_bound = true;
        src = crouch_src, dst = crouch_dst;
        crouch_flag = true;
    }
    else
    {
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames);
}

void cammy::idleblock()
{
    if (idleblock_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = idleblock_frames;

        false_all();
        move_continue = false;
        move_loop = false;
        move_bound = true;
        src = idleblock_src, dst = idleblock_dst;
        idleblock_flag = true;
    }
    else
    {
    }
    ratio_set(src, dst, idleblock_frames);
}

void cammy::crouchblock()
{
    if (crouchblock_flag == false)
    {
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = crouchblock_frames;

        false_all();
        move_continue = false;
        move_loop = false;
        move_bound = true;
        src = crouchblock_src, dst = crouchblock_dst;
        crouchblock_flag = true;
    }
    else
    {
    }
    ratio_set(src, dst, crouchblock_frames);
}

void cammy::idlepunch()
{
    if (idlepunch_flag == false)
    {
        Mix_PlayChannel(-1, hitjump, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = idlepunch_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = idlepunch_src, dst = idlepunch_dst;
        idlepunch_flag = true;
    }
    else
    {
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames);
}

void cammy::idlekick()
{
    if (idlekick_flag == false)
    {
        Mix_PlayChannel(-1, hitjump, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = idlekick_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = idlekick_src, dst = idlekick_dst;
        idlekick_flag = true;
    }
    else
    {
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames);
}

void cammy::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        Mix_PlayChannel(-1, hitjump, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = crouchpunch_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = crouchpunch_src, dst = crouchpunch_dst;
        crouchpunch_flag = true;
    }
    else
    {
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames);
}

void cammy::crouchkick()
{
    if (crouchkick_flag == false)
    {
        Mix_PlayChannel(-1, hitjump, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = crouchkick_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = crouchkick_src, dst = crouchkick_dst;
        crouchkick_flag = true;
    }
    else
    {
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames);
}

void cammy::idlehit()
{
    if (idlehit_flag == false)
    {
        Mix_PlayChannel(-1, stun, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = idlehit_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = idlehit_src, dst = idlehit_dst;
        idlehit_flag = true;
    }
    else
    {
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames);
}

void cammy::crouchhit()
{
    if (crouchhit_flag == false)
    {
        Mix_PlayChannel(-1, stun, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = crouchhit_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = crouchhit_src, dst = crouchhit_dst;
        crouchhit_flag = true;
    }
    else
    {
    }
    ratio_set(crouchhit_src, crouchhit_dst, crouchhit_frames);
}

void cammy::knockdown()
{
    if (knockdown_flag == false)
    {
        Mix_PlayChannel(-1, stun, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = knockdown_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = knockdown_src, dst = knockdown_dst;
        knockdown_flag = true;
    }
    else
    {
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames);
}

void cammy::KO()
{
    if (KO_flag == false)
    {
        Mix_PlayChannel(-1, lost, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = KO_frames;

        false_all();
        move_continue = false;
        move_loop = true;
        move_bound = false;
        src = KO_src, dst = KO_dst;
        KO_flag = true;
    }
    else
    {
    }
    ratio_set(src, dst, KO_frames);
}

void cammy::victory()
{
    if (victory_flag == false)
    {
        Mix_PlayChannel(-1, special, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = victory_frames;

        false_all();
        move_continue = false;
        move_loop = true;
        move_bound = false;
        src = victory_src, dst = victory_dst;
        victory_flag = true;
    }
    else
    {
    }
    ratio_set(src, dst, victory_frames);
}

void cammy::special1()
{
    if (special1_flag == false)
    {
        Mix_PlayChannel(-1, special, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = special1_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = special1_src, dst = special1_dst;
        special1_flag = true;
    }
    else
    {
    }
    ratio_set(special1_src, special1_dst, special1_frames);
}

void cammy::special2()
{
    if (special2_flag == false)
    {
        Mix_PlayChannel(-1, special, 0);
        frame_count = 0;
        frame_delay = 0;
        delay_time = 1;
        total_frames = special2_frames;

        false_all();
        move_continue = true;
        move_loop = false;
        move_bound = false;
        src = special2_src, dst = special2_dst;
        special2_flag = true;
    }
    else
    {
    }
    ratio_set(special2_src, special2_dst, special2_frames);
}