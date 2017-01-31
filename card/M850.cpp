//
// Created by Jo on 19/12/2016.
//

#include "M850.h"

M850::M850(const EventHandler &e) : Minion(e) {
    this->set_id(850);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Totem de griffes de pierre");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::TOTEM);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M850::init() {
}