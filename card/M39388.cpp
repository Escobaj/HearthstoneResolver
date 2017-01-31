//
// Created by Jo on 19/12/2016.
//

#include "M39388.h"

M39388::M39388(const EventHandler &e) : Minion(e) {
    this->set_id(39388);
    this->set_attackMax(0);
    this->set_defaultCost(3);
    this->set_name("Fou noir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(6);
}

void M39388::init() {
}