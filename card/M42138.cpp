//
// Created by Jo on 19/12/2016.
//

#include "M42138.h"

M42138::M42138(const EventHandler &e) : Minion(e) {
    this->set_id(42138);
    this->set_attackMax(30);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(30);
    this->set_maxHealth(30);
}

void M42138::init() {
}