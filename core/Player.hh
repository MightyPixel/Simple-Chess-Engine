#ifndef PLAYER__HH
#define PLAYER__HH

#include <iostream>

//
// Created by Ognyan Angelov
// 2013
//
// Class that implements player functionality
class Player
{
    const char* name;
public:
    Player(const char* Name);

    // Geters and Setters
    const char* getName() const;
};

std::ostream& operator << (std::ostream& out, const Player& player);

#endif
