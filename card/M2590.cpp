//
// Created by Jo on 19/12/2016.
//

#include "M2590.h"

M2590::M2590(const EventHandler &e) : Minion(e) {
    this->set_id(2590);
    this->set_attackMax(8);
    this->set_defaultCost(5);
    this->set_name("Magmatron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M2590::init() {
}