//
// Created by Jo on 19/12/2016.
//

#include "M2696.h"

M2696::M2696(const EventHandler &e) : Minion(e) {
    this->set_id(2696);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Coren Navrebière");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(8);
}

void M2696::init() {
}