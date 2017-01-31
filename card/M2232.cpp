//
// Created by Jo on 19/12/2016.
//

#include "M2232.h"

M2232::M2232(const EventHandler &e) : Minion(e) {
    this->set_id(2232);
    this->set_attackMax(4);
    this->set_defaultCost(8);
    this->set_name("V-07-TR-0N");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(4);
    this->set_maxHealth(8);
}

void M2232::init() {
}