//
// Created by Jo on 19/12/2016.
//

#include "M1782.h"

M1782::M1782(const EventHandler &e) : Minion(e) {
    this->set_id(1782);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Araignée spectrale");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1782::init() {
}