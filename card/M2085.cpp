//
// Created by Jo on 19/12/2016.
//

#include "M2085.h"

M2085::M2085(const EventHandler &e) : Minion(e) {
    this->set_id(2085);
    this->set_attackMax(3);
    this->set_defaultCost(6);
    this->set_name("Gazleu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M2085::init() {
}