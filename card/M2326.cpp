//
// Created by Jo on 19/12/2016.
//

#include "M2326.h"

M2326::M2326(const EventHandler &e) : Minion(e) {
    this->set_id(2326);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Lige du feu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M2326::init() {
}