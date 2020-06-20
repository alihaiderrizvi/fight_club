#include "game.hpp"

//This is the main function which creats an object called game
int main(int argc, char *argv[])
{
    //Creating game object
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
