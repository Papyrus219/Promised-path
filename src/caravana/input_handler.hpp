#ifndef IZRAEL_INPUT_HANDLER_HPP
#define IZRAEL_INPUT_HANDLER_HPP

#include <SFML/Window.hpp>
#include <optional>
#include "./player_interacter.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Input_handler
{
public:
    Input_handler() = default;
    void Init_player_interacter(Map& map, Moses& moses);

    void Handle_input(sf::Keyboard::Scancode key);

private:
    std::optional<Player_interacter> interacter{};
};

}

#endif // IZRAEL_INPUT_HANDLER_HPP
