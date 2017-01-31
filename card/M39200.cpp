//
// Created by Jo on 19/12/2016.
//

#include "M39200.h"

M39200::M39200(const EventHandler &e) : Minion(e) {
    this->set_id(39200);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Théière");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M39200::init() {
}