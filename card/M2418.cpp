//
// Created by Jo on 19/12/2016.
//

#include "M2418.h"

M2418::M2418(const EventHandler &e) : Minion(e) {
    this->set_id(2418);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Œuf corrompu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M2418::init() {
}