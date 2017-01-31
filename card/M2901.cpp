//
// Created by Jo on 19/12/2016.
//

#include "M2901.h"

M2901::M2901(const EventHandler &e) : Minion(e) {
    this->set_id(2901);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Scarabée orné de joyaux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2901::init() {
}