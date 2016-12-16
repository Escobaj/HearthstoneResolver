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
private:
    ACard *_reference;
public:
    ACard *get_reference() const;

private:
    Minion *_minion;
    Spell *_spell;
    Weapon *_weapon;
    HeroPower *_heroPower;
public:
    int _order;
    EntityType _type;

    AEntity(Minion *minion, int order);
    AEntity(Spell *spell, int order);
    AEntity(Weapon *weapon, int order);
    AEntity(HeroPower *heroPower, int order);
};


#endif //HEARTHSTONERESOLVER_AENTITY_H
