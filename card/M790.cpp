//
// Created by Jo on 19/12/2016.
//

#include "M790.h"

M790::M790(const EventHandler &e) : Minion(e) {
    this->set_id(790);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Berserker amani");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M790::init() {
}