//
// Created by Jo on 19/12/2016.
//

#include "M2700.h"

M2700::M2700(const EventHandler &e) : Minion(e) {
    this->set_id(2700);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Chiot du magma");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2700::init() {
}