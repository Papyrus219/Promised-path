#include "subject.hpp"
#include "observer.hpp"

using namespace izrael;

void izrael::Subject::Notify(const Entities_group& entities, Event event)
{
    for(auto observer : observers)
    {
        observer->On_notify(entities,event);
    }
}

void izrael::Subject::Add_observer(Observer* new_observer)
{
    for(auto it = observers.begin(); it < observers.end(); it++)
    {
        if(*it == new_observer) return;
    }

    observers.push_back(new_observer);
}

void izrael::Subject::Remove_observer(Observer* old_observer)
{
    for(auto it = observers.begin(); it != observers.end(); it++)
    {
        if(*it == old_observer)
        {
            observers.erase(it);
            return;
        }
    }
}
