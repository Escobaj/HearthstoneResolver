//
// Created by Jo on 19/12/2016.
//

#include "M1880.h"

M1880::M1880(const EventHandler &e) : Minion(e) {
    this->set_id(1880);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Thane Korth’azz");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(7);
}

void M1880::init() {
}