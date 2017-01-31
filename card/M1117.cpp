//
// Created by Jo on 19/12/2016.
//

#include "M1117.h"

M1117::M1117(const EventHandler &e) : Minion(e) {
    this->set_id(1117);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Agent du SI:7");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1117::init() {
}