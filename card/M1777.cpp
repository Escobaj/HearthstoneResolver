//
// Created by Jo on 19/12/2016.
//

#include "M1777.h"

M1777::M1777(const EventHandler &e) : Minion(e) {
    this->set_id(1777);
    this->set_attackMax(9);
    this->set_defaultCost(9);
    this->set_name("Rob Pardo");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(9);
}

void M1777::init() {
}