//
// Created by Jo on 19/12/2016.
//

#include "M42130.h"

M42130::M42130(const EventHandler &e) : Minion(e) {
    this->set_id(42130);
    this->set_attackMax(22);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(22);
    this->set_maxHealth(22);
}

void M42130::init() {
}