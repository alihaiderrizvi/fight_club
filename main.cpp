#include "game.hpp"

int main(int argc, char *argv[])
{
    Game game;
    srand(time(NULL));
    if (!game.init())
    {
        printf("Failed to initialize!\n");
        return 0;
    }
    //Load media such as texture and assets
    if (!game.loadMedia())
    {
        printf("Failed to load media!\n");
        return 0;
    }
    //Calls the game running loop
    game.run();
    //Closes the game and frees the memory
    game.close();

    return 0;
}
