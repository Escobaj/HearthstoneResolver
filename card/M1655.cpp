//
// Created by Jo on 19/12/2016.
//

#include "M1655.h"

M1655::M1655(const EventHandler &e) : Minion(e) {
    this->set_id(1655);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Gardelumière");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M1655::init() {
}