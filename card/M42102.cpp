//
// Created by Jo on 19/12/2016.
//

#include "M42102.h"

M42102::M42102(const EventHandler &e) : Minion(e) {
    this->set_id(42102);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M42102::init() {
}