//
// Created by escoba_j on 30/11/2016.
//

#include "Weapon.h"

State Weapon::play(unsigned int order) {
    return ADamager::play(order);
}

unsigned int Weapon::get_defaultDurability() const {
    return _defaultDurability;
}

void Weapon::set_defaultDurability(unsigned int _defaultDurability) {
    Weapon::_defaultDurability = _defaultDurability;
}

unsigned int Weapon::get_currentDurability() const {
    return _currentDurability;
}

void Weapon::set_currentDurability(unsigned int _currentDurability) {
    Weapon::_currentDurability = _currentDurability;
}

Weapon::Weapon(const EventHandler &e) : ADamager(e) {}
