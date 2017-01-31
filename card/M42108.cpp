//
// Created by Jo on 19/12/2016.
//

#include "M42108.h"

M42108::M42108(const EventHandler &e) : Minion(e) {
    this->set_id(42108);
    this->set_attackMax(11);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(11);
    this->set_maxHealth(11);
}

void M42108::init() {
}