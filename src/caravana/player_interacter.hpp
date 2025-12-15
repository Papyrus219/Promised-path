#ifndef IZRAEL_PLAYER_INTERACTER_HPP
#define IZRAEL_PLAYER_INTERACTER_HPP

#include "../map/map.hpp"
#include "./moses.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Player_interacter
{
public:
    Player_interacter(Map& map_, Moses& moses_);
    Player_interacter(const Player_interacter& other);
    Player_interacter(Player_interacter&& other);

    const Player_interacter& operator=(const Player_interacter& other);

    void Move_moses_on_map();

private:
    Map &map;
    Moses &moses;
};

}

#endif // IZRAEL_PLAYER_INTERACTER_HPP
