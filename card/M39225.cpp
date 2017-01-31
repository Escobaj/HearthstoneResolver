//
// Created by Jo on 19/12/2016.
//

#include "M39225.h"

M39225::M39225(const EventHandler &e) : Minion(e) {
    this->set_id(39225);
    this->set_attackMax(4);
    this->set_defaultCost(7);
    this->set_name("Le conservateur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M39225::init() {
}