//
// Created by Jo on 19/12/2016.
//

#include "M1876.h"

M1876::M1876(const EventHandler &e) : Minion(e) {
    this->set_id(1876);
    this->set_attackMax(0);
    this->set_defaultCost(3);
    this->set_name("Guerrier spectral");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M1876::init() {
}