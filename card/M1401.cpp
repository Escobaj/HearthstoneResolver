//
// Created by Jo on 19/12/2016.
//

#include "M1401.h"

M1401::M1401(const EventHandler &e) : Minion(e) {
    this->set_id(1401);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Chef de raid");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1401::init() {
}