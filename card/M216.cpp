//
// Created by Jo on 19/12/2016.
//

#include "M216.h"

M216::M216(const EventHandler &e) : Minion(e) {
    this->set_id(216);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Raptor Rougefange");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M216::init() {
}