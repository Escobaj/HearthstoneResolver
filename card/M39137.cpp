//
// Created by Jo on 19/12/2016.
//

#include "M39137.h"

M39137::M39137(const EventHandler &e) : Minion(e) {
    this->set_id(39137);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Porte-pavois");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M39137::init() {
}