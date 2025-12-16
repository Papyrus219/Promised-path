#include "map_graphics_manager.hpp"
#include <stdexcept>

using namespace izrael;

void izrael::Map_graphics_manager::Set_texture_to_sprite(sf::Sprite& sprite)
{
    sprite.setTexture(this->texture);
}

void izrael::Map_graphics_manager::Load_map_graphic(std::filesystem::path path)
{
    if(!this->texture.loadFromFile(path))
    {
        throw std::invalid_argument{"Path to map texture don't exist."};
    }
}
