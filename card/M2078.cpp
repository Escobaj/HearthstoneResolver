//
// Created by Jo on 19/12/2016.
//

#include "M2078.h"

M2078::M2078(const EventHandler &e) : Minion(e) {
    this->set_id(2078);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Dr Boum");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2078::init() {
}