//
// Created by Jo on 19/12/2016.
//

#include "M1808.h"

M1808::M1808(const EventHandler &e) : Minion(e) {
    this->set_id(1808);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Goule instable");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M1808::init() {
}