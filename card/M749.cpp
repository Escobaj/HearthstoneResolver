//
// Created by Jo on 19/12/2016.
//

#include "M749.h"

M749::M749(const EventHandler &e) : Minion(e) {
    this->set_id(749);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Mage de sang Thalnos");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M749::init() {
}