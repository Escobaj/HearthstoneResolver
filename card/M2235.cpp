//
// Created by Jo on 19/12/2016.
//

#include "M2235.h"

M2235::M2235(const EventHandler &e) : Minion(e) {
    this->set_id(2235);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Ro’Boum");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2235::init() {
}