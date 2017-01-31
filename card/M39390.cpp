//
// Created by Jo on 19/12/2016.
//

#include "M39390.h"

M39390::M39390(const EventHandler &e) : Minion(e) {
    this->set_id(39390);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Cavalier blanc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M39390::init() {
}