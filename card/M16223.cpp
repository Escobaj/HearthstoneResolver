//
// Created by Jo on 19/12/2016.
//

#include "M16223.h"

M16223::M16223(const EventHandler &e) : Minion(e) {
    this->set_id(16223);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Totem de griffes de pierre");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M16223::init() {
}