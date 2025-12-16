#ifndef IZRAEL_ENTITY_HPP
#define IZRAEL_ENTITY_HPP

#include <SFML/System/Vector2.hpp>
#include <stdint.h>
#include "./direction.hpp"
#include "../tools/subject.hpp"
#include "./entieties_type.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Entities_group
{
public:
    noexcept Entities_group(Entieties_type type_): type{type_} {};

    void Move();

    void Set_direction(Direction dirr) {this->curr_dirrection = curr};

    noexcept sf::Vector2u Get_currect_possition() const {return this->curr_possiton;};
    noexcept Direction Get_currect_direction() const {return this->curr_dirrection;};
    noexcept Entieties_type Get_type() const {return this->type;};
    noexcept uint16_t Get_move_distance() const {return this->move_disstance;};

protected:
    sf::Vector2u curr_possiton{};
    Direction curr_dirrection{};
    uint16_t move_disstance{5};

    Entieties_type type{};
    Subject subject{};
};

}

#endif // IZRAEL_ENTITY_HPP
