#ifndef IZRAEL_INPUT_HANDLER_HPP
#define IZRAEL_INPUT_HANDLER_HPP

#include <SFML/Window.hpp>
#include <optional>

namespace izrael {

class Moses;

/**
 * @todo write docs
 */
class Input_handler
{
public:
    Input_handler() = default;
    void Assign_player(Moses& player_);

    void Handle_input(sf::Keyboard::Scancode key);

private:
    Moses* player;
};

}

#endif // IZRAEL_INPUT_HANDLER_HPP
