//
// Created by Jo on 19/12/2016.
//

#include "M2933.h"

M2933::M2933(const EventHandler &e) : Minion(e) {
    this->set_id(2933);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Sentinelle Anubisath");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2933::init() {
}