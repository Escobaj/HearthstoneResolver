//
// Created by Jo on 19/12/2016.
//

#include "M1982.h"

M1982::M1982(const EventHandler &e) : Minion(e) {
    this->set_id(1982);
    this->set_attackMax(8);
    this->set_defaultCost(5);
    this->set_name("Saccageur gangrené");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M1982::init() {
}