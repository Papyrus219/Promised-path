#ifndef IZRAEL_ENTIETIES_GRAPHICS_MANAGER_HPP
#define IZRAEL_ENTIETIES_GRAPHICS_MANAGER_HPP

#include <SFML/Graphics.hpp>
#include <filesystem>
#include "../../entieties/entieties_type.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Entieties_icons_graphics_manager
{
public:
    void Setup_icons_sprites(std::filesystem::path path, sf::Vector2i icon_size, uint8_t entieties_amonut);
    void Set_texture_to_sprite(sf::Sprite &sprite, uint8_t entieties_id);
private:
    sf::Texture texture{};
    std::vector<sf::IntRect> texture_rectangles{};
};

}

#endif // IZRAEL_ENTIETIES_GRAPHICS_MANAGER_HPP
