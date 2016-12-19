//
// Created by escoba_j on 13/12/2016.
//

#include "AEntity.h"

AEntity::AEntity(Minion *minion) {
    _type = EntityType::MINION;
    _reference = _minion = minion;
    _spell = NULL;
    _weapon = NULL;
    _heroPower = NULL;
}

AEntity::AEntity(Spell *spell) {
    _type = EntityType::SPELL;
    _reference = _spell = spell;
    _minion = NULL;
    _heroPower = NULL;
    _weapon = NULL;
}

AEntity::AEntity(Weapon *weapon) {
    _type = EntityType::WEAPON;
    _reference = _weapon = weapon;
    _minion = NULL;
    _heroPower = NULL;
    _spell = NULL;
}

AEntity::AEntity(HeroPower *heroPower) {
    _type = EntityType::HERO_POWER;
    _heroPower = heroPower;
    _minion = NULL;
    _spell = NULL;
    _weapon = NULL;
}

ACard *AEntity::get_reference() const {
    return _reference;
}