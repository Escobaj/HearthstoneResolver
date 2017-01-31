//
// Created by Jo on 19/12/2016.
//

#include "M39465.h"

M39465::M39465(const EventHandler &e) : Minion(e) {
    this->set_id(39465);
    this->set_attackMax(3);
    this->set_defaultCost(6);
    this->set_name("Rôdeur des douves");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M39465::init() {
}