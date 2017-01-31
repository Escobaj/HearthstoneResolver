//
// Created by Jo on 19/12/2016.
//

#include "M2994.h"

M2994::M2994(const EventHandler &e) : Minion(e) {
    this->set_id(2994);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Rocher");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(6);
}

void M2994::init() {
}