//
// Created by Jo on 19/12/2016.
//

#include "M2723.h"

M2723::M2723(const EventHandler &e) : Minion(e) {
    this->set_id(2723);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Saccageur des mers");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(7);
}

void M2723::init() {
}