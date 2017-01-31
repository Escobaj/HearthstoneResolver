//
// Created by Jo on 19/12/2016.
//

#include "M36023.h"

M36023::M36023(const EventHandler &e) : Minion(e) {
    this->set_id(36023);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Hoplite tol’vir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(2);
}

void M36023::init() {
}