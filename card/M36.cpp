//
// Created by Jo on 19/12/2016.
//

#include "M36.h"

M36::M36(const EventHandler &e) : Minion(e) {
    this->set_id(36);
    this->set_attackMax(5);
    this->set_defaultCost(9);
    this->set_name("Cénarius");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(8);
}

void M36::init() {
}