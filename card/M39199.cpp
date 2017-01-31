//
// Created by Jo on 19/12/2016.
//

#include "M39199.h"

M39199::M39199(const EventHandler &e) : Minion(e) {
    this->set_id(39199);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Bougie");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39199::init() {
}