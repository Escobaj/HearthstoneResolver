//
// Created by Jo on 19/12/2016.
//

#include "M24430.h"

M24430::M24430(const EventHandler &e) : Minion(e) {
    this->set_id(24430);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Archer ondulant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M24430::init() {
}