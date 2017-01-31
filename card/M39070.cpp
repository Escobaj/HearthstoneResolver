//
// Created by Jo on 19/12/2016.
//

#include "M39070.h"

M39070::M39070(const EventHandler &e) : Minion(e) {
    this->set_id(39070);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Grobbulus");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(7);
}

void M39070::init() {
}