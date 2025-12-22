#include "map_graphics_manager.hpp"
#include "../../globals.hpp"
#include <stdexcept>

using namespace izrael;

void izrael::Map_graphics_manager::Set_texture_to_sprite(sf::Sprite& sprite)
{
    sprite.setTexture(this->texture);
    sprite.setTextureRect( {{0,0}, {globals::MAP_WIDTH * 5, globals::MAP_HEIGHT * 5}} );

     sprite.setScale( {0.2,0.2} );
}

void izrael::Map_graphics_manager::Setup_map_graphic(std::filesystem::path path)
{
    if(!this->texture.loadFromFile(path))
    {
        throw std::invalid_argument{"Path to map texture don't exist."};
    }
}
