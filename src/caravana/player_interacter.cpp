#include "player_interacter.hpp"

using namespace izrael;

izrael::Player_interacter::Player_interacter(Map& map_,  Moses& moses_): map{map_}, moses{moses_}
{

}

void izrael::Player_interacter::Move_moses_on_map()
{
    int move_diss = moses.Get_move_distance();
    sf::Vector2i moved_disstance{};
    switch(moses.Get_currect_direction())
    {

    }
}
