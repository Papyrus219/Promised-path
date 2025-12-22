#ifndef IZRAEL_MOSES_HPP
#define IZRAEL_MOSES_HPP

#include <SFML/Graphics.hpp>
#include "../entieties/entities_group.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Moses : public Entities_group
{
public:
    Moses(): Entities_group{Entieties_sprite_id::IZRAELITS} {};
private:

};

}

#endif // IZRAEL_MOSES_HPP
