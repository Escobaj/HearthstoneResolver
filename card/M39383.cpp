//
// Created by Jo on 19/12/2016.
//

#include "M39383.h"

M39383::M39383(const EventHandler &e) : Minion(e) {
    this->set_id(39383);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Pion noir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(6);
}

void M39383::init() {
}