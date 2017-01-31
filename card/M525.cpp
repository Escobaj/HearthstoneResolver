//
// Created by Jo on 19/12/2016.
//

#include "M525.h"

M525::M525(const EventHandler &e) : Minion(e) {
    this->set_id(525);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Archimage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(7);
}

void M525::init() {
}