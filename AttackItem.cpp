#include "AttackItem.h"
#include "Character.h"
#include "Utility.h"

void AttackItem::use(Character* character)
{
    //make your defensive item use the appropriate Utility helper functions
    useAttackItem(character, this);
}
