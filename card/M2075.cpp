//
// Created by Jo on 19/12/2016.
//

#include "M2075.h"

M2075::M2075(const EventHandler &e) : Minion(e) {
    this->set_id(2075);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Mécano-amplificateur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2075::init() {
}