#include <iostream>
#include "./system/game_manager.hpp"

int main()
{
    izrael::Game_manager game{};
    game.Setup();

    game.Start();

    return 0;
}
