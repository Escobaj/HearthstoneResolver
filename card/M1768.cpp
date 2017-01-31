//
// Created by Jo on 19/12/2016.
//

#include "M1768.h"

M1768::M1768(const EventHandler &e) : Minion(e) {
    this->set_id(1768);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Ben Brode");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(1);
}

void M1768::init() {
}