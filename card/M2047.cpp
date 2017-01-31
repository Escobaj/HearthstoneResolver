//
// Created by Jo on 19/12/2016.
//

#include "M2047.h"

M2047::M2047(const EventHandler &e) : Minion(e) {
    this->set_id(2047);
    this->set_attackMax(7);
    this->set_defaultCost(8);
    this->set_name("Char de force MAX");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2047::init() {
}