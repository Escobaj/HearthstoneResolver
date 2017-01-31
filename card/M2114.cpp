//
// Created by Jo on 19/12/2016.
//

#include "M2114.h"

M2114::M2114(const EventHandler &e) : Minion(e) {
    this->set_id(2114);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Squelette");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2114::init() {
}