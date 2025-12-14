#ifndef IZRAEL_SUBJECT_HPP
#define IZRAEL_SUBJECT_HPP

#include <vector>
#include "../entieties/entities_group.hpp"

namespace izrael {

class Observer;

/**
 * @todo write docs
 */
class Subject
{
public:
    void Notify(const Entities_group& entities, Event event);
    void Add_observer(Observer* new_observer);
    void Remove_observer(Observer* old_observer);

private:
    std::vector<Observer *> observers{};
};

}

#endif // IZRAEL_SUBJECT_HPP
