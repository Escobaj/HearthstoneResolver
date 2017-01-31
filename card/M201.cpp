//
// Created by Jo on 19/12/2016.
//

#include "M201.h"

M201::M201(const EventHandler &e) : Minion(e) {
    this->set_id(201);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Meneur défias");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M201::init() {
}