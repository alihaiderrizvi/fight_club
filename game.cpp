#include "game.hpp"

//builtin SDL functions
bool Game::init()
{
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
		//Set texture filtering to linear
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
		{
			printf("Warning: Linear texture filtering not enabled!");
		}

		//Create window
		gWindow = SDL_CreateWindow("Fight Club - By Ahsan Ali and Ali Haider", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
			success = false;
		}
		else
		{
			//Create renderer for window
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
			if (gRenderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
					success = false;
				}
				//Initialize SDL_mixer
				if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
				{
					printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
					success = false;
				}
			}
		}
	}
	return success;
}

bool Game::loadMedia()
{
	//Loading success flag
	bool success = true;
	//Media Being loaded in other classes
	return success;
}

void Game::close()
{
	//Destroy window and renderer
	SDL_DestroyRenderer(gRenderer);
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
	gRenderer = NULL;

	//Quit SDL subsystems

	Mix_Quit();
	IMG_Quit();
	SDL_Quit();
}

SDL_Texture *Game::loadTexture(std::string path)
{
	//The final texture
	SDL_Texture *newTexture = NULL;

	//Load image at specified path
	SDL_Surface *loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else
	{
		//Create texture from surface pixels
		newTexture = SDL_CreateTextureFromSurface(gRenderer, loadedSurface);
		if (newTexture == NULL)
		{
			printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return newTexture;
}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

void Game::updatemenu(SDL_Event e, menu &my_menu, map &my_map, playmusic &my_music)
{
	//Mouse motion and click updates the logic as follow
	if (e.type == SDL_MOUSEMOTION)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var1 = my_menu.hover(xMouse, yMouse);
		if (var1)
		{
			my_music.playhover();
		}
		else if (!var1)
		{
			my_music.hover_sound_flag = false;
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var = my_menu.click(xMouse, yMouse);
		if (var)
		{
			my_music.playclick();
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_RIGHT)
	{
	}
	//sets the volume upon click
	switch (my_menu.sound_intensity_level)
	{
	case 2:
		my_music.setvolume(2);
		break;
	case 1:
		my_music.setvolume(1);
		break;
	case 0:
		my_music.setvolume(0);
	}

	//sets the logic of music according to click
	switch (my_menu.sound_level)
	{
	case 1:
		my_music.setresume();
		break;
	case 0:
		my_music.setpause();
	}

	//changing the backgroudn music upon selection of play screen
	if (my_menu.game_select_flag == true)
	{
		my_map.update_map();
		game_screen_flag = 1;
		if (my_music.playing_flag)
		{
			my_music.playbackground(1);
		}
	}
}

void Game::updatemap(SDL_Event e, map &my_map, background &my_background, playerchoose &my_player, playmusic &my_music)
{
	//Mouse motion and click updates the logic as follow
	if (e.type == SDL_MOUSEMOTION)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var1 = my_map.hover(xMouse, yMouse);
		if (var1)
		{
			my_music.playhover();
		}
		else if (!var1)
		{
			my_music.hover_sound_flag = false;
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var = my_map.click(xMouse, yMouse);
		if (var)
		{
			my_music.playclick();
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_RIGHT)
	{
	}
	//changes the game screen flag and setting the map
	if (my_map.map_select_flag == true)
	{
		game_screen_flag = 2;
		my_player.update_player();
		my_background.set_map(my_map.map_select);
	}
}

void Game::updateplayer(SDL_Event e, playerchoose &my_player, frontground &my_frontground, insandmoves &my_insandmoves, playmusic &my_music)
{
	//Mouse motion and click updates the logic as follow
	if (e.type == SDL_MOUSEMOTION)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var1 = my_player.hover(xMouse, yMouse);
		if (var1)
		{
			my_music.playhover();
		}
		else if (!var1)
		{
			my_music.hover_sound_flag = false;
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var = my_player.click(xMouse, yMouse);
		if (var)
		{
			my_music.playclick();
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_RIGHT)
	{
	}

	//setting both the players by random probability
	//updating the game screen flag upon clicking as well
	if (my_player.player_select_flag == true)
	{
		int player1 = my_player.player_select;
		int player2 = rand() % 10 + 1;
		while (player1 == player2)
		{
			player2 = rand() % 10 + 1;
		}
		my_player.player_select2 = player2;

		my_frontground.setplayerrect(player1, player2);
		game_screen_flag = 3;
		my_insandmoves.update_insandmoves();
	}
}

void Game::updateinsandmoves(SDL_Event e, insandmoves &my_insandmoves, playmusic &my_music, playerversus &my_playerversus, playerchoose &my_player)
{
	//Mouse motion and click updates the logic as follow
	if (e.type == SDL_MOUSEMOTION)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var1 = my_insandmoves.hover(xMouse, yMouse);
		if (var1)
		{
			my_music.playhover();
		}
		else if (!var1)
		{
			my_music.hover_sound_flag = false;
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var = my_insandmoves.click(xMouse, yMouse);
		if (var)
		{
			my_music.playclick();
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_RIGHT)
	{
	}
	//updating game screen flag and intiazlizing the player rectangle
	if (my_insandmoves.play_flag == true)
	{
		my_playerversus.player_rect(my_player.player_select, my_player.player_select2);
		game_screen_flag = 4;
	}
}

void Game::updateplayerversusdraw(playerversus &my_playerversus, playerchoose &my_player, playmusic &my_music)
{
	//oppostion screen and leading to the ingame screen
	my_playerversus.draw_opponents(gRenderer);
	my_playerversus.delay++;
	if (my_playerversus.delay > 50)
	{
		if (my_music.playing_flag)
		{
			my_music.playfight();
			my_music.playbackground(2);
		}
		game_screen_flag = 5;
	}
}

void Game::updatebackground(background &my_background, frontground &my_frontground, playmusic &my_music)
{
	//draws the background continously
	my_background.draw_frames(gRenderer, !my_frontground.game_paused);
}

void Game::updatefrontground(SDL_Event e, frontground &my_frontground, playmusic &my_music)
{
	//Mouse motion and click updates the logic as follow
	if (e.type == SDL_MOUSEMOTION)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		//my_frontground.hover(xMouse, yMouse);
		bool var1 = my_frontground.hover(xMouse, yMouse);
		if (var1)
		{
			my_music.playhover();
		}
		else if (!var1)
		{
			my_music.hover_sound_flag = false;
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT)
	{
		int xMouse, yMouse;
		SDL_GetMouseState(&xMouse, &yMouse);
		bool var = my_frontground.click(xMouse, yMouse);
		if (var)
		{
			my_music.playclick();
		}
	}
	else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_RIGHT)
	{
	}
	//if the game is exited
	if (my_frontground.exited)
	{
		my_frontground.game_paused = false;
	}
}

void Game::updatefrontgrounddraw(frontground &my_frontground, playmusic &my_music, Player *p1, Player *p2)
{
	//playing sound when game results are decided
	if (my_frontground.exit_count > 20)
	{
		if (p1->playerlife > p2->playerlife)
		{
			my_music.playwin();
		}
		else if (p1->playerlife < p2->playerlife)
		{
			my_music.playlose();
		}
		else if (p1->playerlife == p2->playerlife)
		{
			my_music.playover();
		}
	}
	my_frontground.draw_frontground(p1->playerlife, p1->playerpower, p2->playerlife, p2->playerpower);
}

void Game::updatefight(const Uint8 *state, SDL_Event e, Player *p1, Player *p2, frontground &my_frontground)
{
	if (my_frontground.timecount < 90 && p1->playerlife > 0 && p2->playerlife > 0)
	{
		if (state[SDL_SCANCODE_S] && state[SDL_SCANCODE_B])
		{
			if (!p1->move_continue)
			{
				p1->crouchblock();
			}
			else if (p1->crouchblock_flag)
			{
				p1->crouchblock();
			}
		}
		else if (state[SDL_SCANCODE_S] && state[SDL_SCANCODE_P] && p1->move_wait_count >= p1->move_wait)
		{
			if (!p1->move_continue)
			{
				p1->crouchpunch();
			}
			else if (p1->crouchpunch_flag)
			{
				p1->crouchpunch();
			}
		}
		else if (state[SDL_SCANCODE_S] && state[SDL_SCANCODE_K] && p1->move_wait_count >= p1->move_wait)
		{
			if (!p1->move_continue)
			{
				p1->crouchkick();
			}
			else if (p1->crouchkick_flag)
			{
				p1->crouchkick();
			}
		}
		else if (state[SDL_SCANCODE_D])
		{
			if (!p1->move_continue)
			{
				p1->walkright();
			}
		}
		else if (state[SDL_SCANCODE_A])
		{
			if (!p1->move_continue)
			{
				p1->walkleft();
			}
		}
		else if (state[SDL_SCANCODE_W])
		{
			if (!p1->move_continue)
			{
				p1->jump();
			}
			else if (p1->jump_flag)
			{
				//p1->jump();
			}
		}
		else if (state[SDL_SCANCODE_S])
		{
			if (!p1->move_continue)
			{
				p1->crouch();
			}
			else if (p1->crouch_flag)
			{
				p1->crouch();
			}
		}
		else if (state[SDL_SCANCODE_B])
		{
			if (!p1->move_continue)
			{
				p1->idleblock();
			}
			else if (p1->idleblock_flag)
			{
				p1->idleblock();
			}
		}
		else if (state[SDL_SCANCODE_P] && p1->move_wait_count >= p1->move_wait)
		{
			if (!p1->move_continue)
			{
				p1->idlepunch();
			}
			else if (p1->idlepunch_flag)
			{
				p1->idlepunch();
			}
		}
		else if (state[SDL_SCANCODE_K] && p1->move_wait_count >= p1->move_wait)
		{
			if (!p1->move_continue)
			{
				p1->idlekick();
			}
			else if (p1->idlepunch_flag)
			{
				p1->idlekick();
			}
		}
		////
		else if (state[SDL_SCANCODE_Z])
		{
			if (!p1->move_continue)
			{
				p1->idlehit();
			}
			else if (p1->idlehit_flag)
			{
				p1->idlehit();
			}
		}
		else if (state[SDL_SCANCODE_X])
		{
			if (!p1->move_continue)
			{
				p1->crouchhit();
			}
			else if (p1->crouchhit_flag)
			{
				//p1->crouchhit();
			}
		}
		else if (state[SDL_SCANCODE_C])
		{
			if (!p1->move_continue)
			{
				p1->knockdown();
			}
			else if (p1->crouchhit_flag)
			{
				//p1->knockdown();
			}
		}
		/////
		else if (state[SDL_SCANCODE_I] && p1->move_wait_count >= p1->move_wait && p1->playerpower > 0)
		{
			if (!p1->move_continue)
			{
				p1->special1();
			}
		}
		else if (state[SDL_SCANCODE_O] && p1->move_wait_count >= p1->move_wait && p1->playerpower > 0)
		{
			if (!p1->move_continue)
			{
				p1->special2();
			}
		}
		else
		{
			if (!p1->move_continue)
			{
				p1->idle(p2->xpos, p2->playerwidth);
			}
			p2->idle(p1->xpos, p1->playerwidth);
		}
		p1->update_rect();
		p2->update_rect();
	}
	else if (my_frontground.game_over && (p1->move_continue || p2->move_continue))
	{
		p1->update_rect();
		p2->update_rect();
	}
	else
	{
		if (p1->playerlife > p2->playerlife)
		{
			p1->victory();
			p2->KO();
		}
		else if (p1->playerlife < p2->playerlife)
		{
			p1->KO();
			p2->victory();
		}
		else if (p1->playerlife == p2->playerlife)
		{
			p1->victory();
			p2->victory();
		}
	}
}

void Game::updatefightdraw(Player *p1, Player *p2, bool update)
{
	//following functions only draws the players
	p1->player_action(update);
	p2->player_action(update);
}

//Main loop
void Game::run()
{
	//creating all relevant objects for our game
	playmusic my_music;
	menu my_menu(gWindow);
	map my_map(gWindow);
	playerchoose my_player(gWindow);
	insandmoves my_insandmoves(gWindow);
	playerversus my_playerversus(gWindow, gRenderer);
	background my_background(gWindow, gRenderer);
	frontground my_frontground(gWindow, gRenderer);
	Player *p1;
	Player *p2;

	//Main loop flag
	bool quit = false;
	//Event handler
	SDL_Event e;
	//State handler
	const Uint8 *state = SDL_GetKeyboardState(NULL);

	//While application is running
	while (!quit)
	{
		//Handle events on queue
		while (SDL_PollEvent(&e) != 0)
		{
			//User requests quit
			if (e.type == SDL_QUIT || my_menu.exit_level == 1)
			{
				quit = true;
			}
			else
			{
				//taking event inputs and updating logic of current screen
				if (game_screen_flag == 0 && my_menu.game_select_flag == false)
				{
					updatemenu(e, my_menu, my_map, my_music);
				}
				else if (game_screen_flag == 1 && my_map.map_select_flag == false)
				{
					updatemap(e, my_map, my_background, my_player, my_music);
				}
				else if (game_screen_flag == 2 && my_player.player_select_flag == false)
				{
					updateplayer(e, my_player, my_frontground, my_insandmoves, my_music);
				}
				else if (game_screen_flag == 3 && my_insandmoves.play_flag == false)
				{
					updateinsandmoves(e, my_insandmoves, my_music, my_playerversus, my_player);
				}
				else if (game_screen_flag == 5)
				{
					updatefrontground(e, my_frontground, my_music);
				}
			}
		}
		if (game_screen_flag == 3 && !my_insandmoves.new_player)
		{
			//initializing the player selected
			switch (my_player.player_select)
			{
			default:
				p1 = new cammy(gRenderer, false, my_menu.sound_intensity_level, my_menu.difficulty_level);
				//case 1:
				//p1 = new cammy(gRenderer);
				//break;
				//case 2:
				//p1 = new chunli(gRenderer);
				//break;
				//case 3:
				//p1 = new claw(gRenderer);
				//break;
				//case 4:
				//p1 = new dictador(gRenderer);
				//break;
				//case 5:
				//p1 = new feilong(gRenderer);
				//break;
				//case 6:
				//p1 = new guile(gRenderer);
				//break;
				//case 7:
				//p1 = new ken(gRenderer);
				//break;
				//case 8:
				//p1 = new ryu(gRenderer);
				//break;
				//case 9:
				//p1 = new sagat(gRenderer);
				//break;
				//case 10:
				//p1 = new zangief(gRenderer);
				//break;
			}
			switch (my_player.player_select)
			{
			default:
				p2 = new cammy(gRenderer, true, my_menu.sound_intensity_level, my_menu.difficulty_level);
				//case 1:
				//p1 = new cammy(gRenderer);
				//break;
				//case 2:
				//p1 = new chunli(gRenderer);
				//break;
				//case 3:
				//p1 = new claw(gRenderer);
				//break;
				//case 4:
				//p1 = new dictador(gRenderer);
				//break;
				//case 5:
				//p1 = new feilong(gRenderer);
				//break;
				//case 6:
				//p1 = new guile(gRenderer);
				//break;
				//case 7:
				//p1 = new ken(gRenderer);
				//break;
				//case 8:
				//p1 = new ryu(gRenderer);
				//break;
				//case 9:
				//p1 = new sagat(gRenderer);
				//break;
				//case 10:
				//p1 = new zangief(gRenderer);
				//break;
			}
			my_insandmoves.new_player = true;
		}
		else if (game_screen_flag == 4)
		{
			//oppostion screen
			SDL_RenderClear(gRenderer);

			updateplayerversusdraw(my_playerversus, my_player, my_music);

			SDL_RenderPresent(gRenderer);
			SDL_Delay(100);
		}
		else if (game_screen_flag == 5)
		{
			//in game updates
			if (!my_frontground.game_paused)
			{
				updatefight(state, e, p1, p2, my_frontground);
			}

			SDL_RenderClear(gRenderer);

			updatebackground(my_background, my_frontground, my_music);
			updatefightdraw(p1, p2, !my_frontground.game_paused);
			updatefrontgrounddraw(my_frontground, my_music, p1, p2);

			SDL_RenderPresent(gRenderer);
			SDL_Delay(100);

			//resets all the screens once ingame is exited
			if (my_frontground.exited)
			{
				my_menu.reset_menu();
				my_map.reset_map();
				my_player.reset_player();
				my_insandmoves.reset_insandmoves();
				my_playerversus.reset_playerversus();
				my_background.reset_background();
				my_frontground.reset_frontground();
				my_music.reset_music();
				game_screen_flag = 0;
				if (my_music.playing_flag)
				{
					my_music.playbackground(0);
				}
				//deleting the dynamically created players
				delete p1;
				delete p2;
			}
		}
	}
}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////