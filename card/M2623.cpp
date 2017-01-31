//
// Created by Jo on 19/12/2016.
//

#include "M2623.h"

M2623::M2623(const EventHandler &e) : Minion(e) {
    this->set_id(2623);
    this->set_attackMax(4);
    this->set_defaultCost(2);
    this->set_name("Garde-courroux");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2623::init() {
}