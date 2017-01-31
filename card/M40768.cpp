//
// Created by Jo on 19/12/2016.
//

#include "M40768.h"

M40768::M40768(const EventHandler &e) : Minion(e) {
    this->set_id(40768);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Pichet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40768::init() {
}