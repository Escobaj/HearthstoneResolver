//
// Created by Jo on 19/12/2016.
//

#include "M16235.h"

M16235::M16235(const EventHandler &e) : Minion(e) {
    this->set_id(16235);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Débris");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M16235::init() {
}