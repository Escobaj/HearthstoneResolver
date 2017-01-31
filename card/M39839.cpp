//
// Created by Jo on 19/12/2016.
//

#include "M39839.h"

M39839::M39839(const EventHandler &e) : Minion(e) {
    this->set_id(39839);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Zoobot");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M39839::init() {
}