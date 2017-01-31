//
// Created by Jo on 19/12/2016.
//

#include "M1931.h"

M1931::M1931(const EventHandler &e) : Minion(e) {
    this->set_id(1931);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Vol’jin");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(2);
}

void M1931::init() {
}