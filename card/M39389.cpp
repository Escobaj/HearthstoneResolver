//
// Created by Jo on 19/12/2016.
//

#include "M39389.h"

M39389::M39389(const EventHandler &e) : Minion(e) {
    this->set_id(39389);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Cavalier noir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M39389::init() {
}