#include "input_handler.hpp"
#include <stdexcept>

using namespace izrael;

void izrael::Input_handler::Init_player_interacter(Map& map, Moses& moses)
{
    interacter = std::make_optional<Player_interacter>(map, moses);
}

void izrael::Input_handler::Handle_input(sf::Keyboard::Scancode key)
{
    using namespace sf::Keyboard;

    if(!interacter)
    {
        throw std::runtime_error{"Player interacter, not inicialize in moment of use in Inpt handler."};
    }

    switch(key)
    {
        case Scancode::Num8:

            interacter->Move_moses_on_map();
            break;
        default:
            break;
    }
}
