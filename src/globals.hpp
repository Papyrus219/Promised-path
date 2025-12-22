#ifndef IZRAEL_GLOBALS_HPP
#define IZRAEL_GLOBALS_HPP

#include <stdint.h>
#include <SFML/System.hpp>

namespace izrael::globals
{

constexpr uint64_t GAME_HEIGHT{514};
constexpr uint64_t GAME_WIDTH{514};
constexpr uint64_t MAP_HEIGHT{514};
constexpr uint64_t MAP_WIDTH{392};
constexpr uint16_t ENTITY_HEIGHT{48};
constexpr uint16_t ENTITY_WIDTH{48};

constexpr sf::Time TIC_DURATION{sf::seconds(1) };

}

#endif
