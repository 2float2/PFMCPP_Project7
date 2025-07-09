#include "Paladin.h"

// Paladin::Paladin
Paladin::Paladin( const std::string& name_, int hp_, int armor_)
    : Character(hp_, armor_, 10)
{ }

// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
    return "Dragon stats";
}