//
// Created by Jo on 19/12/2016.
//

#include "M40613.h"

M40613::M40613(const EventHandler &e) : Minion(e) {
    this->set_id(40613);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Chef hurane vêtue de cuir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M40613::init() {
}