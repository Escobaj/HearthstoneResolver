//
// Created by Jo on 19/12/2016.
//

#include "M39003.h"

M39003::M39003(const EventHandler &e) : Minion(e) {
    this->set_id(39003);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Tentacule remuant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M39003::init() {
}