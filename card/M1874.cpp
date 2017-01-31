//
// Created by Jo on 19/12/2016.
//

#include "M1874.h"

M1874::M1874(const EventHandler &e) : Minion(e) {
    this->set_id(1874);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Jeune recrue spectrale");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M1874::init() {
}