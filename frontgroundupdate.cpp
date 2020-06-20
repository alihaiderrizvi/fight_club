#include "frontgroundupdate.hpp"

frontground::frontground(SDL_Window *iWindow, SDL_Renderer *iRenderer)
{
    gWindow = iWindow;
    gRenderer = iRenderer;
    assets = loadTexture("ingame/ingameassets.png");

    p1rectdst = {0, 0, 105, 95};
    p2rectdst = {695, 0, 105, 95};

    timerectdst = {360, 50, 80, 50};
    timerectsrc = {780, 713, 110, 70};

    returntohomedst = {365, 0, 70, 50};
    returntohomesrc = {780, 615, 110, 93};

    exittomainmenudst = {200, 200, 400, 200};

    p1lifedstrect = {108, 10, 255, 40};
    p1lifesrcrect = {406, 1088, 400, 50};

    p1powerdstrect = {108, 52, 255, 40};
    p1powersrcrect = {406, 1145, 400, 50};

    p2lifedstrect = {440, 10, 255, 40};
    p2lifesrcrect = {406, 1088, 400, 50};

    p2powerdstrect = {440, 52, 255, 40};
    p2powersrcrect = {406, 1145, 400, 50};

    playerlifesrcbar = {809, 1102, 382, 24};
    playerpowersrcbar = {809, 1161, 381, 23};

    gameoversrc = {1203, 0, 396, 398};
    gamewinsrc = {1203, 397, 396, 398};
    gamelosesrc = {1203, 795, 396, 398};

    gameresultdst = {230, 130, 370, 300};
}

void frontground::reset_frontground()
{
    exit_mainmenu_screen = true;
    exit_mainmenu_yes_screen = false;
    exit_mainmenu_no_screen = false;

    game_paused = false;
    exited = false;
    game_over = false;

    p1 = 1;
    p2 = 1;

    timecount = 1;
    timecountdelay = 0;
    tfx = 0;
    tfy = 276;
    game_over = false;
    exit_count = 0;
}

frontground::~frontground()
{
}

void frontground::setplayerrect(int p1_, int p2_)
{
    p1 = p1_;
    p2 = p2_;

    switch (p1)
    {
    case 1:
        p1rectsrc = {0, 0, 130, 120};
        break;
    case 2:
        p1rectsrc = {145, 0, 130, 120};
        break;
    case 3:
        p1rectsrc = {290, 0, 130, 120};
        break;
    case 4:
        p1rectsrc = {435, 0, 130, 120};
        break;
    case 5:
        p1rectsrc = {580, 0, 130, 120};
        break;
    case 6:
        p1rectsrc = {0, 135, 130, 120};
        break;
    case 7:
        p1rectsrc = {145, 135, 130, 120};
        break;
    case 8:
        p1rectsrc = {290, 135, 130, 120};
        break;
    case 9:
        p1rectsrc = {435, 135, 130, 120};
        break;
    case 10:
        p1rectsrc = {580, 135, 130, 120};
        break;
    }

    switch (p2)
    {
    case 1:
        p2rectsrc = {0, 0, 130, 120};
        break;
    case 2:
        p2rectsrc = {145, 0, 130, 120};
        break;
    case 3:
        p2rectsrc = {290, 0, 130, 120};
        break;
    case 4:
        p2rectsrc = {435, 0, 130, 120};
        break;
    case 5:
        p2rectsrc = {580, 0, 130, 120};
        break;
    case 6:
        p2rectsrc = {0, 135, 130, 120};
        break;
    case 7:
        p2rectsrc = {145, 135, 130, 120};
        break;
    case 8:
        p2rectsrc = {290, 135, 130, 120};
        break;
    case 9:
        p2rectsrc = {435, 135, 130, 120};
        break;
    case 10:
        p2rectsrc = {580, 135, 130, 120};
        break;
    }
}

void frontground::drawplayerrect()
{
    draw(gRenderer, p1rectsrc, p1rectdst, flip_horizontal);
    draw(gRenderer, p2rectsrc, p2rectdst, flip_none);
}

void frontground::drawplayerlifepowerrect()
{
    draw(gRenderer, p1lifesrcrect, p1lifedstrect, flip_none);
    draw(gRenderer, p1powersrcrect, p1powerdstrect, flip_none);
    draw(gRenderer, p2lifesrcrect, p2lifedstrect, flip_none);
    draw(gRenderer, p2powersrcrect, p2powerdstrect, flip_none);
}

