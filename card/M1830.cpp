//
// Created by Jo on 19/12/2016.
//

#include "M1830.h"

M1830::M1830(const EventHandler &e) : Minion(e) {
    this->set_id(1830);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Nérubien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M1830::init() {
}