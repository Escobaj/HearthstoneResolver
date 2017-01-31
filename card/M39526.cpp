//
// Created by Jo on 19/12/2016.
//

#include "M39526.h"

M39526::M39526(const EventHandler &e) : Minion(e) {
    this->set_id(39526);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Singe volant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M39526::init() {
}