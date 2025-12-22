#ifndef IZRAEL_RENDER_MANAGER_HPP
#define IZRAEL_RENDER_MANAGER_HPP

#include <SFML/Graphics.hpp>
#include "./entieties_icons_graphics_manager.hpp"
#include "./map_graphics_manager.hpp"
#include "../resources/resource_manager.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Render_manager
{
public:
    void Init_window(sf::Vector2u size);
    void Render();

    const std::optional<sf::Event> Get_event() {return this->window.pollEvent();};
    bool Get_is_window_open() {return this->window.isOpen();};

    void Assign_resources(Resource_manager &resource);
    void Setup_icons_sprites(std::filesystem::path path, uint8_t entieties_amonut);
    void Setup_map_graphic(std::filesystem::path path);

    void Close_window();
private:
    Entieties_icons_graphics_manager icon_manager{};
    Map_graphics_manager map_manager{};

    sf::RenderWindow window{};
    sf::Texture null_texture{};
    sf::Sprite drawer{null_texture};

    Resource_manager *resources{};
};

}

#endif // IZRAEL_RENDERER_HPP
