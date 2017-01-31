//
// Created by Jo on 19/12/2016.
//

#include "M39173.h"

M39173::M39173(const EventHandler &e) : Minion(e) {
    this->set_id(39173);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Félin surprise");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M39173::init() {
}