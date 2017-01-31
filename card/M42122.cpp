//
// Created by Jo on 19/12/2016.
//

#include "M42122.h"

M42122::M42122(const EventHandler &e) : Minion(e) {
    this->set_id(42122);
    this->set_attackMax(15);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(15);
    this->set_maxHealth(15);
}

void M42122::init() {
}