//
// Created by Jo on 19/12/2016.
//

#include "M1761.h"

M1761::M1761(const EventHandler &e) : Minion(e) {
    this->set_id(1761);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Eric Dodds");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1761::init() {
}