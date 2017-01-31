//
// Created by Jo on 19/12/2016.
//

#include "M2399.h"

M2399::M2399(const EventHandler &e) : Minion(e) {
    this->set_id(2399);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Aberration");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2399::init() {
}