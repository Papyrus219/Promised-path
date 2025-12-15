#include "./entities_group.hpp"
#include "../globals.hpp"
#include "../tools/event.hpp"

using namespace izrael;

void izrael::Entities_group::Move()
{
    sf::Vector2u new_poss{};

    switch(this->curr_dirrection)
    {//NIE DZIAŁA! NAPRAW DEBILU!
        case Direction::NORTH:
            new_poss = static_cast<sf::Vector2u>( this->curr_possiton + sf::Vector2i{-this->move_disstance, 0} );
            if(new_poss.y < 1) new_poss.y = 1;

            break;
        case Direction::SOUTH:
            new_poss = this->curr_possiton + sf::Vector2u{this->move_disstance, 0};
            if(new_poss.y > MAP_HEIGHT) new_poss.y = MAP_HEIGHT-1;

            break;
        case Direction::EAST:
            new_poss = this->curr_possiton + sf::Vector2u{0, this->move_disstance};
            if(new_poss.x > MAP_WIDTH) new_poss.x = MAP_WIDTH-1;

            break;
        case Direction::WEST:
            new_poss = this->curr_possiton + sf::Vector2u{0, -this->move_disstance};
            if(new_poss.x < 1) new_poss.x = 1;

            break;
        case Direction::NORTH_EAST:
            new_poss = this->curr_possiton + sf::Vector2u{ -(this->move_disstance/2 + 1), (this->move_disstance/2 + 1)};
            if(new_poss.y < 1) new_poss.y = 1;
            if(new_poss.x > MAP_WIDTH) new_poss.x = MAP_WIDTH-1;

            break;
        case Direction::NORTH_WEST:
            new_poss = this->curr_possiton + sf::Vector2u{-(this->move_disstance/2 + 1), -(this->move_disstance/2 + 1)};
            if(new_poss.y < 1) new_poss.y = 1;
            if(new_poss.x < 1) new_poss.x = 1;

            break;
        case Direction::SOUTH_EAST:
            new_poss = this->curr_possiton + sf::Vector2u{(this->move_disstance/2 + 1), (this->move_disstance/2 + 1)};
            if(new_poss.y > MAP_HEIGHT) new_poss.y = MAP_HEIGHT-1;
            if(new_poss.x > MAP_WIDTH) new_poss.x = MAP_WIDTH-1;

            break;
        case Direction::SOUTH_WEST:
            new_poss = this->curr_possiton + sf::Vector2u{(this->move_disstance/2 + 1), -(this->move_disstance/2 + 1)};
            if(new_poss.y > MAP_HEIGHT) new_poss.y = MAP_HEIGHT-1;
            if(new_poss.x < 1) new_poss.x = 1;

            break;
    }
    this->curr_possiton = new_poss;

    subject.Notify(*this, Event::ENTIETIES_MOVE);
}
