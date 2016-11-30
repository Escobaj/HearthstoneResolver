//
// Created by escoba_j on 29/11/2016.
//

#include "ATargetable.h"

int ATargetable::get_currentHealth() const {
    return _currentHealth;
}

void ATargetable::set_currentHealth(int _currentHealth) {
    ATargetable::_currentHealth = _currentHealth;
}

int ATargetable::get_defaultHealth() const {
    return _defaultHealth;
}

void ATargetable::set_defaultHealth(int _defaultHealth) {
    ATargetable::_defaultHealth = _defaultHealth;
}

int ATargetable::get_maxHealth() const {
    return _maxHealth;
}

void ATargetable::set_maxHealth(int _maxHealth) {
    ATargetable::_maxHealth = _maxHealth;
}
