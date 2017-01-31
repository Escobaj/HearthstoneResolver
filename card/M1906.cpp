//
// Created by Jo on 19/12/2016.
//

#include "M1906.h"

M1906::M1906(const EventHandler &e) : Minion(e) {
    this->set_id(1906);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Champion gelé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(10);
}

void M1906::init() {
}