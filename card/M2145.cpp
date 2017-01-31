//
// Created by Jo on 19/12/2016.
//

#include "M2145.h"

M2145::M2145(const EventHandler &e) : Minion(e) {
    this->set_id(2145);
    this->set_attackMax(7);
    this->set_defaultCost(5);
    this->set_name("Stalagg");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(4);
}

void M2145::init() {
}