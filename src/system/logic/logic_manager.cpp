#include "logic_manager.hpp"
#include <stdexcept>
#include <iostream>

using namespace izrael;

void izrael::Logic_manager::Loop()
{
    Valid_check();

    while(render_manager->Get_is_window_open())
    {
        render_manager->Render();
        Handle_events();
    }
}

void izrael::Logic_manager::Handle_events()
{
    while(const std::optional event = render_manager->Get_event())
    {
        if(event->is<sf::Event::Closed>())
        {
            render_manager->Close_window();
        }
        else if(const auto* key = event->getIf<sf::Event::KeyPressed>())
        {
            input_handler.Handle_input(key->scancode);
        }
    }
}

void izrael::Logic_manager::Assign_render_manager ( Render_manager& render_manager_ )
{
    this->render_manager = &render_manager_;
}

void izrael::Logic_manager::Assign_resources ( Resource_manager& resource_ )
{
    this->resource = &resource_;
}

void izrael::Logic_manager::Valid_check()
{
    if(!render_manager)
    {
        throw std::runtime_error{"Render manager not assign on start of game loop."};
    }

    if(!resource)
    {
        throw std::runtime_error{"Render manager not assign on start of game loop."};
    }
}
