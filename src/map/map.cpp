#include "map.hpp"
#include "../caravana/moses.hpp"
//#include "../entieties/entities_group.hpp"
#include <stdexcept>

using namespace izrael;

bool izrael::Map::Get_is_tile_was_visited(uint64_t y, uint64_t x)
{
    if( y > globals::MAP_HEIGHT || x > globals::MAP_WIDTH)
    {
        throw std::out_of_range{"Try to get map tile visition out of range."};
    }

    return is_visited[x][y];
}

void izrael::Map::On_notify(const Entities_group& entities, Event event)
{
    switch(event)
    {
        case Event::MOSES_MOVE:
            Upadate_moses_path(entities.Get_currect_direction(), entities.Get_currect_possition());
            break;
        default:
            break;
    }
}

void izrael::Map::Upadate_moses_path(Direction dirr, sf::Vector2f new_poss)
{
    auto [x,y] = last_moses_possition;

    x/=5;
    y/=5;

    switch(dirr)
    {
        case Direction::NORTH:
            for(;y != new_poss.y; y--)
            {
                this->is_visited[y][x] = true;
            }
            break;
        case Direction::SOUTH:
            for(;y != new_poss.y; y++)
            {
                this->is_visited[y][x] = true;
            }
        case Direction::WEST:
            for(;x != new_poss.x; x--)
            {
                this->is_visited[y][x] = true;
            }
        case Direction::EAST:
            for(;x != new_poss.x; x++)
            {
                this->is_visited[y][x] = true;
            }
            break;
        case Direction::NORTH_EAST:
            for(; x != new_poss.x && y != new_poss.y; y--, x++)
            {
                this->is_visited[y][x] = true;
            }
            break;
        case Direction::NORTH_WEST:
            for(; x != new_poss.x && y != new_poss.y; y--, x--)
            {
                this->is_visited[y][x] = true;
            }
            break;
        case Direction::SOUTH_EAST:
            for(; x != new_poss.x && y != new_poss.y; y++, x++)
            {
                this->is_visited[y][x] = true;
            }
        case Direction::SOUTH_WEST:
            for(; x != new_poss.x && y != new_poss.y; y++, x--)
            {
                this->is_visited[y][x] = true;
            }
            break;
    }
}

