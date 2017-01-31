//
// Created by Jo on 19/12/2016.
//

#include "M1786.h"

M1786::M1786(const EventHandler &e) : Minion(e) {
    this->set_id(1786);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Œuf de nérubien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M1786::init() {
}