//
// Created by Jo on 19/12/2016.
//

#include "M42123.h"

M42123::M42123(const EventHandler &e) : Minion(e) {
    this->set_id(42123);
    this->set_attackMax(16);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(16);
    this->set_maxHealth(16);
}

void M42123::init() {
}