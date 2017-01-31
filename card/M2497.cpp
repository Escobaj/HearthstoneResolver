//
// Created by Jo on 19/12/2016.
//

#include "M2497.h"

M2497::M2497(const EventHandler &e) : Minion(e) {
    this->set_id(2497);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Champion de Mukla");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2497::init() {
}