//
// Created by escoba_j on 13/12/2016.
//

#include "AEntity.h"

AEntity::AEntity(Minion *minion, int order) {
    _type = EntityType::MINION;
    _order = order;
    _reference = _minion = minion;
    _spell = NULL;
    _weapon = NULL;
    _heroPower = NULL;
}

AEntity::AEntity(Spell *spell, int order) {
    _type = EntityType::SPELL;
    _order = order;
    _reference = _spell = spell;
    _minion = NULL;
    _heroPower = NULL;
    _weapon = NULL;
}

AEntity::AEntity(Weapon *weapon, int order) {
    _type = EntityType::WEAPON;
    _order = order;
    _reference = _weapon = weapon;
    _minion = NULL;
    _heroPower = NULL;
    _spell = NULL;
}

AEntity::AEntity(HeroPower *heroPower, int order) {
    _type = EntityType::HERO_POWER;
    _order = order;
    _heroPower = heroPower;
    _minion = NULL;
    _spell = NULL;
    _weapon = NULL;
}

ACard *AEntity::get_reference() const {
    return _reference;
}

