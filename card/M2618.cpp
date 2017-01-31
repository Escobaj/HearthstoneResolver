//
// Created by Jo on 19/12/2016.
//

#include "M2618.h"

M2618::M2618(const EventHandler &e) : Minion(e) {
    this->set_id(2618);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Le mandebrume");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2618::init() {
}