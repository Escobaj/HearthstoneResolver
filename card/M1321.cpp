//
// Created by Jo on 19/12/2016.
//

#include "M1321.h"

M1321::M1321(const EventHandler &e) : Minion(e) {
    this->set_id(1321);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Gnoll rivepatte");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M1321::init() {
}