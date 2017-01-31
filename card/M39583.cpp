//
// Created by Jo on 19/12/2016.
//

#include "M39583.h"

M39583::M39583(const EventHandler &e) : Minion(e) {
    this->set_id(39583);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Pichet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M39583::init() {
}