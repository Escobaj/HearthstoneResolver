//
// Created by Jo on 19/12/2016.
//

#include "M25274.h"

M25274::M25274(const EventHandler &e) : Minion(e) {
    this->set_id(25274);
    this->set_attackMax(3);
    this->set_defaultCost(1);
    this->set_name("Leurre à pointes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M25274::init() {
}