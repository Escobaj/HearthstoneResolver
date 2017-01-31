//
// Created by Jo on 19/12/2016.
//

#include "M2790.h"

M2790::M2790(const EventHandler &e) : Minion(e) {
    this->set_id(2790);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Arbrisseau");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2790::init() {
}