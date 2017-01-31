//
// Created by Jo on 19/12/2016.
//

#include "M2993.h"

M2993::M2993(const EventHandler &e) : Minion(e) {
    this->set_id(2993);
    this->set_attackMax(6);
    this->set_defaultCost(4);
    this->set_name("Singe doré");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2993::init() {
}