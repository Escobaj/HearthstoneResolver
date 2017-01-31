//
// Created by Jo on 19/12/2016.
//

#include "M1133.h"

M1133::M1133(const EventHandler &e) : Minion(e) {
    this->set_id(1133);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Assassin patient");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1133::init() {
}