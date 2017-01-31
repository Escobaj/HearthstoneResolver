//
// Created by Jo on 19/12/2016.
//

#include "M2079.h"

M2079::M2079(const EventHandler &e) : Minion(e) {
    this->set_id(2079);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Tête de Mimiron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M2079::init() {
}