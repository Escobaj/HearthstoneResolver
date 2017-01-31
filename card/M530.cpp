//
// Created by Jo on 19/12/2016.
//

#include "M530.h"

M530::M530(const EventHandler &e) : Minion(e) {
    this->set_id(530);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Perroquet du capitaine");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M530::init() {
}