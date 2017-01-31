//
// Created by Jo on 19/12/2016.
//

#include "M2512.h"

M2512::M2512(const EventHandler &e) : Minion(e) {
    this->set_id(2512);
    this->set_attackMax(8);
    this->set_defaultCost(10);
    this->set_name("Géant du givre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M2512::init() {
}