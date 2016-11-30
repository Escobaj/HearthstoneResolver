//
// Created by escoba_j on 29/11/2016.
//

#include "ACard.h"

unsigned int ACard::get_defaultCost() const {
    return _defaultCost;
}

void ACard::set_defaultCost(unsigned int _defaultCost) {
    ACard::_defaultCost = _defaultCost;
}

unsigned int ACard::get_currentCost() const {
    if (_currentCost < 0) {
        return 0;
    }
    return (unsigned int)_currentCost;
}

void ACard::set_currentCost(int _currentCost) {

    ACard::_currentCost = _currentCost;
}

Target ACard::get_target() const {
    return _target;
}

void ACard::set_target(Target _target) {
    ACard::_target = _target;
}

unsigned int ACard::get_order() const {
    return _order;
}

void ACard::set_order(unsigned int _order) {
    ACard::_order = _order;
}

unsigned int ACard::get_id() const {
    return _id;
}

void ACard::set_id(unsigned int _id) {
    ACard::_id = _id;
}

const std::string &ACard::get_name() const {
    return _name;
}

void ACard::set_name(const std::string &_name) {
    ACard::_name = _name;
}

Class ACard::get_membership() const {
    return _membership;
}

void ACard::set_membership(Class _membership) {
    ACard::_membership = _membership;
}