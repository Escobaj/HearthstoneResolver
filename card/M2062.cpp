//
// Created by Jo on 19/12/2016.
//

#include "M2062.h"

M2062::M2062(const EventHandler &e) : Minion(e) {
    this->set_id(2062);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Jeeves");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M2062::init() {
}