//
// Created by Jo on 19/12/2016.
//

#include "M39041.h"

M39041::M39041(const EventHandler &e) : Minion(e) {
    this->set_id(39041);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Horreur cyclopéenne");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M39041::init() {
}