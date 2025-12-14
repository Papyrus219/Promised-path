#ifndef IZRAEL_MAP_HPP
#define IZRAEL_MAP_HPP

#include <array>
#include "../globals.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Map
{
    bool Get_is_tile_was_visited(uint64_t y, uint64_t x);

private:
    std::array< std::array<bool,MAP_HEIGHT>,MAP_WIDTH> is_visited{};

    friend class Player_interacter;
};

}

#endif // IZRAEL_MAP_HPP
