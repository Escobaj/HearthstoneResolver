//
// Created by Jo on 19/12/2016.
//

#include "M298.h"

M298::M298(const EventHandler &e) : Minion(e) {
    this->set_id(298);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Sanglier");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M298::init() {
}