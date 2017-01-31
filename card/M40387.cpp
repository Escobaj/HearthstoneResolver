//
// Created by Jo on 19/12/2016.
//

#include "M40387.h"

M40387::M40387(const EventHandler &e) : Minion(e) {
    this->set_id(40387);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Traqueuse de dragon intrépide");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40387::init() {
}