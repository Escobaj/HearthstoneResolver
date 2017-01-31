//
// Created by Jo on 19/12/2016.
//

#include "M2799.h"

M2799::M2799(const EventHandler &e) : Minion(e) {
    this->set_id(2799);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Kodo de guerre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M2799::init() {
}