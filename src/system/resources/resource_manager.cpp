#include "resource_manager.hpp"

using namespace izrael;

void izrael::Resource_manager::Add_enemy_group(Entieties_sprite_id sprite_id)
{
    enemy_groups.emplace_back( std::make_unique<Entities_group>(sprite_id) );
}

void izrael::Resource_manager::Remove_enemy_group ( uint16_t id )
{
    for(auto it = enemy_groups.begin(); it != enemy_groups.end(); it++)
    {
        if( (*it)->Get_entity_id() == id)
        {
            enemy_groups.erase(it);
            return;
        }
    }
}

void izrael::Resource_manager::Init_player()
{
    player = std::make_unique<Moses>();
}
