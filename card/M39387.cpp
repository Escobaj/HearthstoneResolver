//
// Created by Jo on 19/12/2016.
//

#include "M39387.h"

M39387::M39387(const EventHandler &e) : Minion(e) {
    this->set_id(39387);
    this->set_attackMax(0);
    this->set_defaultCost(3);
    this->set_name("Fou blanc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(6);
}

void M39387::init() {
}