//
// Created by escoba_j on 13/12/2016.
//

#ifndef HEARTHSTONERESOLVER_AENTITY_H
#define HEARTHSTONERESOLVER_AENTITY_H

#include "../Type/EntityType.h"
#include "../Entities/Minion.h"
#include "../Entities/Spell.h"
#include "../Entities/HeroPower.h"
#include "../Entities/Weapon.h"

class AEntity {
public:
    int _order;
    EntityType _type;

    AEntity(Minion *minion);
    AEntity(Spell *spell);
    AEntity(Weapon *weapon);
    AEntity(HeroPower *heroPower);
    ACard *get_reference() const;
private:
    ACard *_reference;
    Minion *_minion;
    Spell *_spell;
    Weapon *_weapon;
    HeroPower *_heroPower;
};


#endif //HEARTHSTONERESOLVER_AENTITY_H
