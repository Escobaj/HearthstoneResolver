//
// Created by Jo on 19/12/2016.
//

#include "M2424.h"

M2424::M2424(const EventHandler &e) : Minion(e) {
    this->set_id(2424);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Spectateur sombrefer");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2424::init() {
}