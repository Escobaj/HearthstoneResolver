//
// Created by Jo on 19/12/2016.
//

#include "M24434.h"

M24434::M24434(const EventHandler &e) : Minion(e) {
    this->set_id(24434);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Chaudron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M24434::init() {
}