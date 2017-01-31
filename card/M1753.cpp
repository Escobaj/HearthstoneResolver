//
// Created by Jo on 19/12/2016.
//

#include "M1753.h"

M1753::M1753(const EventHandler &e) : Minion(e) {
    this->set_id(1753);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Croq’zombie");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M1753::init() {
}