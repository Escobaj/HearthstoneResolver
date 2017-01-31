//
// Created by Jo on 19/12/2016.
//

#include "M42137.h"

M42137::M42137(const EventHandler &e) : Minion(e) {
    this->set_id(42137);
    this->set_attackMax(29);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(29);
    this->set_maxHealth(29);
}

void M42137::init() {
}