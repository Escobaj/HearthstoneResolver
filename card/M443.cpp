//
// Created by Jo on 19/12/2016.
//

#include "M443.h"

M443::M443(const EventHandler &e) : Minion(e) {
    this->set_id(443);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Crabe affamé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M443::init() {
}