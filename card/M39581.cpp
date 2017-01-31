//
// Created by Jo on 19/12/2016.
//

#include "M39581.h"

M39581::M39581(const EventHandler &e) : Minion(e) {
    this->set_id(39581);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Couteau");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(1);
}

void M39581::init() {
}