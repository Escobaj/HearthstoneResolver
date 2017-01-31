//
// Created by Jo on 19/12/2016.
//

#include "M40549.h"

M40549::M40549(const EventHandler &e) : Minion(e) {
    this->set_id(40549);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Fouine perce-tunnels");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40549::init() {
}