//
// Created by escoba_j on 29/11/2016.
//

#include "ADamager.h"

State ADamager::play(unsigned int order) {
    return State::FORBIDDEN;
}

unsigned int ADamager::get_defaultDamage() const {
    return _defaultDamage;
}

void ADamager::set_defaultDamage(unsigned int _defaultDamage) {
    ADamager::_defaultDamage = _defaultDamage;
}

unsigned int ADamager::get_currentDamage() const {
    return _currentDamage;
}

void ADamager::set_currentDamage(unsigned int _currentDamage) {
    ADamager::_currentDamage = _currentDamage;
}

unsigned int ADamager::get_attackMax() const {
    return _attackMax;
}

void ADamager::set_attackMax(unsigned int _attackMax) {
    ADamager::_attackMax = _attackMax;
}

unsigned int ADamager::getAttackRemain() const {
    return attackRemain;
}

void ADamager::setAttackRemain(unsigned int attackRemain) {
    ADamager::attackRemain = attackRemain;
}

bool ADamager::is_canAttack() const {
    return _canAttack;
}

void ADamager::set_canAttack(bool _canAttack) {
    ADamager::_canAttack = _canAttack;
}
