//
// Created by escoba_j on 29/11/2016.
//

#include "HeroPower.h"

State HeroPower::play(unsigned int order) {
    return State::FORBIDDEN;
}

int HeroPower::get_remainUsage() const {
    return _remainUsage;
}

void HeroPower::set_remainUsage(int _remainUsage) {
    HeroPower::_remainUsage = _remainUsage;
}

int HeroPower::get_currentUsage() const {
    return _currentUsage;
}

void HeroPower::set_currentUsage(int _currentUsage) {
    HeroPower::_currentUsage = _currentUsage;
}

HeroPower::HeroPower(const EventHandler &e) : ACard(e) {}
