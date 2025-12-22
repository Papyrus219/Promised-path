#ifndef IZRAEL_LOGIC_MANAGER_H
#define IZRAEL_LOGIC_MANAGER_H

#include <SFML/System.hpp>
#include "../render/render_manager.hpp"
#include "../resources/resource_manager.hpp"
#include "./input_handler.hpp"

namespace izrael
{

/**
 * @todo write docs
 */
class Logic_manager
{
public:
    void Loop();
    void Handle_events();
    void Update_entities();

    void Assign_resources(Resource_manager &resource_);
    void Assign_render_manager(Render_manager &render_manager_);

    void Valid_check();

    Input_handler input_handler{};
private:
    sf::Clock tic_clock{};

    Render_manager* render_manager{};
    Resource_manager* resource{};
};

}

#endif // IZRAEL_LOGIC_MANAGER_HPP
