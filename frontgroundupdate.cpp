#include "frontgroundupdate.hpp"

frontground::frontground(SDL_Window *iWindow, SDL_Renderer *iRenderer)
{
    gWindow = iWindow;
    gRenderer = iRenderer;
    assets = loadTexture("ingame/ingameassets.png");

    hover_flag = false;
    click_flag = false;

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
    tfy = 281;
    game_over = false;

    hover_flag = false;
    click_flag = false;
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
    draw(gRenderer, p1rectsrc, p1rectdst);
    draw(gRenderer, p2rectsrc, p2rectdst);
}

void frontground::drawplayerlifepowerrect()
{
    draw(gRenderer, p1lifesrcrect, p1lifedstrect);
    draw(gRenderer, p1powersrcrect, p1powerdstrect);
    draw(gRenderer, p2lifesrcrect, p2lifedstrect);
    draw(gRenderer, p2powersrcrect, p2powerdstrect);
}

void frontground::drawplayer1life(int)
{
}
void frontground::drawplayer1power(int)
{
}
void frontground::drawplayer2life(int)
{
}
void frontground::drawplayer2power(int)
{
}

void frontground::drawroundtime()
{

    draw(gRenderer, timerectsrc, timerectdst);
    clockdst = {380, 62, 40, 25};

    timecountdelay++;
    if (timecountdelay % 8 == 0 && game_over == false && game_paused == false)
    {
        if (timecount > 90)
        {
            tfx = 0;
            tfy = 281;
            timecount = 1;
            timecountdelay == 0;
        }

        clocksrc = {tfx, tfy, 40, 31};

        tfx = tfx + 55.55;
        if (timecount % 14 == 0)
        {
            tfx = 0;
            tfy = tfy + 40;
        }

        timecount++;
        if (timecount > 90)
        {
            game_over = true;
        }
    }

    draw(gRenderer, clocksrc, clockdst);
}

void frontground::drawexittomainmenu()
{

    draw(gRenderer, returntohomesrc, returntohomedst);

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
        draw(gRenderer, exittomainmenusrc, exittomainmenudst);
    }
}

bool frontground::hover(int x, int y)
{
    if (game_paused != true && x > 365 && y > 0 && x < 435 && y < 50)
    {
        hover_flag = true;
        return true;
    }
    else if (game_paused == true && x > 295 && y > 304 && x < 393 && y < 342)
    {
        exit_mainmenu_yes_screen = true;
        exit_mainmenu_no_screen = false;
        exit_mainmenu_screen = false;
        hover_flag = true;
        return true;
    }
    else if (game_paused == true && x > 427 && y > 306 && x < 501 && y < 342)
    {
        exit_mainmenu_yes_screen = false;
        exit_mainmenu_no_screen = true;
        exit_mainmenu_screen = false;
        hover_flag = true;
        return true;
    }
    else if (game_paused == true)
    {
        exit_mainmenu_yes_screen = false;
        exit_mainmenu_no_screen = false;
        exit_mainmenu_screen = true;
        hover_flag = false;
        click_flag = false;
        return false;
    }
    else
    {
        hover_flag = false;
        click_flag = false;
        return false;
    }
}

bool frontground::click(int x, int y)
{
    if (game_paused != true && x > 365 && y > 0 && x < 435 && y < 50)
    {
        game_paused = true;
        click_flag = true;
        return true;
    }
    else if (game_paused == true && x > 295 && y > 304 && x < 393 && y < 342)
    {
        exited = true;
        click_flag = true;
        return true;
    }
    else if (game_paused == true && x > 427 && y > 306 && x < 501 && y < 342)
    {
        game_paused = false;
        exit_mainmenu_yes_screen = false;
        exit_mainmenu_no_screen = false;
        exit_mainmenu_screen = true;
        click_flag = true;
        return true;
    }
}

void frontground::draw_frontground()
{
    drawplayerrect();
    drawroundtime();
    drawexittomainmenu();
    drawplayerlifepowerrect();
    drawplayer1life(5);
    drawplayer1power(5);
    drawplayer2life(5);
    drawplayer2power(5);
}