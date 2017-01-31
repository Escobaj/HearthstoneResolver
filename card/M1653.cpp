//
// Created by Jo on 19/12/2016.
//

#include "M1653.h"

M1653::M1653(const EventHandler &e) : Minion(e) {
    this->set_id(1653);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Enragé du magma");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(1);
}

void M1653::init() {
}