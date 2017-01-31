//
// Created by Jo on 19/12/2016.
//

#include "M42128.h"

M42128::M42128(const EventHandler &e) : Minion(e) {
    this->set_id(42128);
    this->set_attackMax(20);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(20);
    this->set_maxHealth(20);
}

void M42128::init() {
}