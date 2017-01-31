//
// Created by Jo on 19/12/2016.
//

#include "M2389.h"

M2389::M2389(const EventHandler &e) : Minion(e) {
    this->set_id(2389);
    this->set_attackMax(2);
    this->set_defaultCost(0);
    this->set_name("Arcanotron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2389::init() {
}