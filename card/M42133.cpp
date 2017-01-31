//
// Created by Jo on 19/12/2016.
//

#include "M42133.h"

M42133::M42133(const EventHandler &e) : Minion(e) {
    this->set_id(42133);
    this->set_attackMax(25);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(25);
    this->set_maxHealth(25);
}

void M42133::init() {
}