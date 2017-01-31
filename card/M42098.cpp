//
// Created by Jo on 19/12/2016.
//

#include "M42098.h"

M42098::M42098(const EventHandler &e) : Minion(e) {
    this->set_id(42098);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M42098::init() {
}