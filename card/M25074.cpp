//
// Created by Jo on 19/12/2016.
//

#include "M25074.h"

M25074::M25074(const EventHandler &e) : Minion(e) {
    this->set_id(25074);
    this->set_attackMax(2);
    this->set_defaultCost(0);
    this->set_name("Leokk");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M25074::init() {
}