#ifndef IZRAEL_RENDER_MANAGER_HPP
#define IZRAEL_RENDER_MANAGER_HPP

#include <SFML/Graphics.hpp>
#include "./entieties_icons_graphics_manager.hpp"
#include "./map_graphics_manager.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Render_manager
{
public:
    void Init_window(sf::VideoMode size);
    void Render();

    void Setup_icons_sprites(std::filesystem::path path, sf::Vector2i icon_size, uint8_t entieties_amonut);
    void Setup_map_graphic(std::filesystem::path path);
private:
    Entieties_icons_graphics_manager icon_manager{};
    Map_graphics_manager map_manager{};

    sf::RenderWindow window{};
    sf::Texture null_texture{};
    sf::Sprite drawer{null_texture};
};

}

#endif // IZRAEL_RENDERER_HPP
