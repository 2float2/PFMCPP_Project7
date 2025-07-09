#include "DefensiveItem.h"
#include "Character.h"
#include "Utility.h"


void DefensiveItem::use(Character* character)
{
    //make your defensive item use the appropriate Utility helper functions
    useDefensiveItem(character, *this);
}
