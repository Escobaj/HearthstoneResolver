//
// Created by Jo on 19/12/2016.
//

#include "M2278.h"

M2278::M2278(const EventHandler &e) : Minion(e) {
    this->set_id(2278);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Œuf de dragon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M2278::init() {
}