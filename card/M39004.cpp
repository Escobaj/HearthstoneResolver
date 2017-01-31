//
// Created by Jo on 19/12/2016.
//

#include "M39004.h"

M39004::M39004(const EventHandler &e) : Minion(e) {
    this->set_id(39004);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Mastiff");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39004::init() {
}