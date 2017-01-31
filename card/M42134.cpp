//
// Created by Jo on 19/12/2016.
//

#include "M42134.h"

M42134::M42134(const EventHandler &e) : Minion(e) {
    this->set_id(42134);
    this->set_attackMax(26);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(26);
    this->set_maxHealth(26);
}

void M42134::init() {
}