//
// Created by Jo on 19/12/2016.
//

#include "M11133.h"

M11133::M11133(const EventHandler &e) : Minion(e) {
    this->set_id(11133);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Keith Landes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M11133::init() {
}