void frontground::drawplayer1life(int p1_life)
{
    p1lifedstbar = {113, 20, 244 * ((float)p1_life / 50), 21};
    draw(gRenderer, playerlifesrcbar, p1lifedstbar, flip_none);
}
void frontground::drawplayer1power(int p1_power)
{
    p1powerdstbar = {113, 64, 244 * ((float)p1_power / 50), 21};
    draw(gRenderer, playerpowersrcbar, p1powerdstbar, flip_none);
}
void frontground::drawplayer2life(int p2_life)
{
    float resize = 244 * ((float)p2_life / 50);
    int resize_int = resize;
    p2lifedstbar = {446 + (244 - resize_int), 20, resize_int, 21};
    draw(gRenderer, playerlifesrcbar, p2lifedstbar, flip_horizontal);
}
void frontground::drawplayer2power(int p2_power)
{
    float resize = 244 * ((float)p2_power / 50);
    int resize_int = resize;
    p2powerdstbar = {446 + (244 - resize_int), 64, resize_int, 21};
    draw(gRenderer, playerpowersrcbar, p2powerdstbar, flip_horizontal);
}

void frontground::drawroundtime()
{
    draw(gRenderer, timerectsrc, timerectdst, flip_none);
    clockdst = {378, 62, 43, 26};

    timecountdelay++;
    if (timecountdelay % 10 == 0 && game_paused == false && game_over == false)
    {
        if (timecount > 110)
        {
            exited = true;
        }

        clocksrc = {tfx, tfy, 47, 28};
        if (timecount < 90)
        {
            tfx = tfx + 50;
            if (timecount % 14 == 0)
            {
                tfx = 0;
                tfy = tfy + 33;
            }
        }
        timecount++;
        if (timecount > 90)
        {
            game_over = true;
        }
    }
    else if (game_over == true)
    {
        exit_count++;
        if (exit_count > 40)
        {
            exited = true;
        }
    }

    draw(gRenderer, clocksrc, clockdst, flip_none);
}

void frontground::drawexittomainmenu()
{
    draw(gRenderer, returntohomesrc, returntohomedst, flip_none);

    if (game_paused == true)
    {
        if (exit_mainmenu_screen)
        {
            exittomainmenusrc = {770, 0, 415, 195};
        }
        else if (exit_mainmenu_yes_screen)
        {
            exittomainmenusrc = {770, 405, 415, 195};
        }
        else if (exit_mainmenu_no_screen)
        {
            exittomainmenusrc = {770, 198, 415, 195};
        }
        draw(gRenderer, exittomainmenusrc, exittomainmenudst, flip_none);
    }
}

void frontground::drawresult(bool win, bool lose, bool over)
{
    if (win)
    {
        draw(gRenderer, gamewinsrc, gameresultdst, flip_none);
    }
    else if (lose)
    {
        draw(gRenderer, gamelosesrc, gameresultdst, flip_none);
    }
    else if (over)
    {
        draw(gRenderer, gameoversrc, gameresultdst, flip_none);
    }
}

bool frontground::hover(int x, int y)
{
    if (game_paused != true && x > 365 && y > 0 && x < 435 && y < 50 && game_over == false)
    {
        return true;
    }
    else if (game_paused == true && x > 295 && y > 304 && x < 393 && y < 342 && game_over == false)
    {
        exit_mainmenu_yes_screen = true;
        exit_mainmenu_no_screen = false;
        exit_mainmenu_screen = false;
        return true;
    }
    else if (game_paused == true && x > 427 && y > 306 && x < 501 && y < 342 && game_over == false)
    {
        exit_mainmenu_yes_screen = false;
        exit_mainmenu_no_screen = true;
        exit_mainmenu_screen = false;
        return true;
    }
    else if (game_paused == true)
    {
        exit_mainmenu_yes_screen = false;
        exit_mainmenu_no_screen = false;
        exit_mainmenu_screen = true;
        return false;
    }
    else
    {
        return false;
    }
}

bool frontground::click(int x, int y)
{
    if (game_paused != true && x > 365 && y > 0 && x < 435 && y < 50 && game_over == false)
    {
        game_paused = true;
        return true;
    }
    else if (game_paused == true && x > 295 && y > 304 && x < 393 && y < 342 && game_over == false)
    {
        exited = true;
        return true;
    }
    else if (game_paused == true && x > 427 && y > 306 && x < 501 && y < 342 && game_over == false)
    {
        game_paused = false;
        exit_mainmenu_yes_screen = false;
        exit_mainmenu_no_screen = false;
        exit_mainmenu_screen = true;
        return true;
    }
}

void frontground::draw_frontground(int p1_life, int p1_power, int p2_life, int p2_power)
{
    drawplayerrect();
    drawroundtime();
    drawexittomainmenu();
    drawplayerlifepowerrect();
    drawplayer1life(p1_life);
    drawplayer1power(p1_power);
    drawplayer2life(p2_life);
    drawplayer2power(p2_power);
    if (timecount > 90 || p1_life <= 0 || p2_life <= 0)
    {
        if (p1_life > p2_life)
        {
            drawresult(true, false, false);
        }
        else if (p1_life < p2_life)
        {
            drawresult(false, true, false);
        }
        else if (p1_life == p2_life)
        {
            drawresult(false, false, true);
        }
        game_over = true;
    }
}