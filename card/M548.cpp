//
// Created by Jo on 19/12/2016.
//

#include "M548.h"

M548::M548(const EventHandler &e) : Minion(e) {
    this->set_id(548);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Grenouille");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M548::init() {
}