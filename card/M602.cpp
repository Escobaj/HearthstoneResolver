//
// Created by Jo on 19/12/2016.
//

#include "M602.h"

M602::M602(const EventHandler &e) : Minion(e) {
    this->set_id(602);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Rampant des tourbières");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M602::init() {
}