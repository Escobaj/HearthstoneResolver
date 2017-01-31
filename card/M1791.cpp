//
// Created by Jo on 19/12/2016.
//

#include "M1791.h"

M1791::M1791(const EventHandler &e) : Minion(e) {
    this->set_id(1791);
    this->set_attackMax(2);
    this->set_defaultCost(6);
    this->set_name("Maexxna");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(8);
}

void M1791::init() {
}