//
// Created by Jo on 19/12/2016.
//

#include "M2233.h"

M2233::M2233(const EventHandler &e) : Minion(e) {
    this->set_id(2233);
    this->set_attackMax(8);
    this->set_defaultCost(12);
    this->set_name("Géant mécanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M2233::init() {
}