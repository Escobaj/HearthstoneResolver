//
// Created by Jo on 19/12/2016.
//

#include "M2003.h"

M2003::M2003(const EventHandler &e) : Minion(e) {
    this->set_id(2003);
    this->set_attackMax(9);
    this->set_defaultCost(7);
    this->set_name("Malorne");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(9);
    this->set_maxHealth(7);
}

void M2003::init() {
}