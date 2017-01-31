//
// Created by Jo on 19/12/2016.
//

#include "M40273.h"

M40273::M40273(const EventHandler &e) : Minion(e) {
    this->set_id(40273);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Romulo");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M40273::init() {
}