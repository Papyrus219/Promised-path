#include "resource_manager.hpp"

using namespace izrael;

void izrael::Resource_manager::Add_enemy_group(Entieties_type type)
{
    enemy_groups.push_back(Entities_group{type});
}

void izrael::Resource_manager::Init_player()
{
    player = std::make_unique<Moses>();
}
