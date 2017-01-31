//
// Created by Jo on 19/12/2016.
//

#include "M618.h"

M618::M618(const EventHandler &e) : Minion(e) {
    this->set_id(618);
    this->set_attackMax(3);
    this->set_defaultCost(1);
    this->set_name("Diable de poussière");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M618::init() {
}