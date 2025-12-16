#include "renderer.hpp"

using namespace izrael;

void izrael::Renderer::Render()
{
    window.clear();
    drawer.setPosition({0,0});

    this->map_manager.Set_texture_to_sprite(this->drawer);
    window.draw(this->drawer);
}

void izrael::Renderer::Init_window(sf::VideoMode size)
{
    window.create(size,"Promised path");
}

void izrael::Renderer::Setup_icons_sprites(std::filesystem::path path, sf::Vector2i icon_size, uint8_t entieties_amonut)
{
    this->icon_manager.Setup_icons_sprites(path, icon_size, entieties_amonut);
}

void izrael::Renderer::Setup_map_graphic(std::filesystem::path path)
{
    this->map_manager.Setup_map_graphic(path);
}
