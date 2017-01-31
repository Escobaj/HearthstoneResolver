//
// Created by Jo on 19/12/2016.
//

#include "M42131.h"

M42131::M42131(const EventHandler &e) : Minion(e) {
    this->set_id(42131);
    this->set_attackMax(23);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(23);
    this->set_maxHealth(23);
}

void M42131::init() {
}