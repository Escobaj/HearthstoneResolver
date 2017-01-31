//
// Created by Jo on 19/12/2016.
//

#include "M42225.h"

M42225::M42225(const EventHandler &e) : Minion(e) {
    this->set_id(42225);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Champion bovin infernal");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M42225::init() {
}