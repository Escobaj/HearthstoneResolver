//
// Created by Jo on 19/12/2016.
//

#include "M39385.h"

M39385::M39385(const EventHandler &e) : Minion(e) {
    this->set_id(39385);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Pion blanc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(6);
}

void M39385::init() {
}