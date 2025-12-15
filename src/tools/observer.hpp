#ifndef IZRAEL_OBSERVER_HPP
#define IZRAEL_OBSERVER_HPP

#include "../entieties/entities_group.hpp"
#include "./event.hpp"

namespace izrael {

/**
 * @todo write docs
 */
class Observer
{
public:
    virtual void On_notify(const Entities_group& entities, Event event) = 0;
    virtual ~Observer() = default;
};

}

#endif // IZRAEL_OBSERVER_HPP
