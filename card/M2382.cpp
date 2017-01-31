//
// Created by Jo on 19/12/2016.
//

#include "M2382.h"

M2382::M2382(const EventHandler &e) : Minion(e) {
    this->set_id(2382);
    this->set_attackMax(6);
    this->set_defaultCost(0);
    this->set_name("Fils de la Flamme");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(3);
}

void M2382::init() {
}