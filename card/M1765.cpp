//
// Created by Jo on 19/12/2016.
//

#include "M1765.h"

M1765::M1765(const EventHandler &e) : Minion(e) {
    this->set_id(1765);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Kyle Harrison");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M1765::init() {
}