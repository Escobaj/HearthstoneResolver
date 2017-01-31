//
// Created by Jo on 19/12/2016.
//

#include "M1873.h"

M1873::M1873(const EventHandler &e) : Minion(e) {
    this->set_id(1873);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Jeune recrue tenace");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1873::init() {
}