//
// Created by Jo on 19/12/2016.
//

#include "M1799.h"

M1799::M1799(const EventHandler &e) : Minion(e) {
    this->set_id(1799);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Âme gémissante");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M1799::init() {
}