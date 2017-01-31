//
// Created by Jo on 19/12/2016.
//

#include "M471.h"

M471::M471(const EventHandler &e) : Minion(e) {
    this->set_id(471);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Golem endommagé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M471::init() {
}