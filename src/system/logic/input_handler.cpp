#include "input_handler.hpp"
#include "../../player/moses.hpp"
#include <stdexcept>
#include <iostream>

using namespace izrael;

void izrael::Input_handler::Assign_player ( Moses& player_ )
{
    player = &player_;
}

void izrael::Input_handler::Handle_input(sf::Keyboard::Scancode key)
{
    using namespace sf::Keyboard;

    if(!player)
    {
        throw std::runtime_error{"Player not assign in moment of handle input!"};
    }

    switch(key)
    {
        case Scancode::Numpad7:
            player->Set_direction(Direction::NORTH_WEST);
            break;
        case Scancode::Numpad8:
            player->Set_direction(Direction::NORTH);
            break;
        case Scancode::Numpad9:
            player->Set_direction(Direction::NORTH_EAST);
            break;
        case Scancode::Numpad4:
            player->Set_direction(Direction::WEST);
            break;
        case Scancode::Numpad6:
            player->Set_direction(Direction::EAST);
            break;
        case Scancode::Numpad1:
            player->Set_direction(Direction::SOUTH_WEST);
            break;
        case Scancode::Numpad2:
            player->Set_direction(Direction::SOUTH);
            break;
        case Scancode::Numpad3:
            player->Set_direction(Direction::SOUTH_EAST);
            break;
        default:
            break;
    }
}
