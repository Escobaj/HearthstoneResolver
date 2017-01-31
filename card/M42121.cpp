//
// Created by Jo on 19/12/2016.
//

#include "M42121.h"

M42121::M42121(const EventHandler &e) : Minion(e) {
    this->set_id(42121);
    this->set_attackMax(14);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(14);
    this->set_maxHealth(14);
}

void M42121::init() {
}