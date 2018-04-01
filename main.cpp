#include <iostream>
#include "Game.h"

int main()
{
    Game::get_const_instance().init();

    Game::get_const_instance().cmd();
    Game::get_const_instance().stop();

    std::cout << 123 << std::endl;
    return 0;
}