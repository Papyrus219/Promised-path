#ifndef IZRAEL_ENTITY_HPP
#define IZRAEL_ENTITY_HPP

#include <SFML/System/Vector2.hpp>
#include <stdint.h>
#include "./direction.hpp"
#include "../tools/subject.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Entities_group
{
public:
    void Move();

    sf::Vector2u Get_currect_possition() const {return this->curr_possiton;};
    Direction Get_currect_direction() const {return this->curr_dirrection;};
    uint16_t Get_move_distance() const {return this->move_disstance;};

protected:
    sf::Vector2u curr_possiton{};
    Direction curr_dirrection{};
    uint16_t move_disstance{5};

    Subject subject{};
};

}

#endif // IZRAEL_ENTITY_HPP
