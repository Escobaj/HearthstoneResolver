//
// Created by Jo on 19/12/2016.
//

#include "M21.h"

M21::M21(const EventHandler &e) : Minion(e) {
    this->set_id(21);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Tonneau");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M21::init() {
}