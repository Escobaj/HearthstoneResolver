//
// Created by Jo on 19/12/2016.
//

#include "M2087.h"

M2087::M2087(const EventHandler &e) : Minion(e) {
    this->set_id(2087);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Bling-o-tron 3000");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2087::init() {
}