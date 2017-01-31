//
// Created by Jo on 19/12/2016.
//

#include "M1865.h"

M1865::M1865(const EventHandler &e) : Minion(e) {
    this->set_id(1865);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Spore");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M1865::init() {
}