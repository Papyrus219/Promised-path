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

    return *this;
}

void izrael::Player_interacter::Move_moses_on_map()
{

}
