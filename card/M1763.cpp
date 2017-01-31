//
// Created by Jo on 19/12/2016.
//

#include "M1763.h"

M1763::M1763(const EventHandler &e) : Minion(e) {
    this->set_id(1763);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Bob Fitch");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M1763::init() {
}