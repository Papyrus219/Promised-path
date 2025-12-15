#include "player_interacter.hpp"

using namespace izrael;

izrael::Player_interacter::Player_interacter(Map& map_,  Moses& moses_): map{map_}, moses{moses_}
{

}

izrael::Player_interacter::Player_interacter(const Player_interacter& other): Player_interacter(other.map, other.moses)
{

}

izrael::Player_interacter::Player_interacter(Player_interacter && other): Player_interacter(other.map, other.moses)
{
}

const izrael::Player_interacter & izrael::Player_interacter::operator=(const Player_interacter& other)
{
    this->map = other.map;
    this->moses = other.moses;
}

void izrael::Player_interacter::Move_moses_on_map()
{
    __attribute_maybe_unused__ int move_diss = moses.Get_move_distance();
    __attribute_maybe_unused__ sf::Vector2i moved_disstance{};
    switch(moses.Get_currect_direction())
    {
        default:
            break;
    }
}
