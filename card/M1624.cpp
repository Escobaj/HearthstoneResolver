//
// Created by Jo on 19/12/2016.
//

#include "M1624.h"

M1624::M1624(const EventHandler &e) : Minion(e) {
    this->set_id(1624);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Hyène");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1624::init() {
}