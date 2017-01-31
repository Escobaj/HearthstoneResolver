//
// Created by Jo on 19/12/2016.
//

#include "M2042.h"

M2042::M2042(const EventHandler &e) : Minion(e) {
    this->set_id(2042);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Mystique de Kezan");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2042::init() {
}