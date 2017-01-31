//
// Created by Jo on 19/12/2016.
//

#include "M2081.h"

M2081::M2081(const EventHandler &e) : Minion(e) {
    this->set_id(2081);
    this->set_attackMax(6);
    this->set_defaultCost(8);
    this->set_name("Faucheur 4000");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(6);
    this->set_maxHealth(9);
}

void M2081::init() {
}