//
// Created by Jo on 19/12/2016.
//

#include "M3018.h"

M3018::M3018(const EventHandler &e) : Minion(e) {
    this->set_id(3018);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Becca Abel");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M3018::init() {
}