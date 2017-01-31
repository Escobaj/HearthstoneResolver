//
// Created by Jo on 19/12/2016.
//

#include "M526.h"

M526::M526(const EventHandler &e) : Minion(e) {
    this->set_id(526);
    this->set_attackMax(7);
    this->set_defaultCost(8);
    this->set_name("Gruul");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M526::init() {
}