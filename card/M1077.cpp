//
// Created by Jo on 19/12/2016.
//

#include "M1077.h"

M1077::M1077(const EventHandler &e) : Minion(e) {
    this->set_id(1077);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Squelette");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1077::init() {
}