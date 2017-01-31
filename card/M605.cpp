//
// Created by Jo on 19/12/2016.
//

#include "M605.h"

M605::M605(const EventHandler &e) : Minion(e) {
    this->set_id(605);
    this->set_attackMax(4);
    this->set_defaultCost(2);
    this->set_name("Guetteur ancien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M605::init() {
}