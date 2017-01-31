//
// Created by Jo on 19/12/2016.
//

#include "M42055.h"

M42055::M42055(const EventHandler &e) : Minion(e) {
    this->set_id(42055);
    this->set_attackMax(9);
    this->set_defaultCost(9);
    this->set_name("Dr Boum Boum Boum Boum");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(9);
}

void M42055::init() {
}