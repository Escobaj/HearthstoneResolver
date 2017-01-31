//
// Created by Jo on 19/12/2016.
//

#include "M1770.h"

M1770::M1770(const EventHandler &e) : Minion(e) {
    this->set_id(1770);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Michael Schweitzer");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1770::init() {
}