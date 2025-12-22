#include "game_manager.hpp"
#include "../globals.hpp"

using namespace izrael;

void izrael::Game_manager::Setup()
{
    resource_manager.Init_player();
    resource_manager.Add_enemy_group(Entieties_sprite_id::MOABITS);

    render_manager.Assign_resources(resource_manager);
    render_manager.Setup_icons_sprites("../../img/entieties.png",3);
    render_manager.Setup_map_graphic("../../img/map.jpg");

    render_manager.Init_window( {globals::GAME_WIDTH, globals::GAME_HEIGHT} );

    logic_manager.input_handler.Assign_player( resource_manager.Get_player() );
    logic_manager.Assign_render_manager(render_manager);
    logic_manager.Assign_resources(resource_manager);
}

void izrael::Game_manager::Start()
{
    logic_manager.Loop();
}
