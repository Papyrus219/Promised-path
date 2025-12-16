#ifndef IZRAEL_RESOURCE_MANAGER_HPP
#define IZRAEL_RESOURCE_MANAGER_HPP

#include <span>
#include <memory>
#include "../../entieties/entities_group.hpp"
#include "../../caravana/moses.hpp"

namespace izrael {

/**
 * @todo Write fucking code nigga!
 */
class Resource_manager
{
public:

    void Add_enemy_group(Entieties_type type);
    void Init_player();

    std::span<Entities_group> Get_enemy_groups() {return enemy_groups;};
    Moses& Get_player() {return *player;};

private:
    std::vector<Entities_group> enemy_groups{};

    std::unique_ptr<Moses> player{};
};

}

#endif // IZRAEL_RESOURCE_MANAGER_HPP
