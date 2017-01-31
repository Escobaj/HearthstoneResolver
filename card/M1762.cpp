//
// Created by Jo on 19/12/2016.
//

#include "M1762.h"

M1762::M1762(const EventHandler &e) : Minion(e) {
    this->set_id(1762);
    this->set_attackMax(7);
    this->set_defaultCost(6);
    this->set_name("Jason Chayes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(6);
}

void M1762::init() {
}