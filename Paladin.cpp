#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin( const std::string& name_, int hp_, int armor_)
    : Character(hp_, armor_, 10),
    name(name_)
{
    helpfulItems = makeHelpfulItems(3); 
    defensiveItems = makeDefensiveItems(7);
}

// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
