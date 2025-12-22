#include "render_manager.hpp"

using namespace izrael;

void izrael::Render_manager::Render()
{
    window.clear();
    drawer.setPosition({0,0});

    this->map_manager.Set_texture_to_sprite(this->drawer);
    window.draw(this->drawer);

    auto enemies = resources->Get_enemy_groups();
    for(const auto &enemy : enemies)
    {
        drawer.setPosition( enemy->Get_currect_possition() );
        this->icon_manager.Set_texture_to_sprite( drawer, enemy->Get_sprite_id() );
        window.draw(drawer);
    }

    auto player = resources->Get_player();
    drawer.setPosition( player.Get_currect_possition() );
    this->icon_manager.Set_texture_to_sprite( drawer, player.Get_sprite_id() );
    window.draw(drawer);

    window.display();
}

void izrael::Render_manager::Init_window(sf::Vector2u size)
{
    window.create( sf::VideoMode{size},"Promised path");
}

void izrael::Render_manager::Assign_resources(Resource_manager& resource)
{
    this->resources = &resource;
}

void izrael::Render_manager::Setup_icons_sprites(std::filesystem::path path, uint8_t entieties_amonut)
{
    this->icon_manager.Setup_icons_sprites(path, entieties_amonut);
}

void izrael::Render_manager::Setup_map_graphic(std::filesystem::path path)
{
    this->map_manager.Setup_map_graphic(path);
}

void izrael::Render_manager::Close_window()
{
    this->window.close();
}
