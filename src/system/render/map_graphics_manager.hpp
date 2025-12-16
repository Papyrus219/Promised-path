#ifndef IZRAEL_MAP_GRAPHICS_MANAGER_HPP
#define IZRAEL_MAP_GRAPHICS_MANAGER_HPP

#include <SFML/Graphics.hpp>

namespace izrael {

/**
 * @todo write docs
 */
class Map_graphics_manager
{
public:
    void Setup_map_graphic(std::filesystem::path path);
    void Set_texture_to_sprite(sf::Sprite &sprite);
private:
    sf::Texture texture{};
};

}

#endif // IZRAEL_MAP_GRAPHICS_MANAGER_HPP
