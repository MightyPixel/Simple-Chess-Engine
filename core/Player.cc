#include "Player.hh"

Player::Player(const char* Name)
    : name(Name)
{

}

const char* Player::getName() const
{
    return name;
}

std::ostream& operator << (std::ostream& out, const Player& player)
{
    out << player.getName();

    return out;
}
