//
// Created by Jo on 19/12/2016.
//

#include "M2071.h"

M2071::M2071(const EventHandler &e) : Minion(e) {
    this->set_id(2071);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Micro-machine");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M2071::init() {
}