//
// Created by Jo on 19/12/2016.
//

#include "M42099.h"

M42099::M42099(const EventHandler &e) : Minion(e) {
    this->set_id(42099);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M42099::init() {
}