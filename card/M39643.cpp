//
// Created by Jo on 19/12/2016.
//

#include "M39643.h"

M39643::M39643(const EventHandler &e) : Minion(e) {
    this->set_id(39643);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Diablotin dégoûtant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39643::init() {
}