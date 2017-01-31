//
// Created by Jo on 19/12/2016.
//

#include "M2525.h"

M2525::M2525(const EventHandler &e) : Minion(e) {
    this->set_id(2525);
    this->set_attackMax(8);
    this->set_defaultCost(3);
    this->set_name("Gyth");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M2525::init() {
}