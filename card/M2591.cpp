//
// Created by Jo on 19/12/2016.
//

#include "M2591.h"

M2591::M2591(const EventHandler &e) : Minion(e) {
    this->set_id(2591);
    this->set_attackMax(4);
    this->set_defaultCost(1);
    this->set_name("Toxitron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2591::init() {
}