//
// Created by Jo on 19/12/2016.
//

#include "M39384.h"

M39384::M39384(const EventHandler &e) : Minion(e) {
    this->set_id(39384);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Tour noire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M39384::init() {
}