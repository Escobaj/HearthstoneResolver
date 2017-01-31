//
// Created by Jo on 19/12/2016.
//

#include "M2384.h"

M2384::M2384(const EventHandler &e) : Minion(e) {
    this->set_id(2384);
    this->set_attackMax(4);
    this->set_defaultCost(0);
    this->set_name("Cendres tourbillonnantes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M2384::init() {
}