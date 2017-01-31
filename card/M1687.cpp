//
// Created by Jo on 19/12/2016.
//

#include "M1687.h"

M1687::M1687(const EventHandler &e) : Minion(e) {
    this->set_id(1687);
    this->set_attackMax(9);
    this->set_defaultCost(7);
    this->set_name("Chien du Magma");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(9);
    this->set_maxHealth(5);
}

void M1687::init() {
}