//
// Created by Jo on 19/12/2016.
//

#include "M2124.h"

M2124::M2124(const EventHandler &e) : Minion(e) {
    this->set_id(2124);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Thane Korth’azz");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(7);
}

void M2124::init() {
}