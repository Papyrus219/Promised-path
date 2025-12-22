#ifndef IZRAEL_RESOURCE_MANAGER_HPP
#define IZRAEL_RESOURCE_MANAGER_HPP

#include <span>
#include <memory>
#include "../../entieties/entities_group.hpp"
#include "../../caravana/moses.hpp"
#include "../../map/map.hpp"

namespace izrael {

/**
 * @todo Write fucking code nigga!
 */
class Resource_manager
{
public:

    void Add_enemy_group(Entieties_sprite_id sprite_id);
    void Remove_enemy_group(uint16_t id);
    void Init_player();

    std::span< const std::unique_ptr<Entities_group> > Get_enemy_groups() {return enemy_groups;};
    Moses& Get_player() {return *player;};
private:
    std::vector< std::unique_ptr<Entities_group> > enemy_groups{};
    std::unique_ptr<Moses> player{};
};

}

#endif // IZRAEL_RESOURCE_MANAGER_HPP
