#pragma once
#include "Character.h" // already includes Item.h

struct Character;

struct DragonSlayer : Character
{
    DragonSlayer( const std::string& name_, int hp_, int armor_);
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
    std::unique_ptr<Item> attackItem;
};
