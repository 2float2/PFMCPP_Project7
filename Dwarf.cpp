#include "Dwarf.h"

//Dwarf::Dwarf
Dwarf::Dwarf( const std::string& name_, int hp_, int armor_)
    : Character(hp_, armor_, 4)
{ }

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return "Dragon stats";
}