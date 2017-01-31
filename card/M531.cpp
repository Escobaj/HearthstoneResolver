//
// Created by Jo on 19/12/2016.
//

#include "M531.h"

M531::M531(const EventHandler &e) : Minion(e) {
    this->set_id(531);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Manipulateur sans-visage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M531::init() {
}