#include "entieties_icons_graphics_manager.hpp"
#include <stdexcept>

using namespace izrael;

void izrael::Entieties_icons_graphics_manager::Setup_icons_sprites(std::filesystem::path path, sf::Vector2i icon_size, uint8_t entieties_amonut)
{
    if(!this->texture.loadFromFile(path))
    {
        throw std::invalid_argument{"Path to enemies icon textures don't exist.\n"};
    }

    sf::Vector2i current_tex_point;
    for(int i=0;i<entieties_amonut;i++)
    {
        texture_rectangles.push_back( {current_tex_point, icon_size} );
        current_tex_point.x += icon_size.x;
    }
}

void izrael::Entieties_icons_graphics_manager::Set_texture_to_sprite(sf::Sprite& sprite, uint8_t entieties_id)
{
    sprite.setTexture(this->texture);
    sprite.setTextureRect(texture_rectangles[entieties_id]);
}
