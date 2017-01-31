//
// Created by Jo on 19/12/2016.
//

#include "M42158.h"

M42158::M42158(const EventHandler &e) : Minion(e) {
    this->set_id(42158);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Bovin infernal");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M42158::init() {
}