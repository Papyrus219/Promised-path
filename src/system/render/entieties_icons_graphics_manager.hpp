#ifndef IZRAEL_ENTIETIES_GRAPHICS_MANAGER_HPP
#define IZRAEL_ENTIETIES_GRAPHICS_MANAGER_HPP

#include <SFML/Graphics.hpp>
#include <filesystem>
#include "../../entieties/entieties_sprites_id.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Entieties_icons_graphics_manager
{
public:
    void Setup_icons_sprites(std::filesystem::path path, uint8_t entieties_amonut);

    void Set_texture_to_sprite(sf::Sprite &sprite, Entieties_sprite_id id);
private:
    sf::Texture texture{};
    std::vector<sf::IntRect> texture_rectangles{};
};

}

#endif // IZRAEL_ENTIETIES_GRAPHICS_MANAGER_HPP
