//
// Created by Jo on 19/12/2016.
//

#include "M2573.h"

M2573::M2573(const EventHandler &e) : Minion(e) {
    this->set_id(2573);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Mangesort prodigieuse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M2573::init() {
}