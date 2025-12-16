#ifndef IZRAEL_ENTITIES_GROUP_HPP
#define IZRAEL_ENTITIES_GROUP_HPP

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
    Entities_group(Entieties_type type_) noexcept: type{type_} {};

    void Move();

    void Set_direction(Direction dirr) {this->curr_dirrection = dirr;};

    sf::Vector2u Get_currect_possition() const noexcept {return this->curr_possiton;};
    Direction Get_currect_direction() const noexcept {return this->curr_dirrection;};
    Entieties_type Get_type() const noexcept {return this->type;};
    uint16_t Get_move_distance() const noexcept {return this->move_disstance;};

protected:
    sf::Vector2u curr_possiton{};
    Direction curr_dirrection{};
    uint16_t move_disstance{5};

    Entieties_type type{};
    Subject subject{};
};

}

#endif // IZRAEL_ENTITY_HPP
