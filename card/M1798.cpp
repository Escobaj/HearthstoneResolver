//
// Created by Jo on 19/12/2016.
//

#include "M1798.h"

M1798::M1798(const EventHandler &e) : Minion(e) {
    this->set_id(1798);
    this->set_attackMax(11);
    this->set_defaultCost(10);
    this->set_name("Thaddius");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(11);
    this->set_maxHealth(11);
}

void M1798::init() {
}