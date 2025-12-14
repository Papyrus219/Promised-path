#include "map.hpp"
#include <stdexcept>

using namespace izrael;

bool izrael::Map::Get_is_tile_was_visited(uint64_t y, uint64_t x)
{
    if( y > MAP_HEIGHT || x > MAP_WIDTH)
    {
        throw std::out_of_range{"Try to get map tile visition out of range."};
    }

    return is_visited[y][x];
}
