//
// Created by Jo on 19/12/2016.
//

#include "M2395.h"

M2395::M2395(const EventHandler &e) : Minion(e) {
    this->set_id(2395);
    this->set_attackMax(7);
    this->set_defaultCost(5);
    this->set_name("Magmatron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2395::init() {
}