//
// Created by escoba_j on 30/11/2016.
//

#include "Minion.h"

State Minion::play(unsigned int order) {
    return ADamager::play(order);
}

bool Minion::is_targetable() const {
    return _targetable;
}

void Minion::set_targetable(bool _targetable) {
    Minion::_targetable = _targetable;
}

bool Minion::is_imun() const {
    return _imun;
}

void Minion::set_imun(bool _imun) {
    Minion::_imun = _imun;
}

bool Minion::is_stealth() const {
    return _stealth;
}

void Minion::set_stealth(bool _stealth) {
    Minion::_stealth = _stealth;
}

bool Minion::is_taunt() const {
    return _taunt;
}

void Minion::set_taunt(bool _taunt) {
    Minion::_taunt = _taunt;
}

bool Minion::is_divineShield() const {
    return _divineShield;
}

void Minion::set_divineShield(bool _divineShield) {
    Minion::_divineShield = _divineShield;
}

CardType Minion::get_type() const {
    return _type;
}

void Minion::set_type(CardType _type) {
    Minion::_type = _type;
}
