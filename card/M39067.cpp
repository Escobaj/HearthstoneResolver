//
// Created by Jo on 19/12/2016.
//

#include "M39067.h"

M39067::M39067(const EventHandler &e) : Minion(e) {
    this->set_id(39067);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Gluth");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M39067::init() {
}