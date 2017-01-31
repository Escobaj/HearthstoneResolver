//
// Created by Jo on 19/12/2016.
//

#include "M440.h"

M440::M440(const EventHandler &e) : Minion(e) {
    this->set_id(440);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Abomination");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M440::init() {
}