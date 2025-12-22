#ifndef IZRAEL_GAME_MANAGER_HPP
#define IZRAEL_GAME_MANAGER_HPP

#include "./render/render_manager.hpp"
#include "./resources/resource_manager.hpp"
#include "./logic/logic_manager.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Game_manager
{
public:
    void Setup();
    void Start();

private:

    Logic_manager logic_manager{};
    Render_manager render_manager{};
    Resource_manager resource_manager{};
};

}

#endif // IZRAEL_GAME_MANAGER_HPP
