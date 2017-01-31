//
// Created by Jo on 19/12/2016.
//

#include "M2083.h"

M2083::M2083(const EventHandler &e) : Minion(e) {
    this->set_id(2083);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Toshley");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(7);
}

void M2083::init() {
}