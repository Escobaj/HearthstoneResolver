//
// Created by Jo on 19/12/2016.
//

#include "M39119.h"

M39119::M39119(const EventHandler &e) : Minion(e) {
    this->set_id(39119);
    this->set_attackMax(5);
    this->set_defaultCost(9);
    this->set_name("Soggoth le Rampant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(9);
}

void M39119::init() {
}