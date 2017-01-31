//
// Created by Jo on 19/12/2016.
//

#include "M517.h"

M517::M517(const EventHandler &e) : Minion(e) {
    this->set_id(517);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Gangregarde");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M517::init() {
}