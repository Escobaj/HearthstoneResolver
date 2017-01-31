//
// Created by Jo on 19/12/2016.
//

#include "M2052.h"

M2052::M2052(const EventHandler &e) : Minion(e) {
    this->set_id(2052);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Machine volante");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M2052::init() {
}