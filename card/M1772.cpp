//
// Created by Jo on 19/12/2016.
//

#include "M1772.h"

M1772::M1772(const EventHandler &e) : Minion(e) {
    this->set_id(1772);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Rachelle Davis");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M1772::init() {
}