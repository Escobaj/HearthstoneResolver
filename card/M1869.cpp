//
// Created by Jo on 19/12/2016.
//

#include "M1869.h"

M1869::M1869(const EventHandler &e) : Minion(e) {
    this->set_id(1869);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Doublure");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(7);
}

void M1869::init() {
}