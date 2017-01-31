//
// Created by Jo on 19/12/2016.
//

#include "M39491.h"

M39491::M39491(const EventHandler &e) : Minion(e) {
    this->set_id(39491);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Forge-Arcanes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M39491::init() {
}