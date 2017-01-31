//
// Created by Jo on 19/12/2016.
//

#include "M2045.h"

M2045::M2045(const EventHandler &e) : Minion(e) {
    this->set_id(2045);
    this->set_attackMax(9);
    this->set_defaultCost(6);
    this->set_name("Golem d’anima");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(9);
    this->set_maxHealth(9);
}

void M2045::init() {
}