//
// Created by Jo on 19/12/2016.
//

#include "M39198.h"

M39198::M39198(const EventHandler &e) : Minion(e) {
    this->set_id(39198);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Balai");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M39198::init() {
}