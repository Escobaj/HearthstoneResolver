//
// Created by Jo on 19/12/2016.
//

#include "M2894.h"

M2894::M2894(const EventHandler &e) : Minion(e) {
    this->set_id(2894);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Singe féroce");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2894::init() {
}