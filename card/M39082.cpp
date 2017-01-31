//
// Created by Jo on 19/12/2016.
//

#include "M39082.h"

M39082::M39082(const EventHandler &e) : Minion(e) {
    this->set_id(39082);
    this->set_attackMax(0);
    this->set_defaultCost(3);
    this->set_name("Gothik spectral");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M39082::init() {
}