//
// Created by Jo on 19/12/2016.
//

#include "M2057.h"

M2057::M2057(const EventHandler &e) : Minion(e) {
    this->set_id(2057);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Illuminatrice");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2057::init() {
}