//
// Created by Jo on 19/12/2016.
//

#include "M2543.h"

M2543::M2543(const EventHandler &e) : Minion(e) {
    this->set_id(2543);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Sanglier");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M2543::init() {
}