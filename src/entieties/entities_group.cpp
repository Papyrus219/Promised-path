#include "./entities_group.hpp"
#include "../globals.hpp"
#include "../tools/event.hpp"
#include <iostream>

using namespace izrael;

std::uint16_t izrael::Entities_group::next_entity_id{};
std::stack< std::uint16_t > izrael::Entities_group::free_ids{};

izrael::Entities_group::Entities_group ( Entieties_sprite_id sprite_id_ ) noexcept: sprite_id{sprite_id_}
{
    if(free_ids.empty())
    {
        this->entity_id = Entities_group::next_entity_id;
        next_entity_id++;
    }
    else
    {
        this->entity_id = Entities_group::free_ids.top();
        Entities_group::free_ids.pop();
    }
}

void izrael::Entities_group::Update()
{
    this->Move();
}

void izrael::Entities_group::Move()
{
    sf::Vector2f new_poss{};

    switch(this->curr_dirrection)
    {
        case Direction::NORTH:
            new_poss = { this->curr_possiton.x, (this->curr_possiton.y- this->move_disstance) };
            if(new_poss.y < 1) new_poss.y = 1;

            break;
        case Direction::SOUTH:
            std::cerr << "POŁUDNIE!\n";
            new_poss = { this->curr_possiton.x, (this->curr_possiton.y + this->move_disstance)};
            if(new_poss.y > globals::MAP_HEIGHT) new_poss.y = globals::MAP_HEIGHT-1;

            break;
        case Direction::EAST:
            new_poss = { (this->curr_possiton.x + this->move_disstance), this->curr_possiton.y};
            if(new_poss.x > globals::MAP_WIDTH) new_poss.x = globals::MAP_WIDTH-1;

            break;
        case Direction::WEST:
            new_poss = { (this->curr_possiton.x - this->move_disstance) , this->curr_possiton.y };
            if(new_poss.x < 1) new_poss.x = 1;

            break;
        case Direction::NORTH_EAST:
            new_poss = { (this->curr_possiton.x + (this->move_disstance/2 + 1) ), (this->curr_possiton.y - (this->move_disstance/2 + 1) ) };
            if(new_poss.y < 1) new_poss.y = 1;
            if(new_poss.x > globals::MAP_WIDTH) new_poss.x = globals::MAP_WIDTH-1;

            break;
        case Direction::NORTH_WEST:
            new_poss = { (this->curr_possiton.x - (this->move_disstance/2 + 1) ), (this->curr_possiton.y - (this->move_disstance/2 + 1) ) };
            if(new_poss.y < 1) new_poss.y = 1;
            if(new_poss.x < 1) new_poss.x = 1;

            break;
        case Direction::SOUTH_EAST:
            new_poss = { (this->curr_possiton.x + (this->move_disstance/2 + 1) ), (this->curr_possiton.y + (this->move_disstance/2 + 1) ) };
            if(new_poss.y > globals::MAP_HEIGHT) new_poss.y = globals::MAP_HEIGHT-1;
            if(new_poss.x > globals::MAP_WIDTH) new_poss.x = globals::MAP_WIDTH-1;

            break;
        case Direction::SOUTH_WEST:
            new_poss = { (this->curr_possiton.x - (this->move_disstance/2 + 1) ), (this->curr_possiton.y + (this->move_disstance/2 + 1) ) };
            if(new_poss.y > globals::MAP_HEIGHT) new_poss.y = globals::MAP_HEIGHT-1;
            if(new_poss.x < 1) new_poss.x = 1;

            break;
    }
    this->curr_possiton = new_poss;

    std::cerr << curr_possiton.x << " " << curr_possiton.y << "\n";

    subject.Notify(*this, Event::ENTIETIES_MOVE);
}

izrael::Entities_group::~Entities_group() noexcept
{
    Entities_group::free_ids.push( this->entity_id );
}
