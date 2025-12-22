#ifndef IZRAEL_MAP_HPP
#define IZRAEL_MAP_HPP

#include <SFML/System/Vector2.hpp>
#include <array>
#include "../globals.hpp"
#include "../tools/observer.hpp"

namespace izrael {

class Moses;

/**
 * @todo write docs
 */
class Map: public Observer
{
public:
    bool Get_is_tile_was_visited(uint64_t y, uint64_t x);
    void Upadate_moses_path(Direction dirr, sf::Vector2f new_poss);

    void On_notify(const Entities_group & entities, Event event) override;

    virtual ~Map() = default;
private:
    std::array< std::array<bool,globals::MAP_HEIGHT>,globals::MAP_WIDTH> is_visited{};
    sf::Vector2f last_moses_possition{};
};

}

#endif // IZRAEL_MAP_HPP
