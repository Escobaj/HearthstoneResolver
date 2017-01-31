//
// Created by Jo on 19/12/2016.
//

#include "M42104.h"

M42104::M42104(const EventHandler &e) : Minion(e) {
    this->set_id(42104);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M42104::init() {
}