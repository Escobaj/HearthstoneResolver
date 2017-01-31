//
// Created by Jo on 19/12/2016.
//

#include "M1016.h"

M1016::M1016(const EventHandler &e) : Minion(e) {
    this->set_id(1016);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Oracle froide-lumière");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1016::init() {
}