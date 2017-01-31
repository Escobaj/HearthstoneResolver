//
// Created by Jo on 19/12/2016.
//

#include "M2444.h"

M2444::M2444(const EventHandler &e) : Minion(e) {
    this->set_id(2444);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Lige du feu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M2444::init() {
}