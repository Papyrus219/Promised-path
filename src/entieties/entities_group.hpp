#ifndef IZRAEL_ENTITIES_GROUP_HPP
#define IZRAEL_ENTITIES_GROUP_HPP

#include <SFML/System/Vector2.hpp>
#include <stack>
#include <cstdint>
#include "./direction.hpp"
#include "../tools/subject.hpp"
#include "./entieties_sprites_id.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Entities_group
{
public:
    Entities_group(Entieties_sprite_id sprite_id_) noexcept;

    void Update();

    void Set_direction(Direction dirr) {this->curr_dirrection = dirr;};

    std::uint16_t Get_entity_id() const noexcept {return this->entity_id;};
    sf::Vector2f Get_currect_possition() const noexcept {return this->curr_possiton;};
    Direction Get_currect_direction() const noexcept {return this->curr_dirrection;};
    Entieties_sprite_id Get_sprite_id() const noexcept {return this->sprite_id;};
    std::uint16_t Get_move_distance() const noexcept {return this->move_disstance;};

    Subject subject{};

    virtual ~Entities_group() noexcept;
protected:
    void Move();

    std::uint16_t entity_id{};

    sf::Vector2f curr_possiton{};
    Direction curr_dirrection{};
    std::uint16_t move_disstance{2};

    Entieties_sprite_id sprite_id{};

    static std::stack< std::uint16_t > free_ids;
    static std::uint16_t next_entity_id;
};

}

#endif // IZRAEL_ENTITY_HPP
