//
// Created by Jo on 19/12/2016.
//

#include "M1910.h"

M1910::M1910(const EventHandler &e) : Minion(e) {
    this->set_id(1910);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Fossoyeur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M1910::init() {
}