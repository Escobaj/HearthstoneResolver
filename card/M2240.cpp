//
// Created by Jo on 19/12/2016.
//

#include "M2240.h"

M2240::M2240(const EventHandler &e) : Minion(e) {
    this->set_id(2240);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Poulet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2240::init() {
}