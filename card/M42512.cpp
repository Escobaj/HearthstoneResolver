//
// Created by Jo on 19/12/2016.
//

#include "M42512.h"

M42512::M42512(const EventHandler &e) : Minion(e) {
    this->set_id(42512);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Bovin infernal");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M42512::init() {
}