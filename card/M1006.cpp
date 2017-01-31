//
// Created by Jo on 19/12/2016.
//

#include "M1006.h"

M1006::M1006(const EventHandler &e) : Minion(e) {
    this->set_id(1006);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Finkle Einhorn");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1006::init() {
}