//
// Created by Jo on 19/12/2016.
//

#include "M39582.h"

M39582::M39582(const EventHandler &e) : Minion(e) {
    this->set_id(39582);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Tasse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M39582::init() {
}