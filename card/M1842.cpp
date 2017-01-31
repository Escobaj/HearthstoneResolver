//
// Created by Jo on 19/12/2016.
//

#include "M1842.h"

M1842::M1842(const EventHandler &e) : Minion(e) {
    this->set_id(1842);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Adorateur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M1842::init() {
}