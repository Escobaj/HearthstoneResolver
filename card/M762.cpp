//
// Created by Jo on 19/12/2016.
//

#include "M762.h"

M762::M762(const EventHandler &e) : Minion(e) {
    this->set_id(762);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Bombardier fou");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M762::init() {
}