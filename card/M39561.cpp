//
// Created by Jo on 19/12/2016.
//

#include "M39561.h"

M39561::M39561(const EventHandler &e) : Minion(e) {
    this->set_id(39561);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Romulo");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M39561::init() {
}