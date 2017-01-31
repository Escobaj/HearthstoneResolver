//
// Created by Jo on 19/12/2016.
//

#include "M158.h"

M158::M158(const EventHandler &e) : Minion(e) {
    this->set_id(158);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Gardienne des secrets");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M158::init() {
}