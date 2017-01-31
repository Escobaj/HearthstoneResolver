//
// Created by Jo on 19/12/2016.
//

#include "M16238.h"

M16238::M16238(const EventHandler &e) : Minion(e) {
    this->set_id(16238);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Golem chancelant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M16238::init() {
}