//
// Created by Jo on 19/12/2016.
//

#include "M42377.h"

M42377::M42377(const EventHandler &e) : Minion(e) {
    this->set_id(42377);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Coffre d’or !");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M42377::init() {
}