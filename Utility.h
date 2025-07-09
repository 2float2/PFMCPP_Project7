#pragma once

#include <vector>
#include <memory>
#include "Item.h"


std::vector<std::unique_ptr<Item>> makeHelpfulItems(int num);

std::vector<std::unique_ptr<Item>> makeDefensiveItems(int num);

struct Character;
std::string getCharacterStats(Character* ch);

void useDefensiveItem(Character* character, Item&);
void useHelpfulItem(Character* character, Item*);
void useAttackItem(Character* character, Item*);