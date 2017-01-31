//
// Created by Jo on 19/12/2016.
//

#include "M42125.h"

M42125::M42125(const EventHandler &e) : Minion(e) {
    this->set_id(42125);
    this->set_attackMax(18);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(18);
    this->set_maxHealth(18);
}

void M42125::init() {
}