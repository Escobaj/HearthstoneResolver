//
// Created by Jo on 19/12/2016.
//

#include "M3039.h"

M3039::M3039(const EventHandler &e) : Minion(e) {
    this->set_id(3039);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Ryan Chew");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M3039::init() {
}