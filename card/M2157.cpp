//
// Created by Jo on 19/12/2016.
//

#include "M2157.h"

M2157::M2157(const EventHandler &e) : Minion(e) {
    this->set_id(2157);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("M. Bigglesworth");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2157::init() {
}