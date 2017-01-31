//
// Created by Jo on 19/12/2016.
//

#include "M2280.h"

M2280::M2280(const EventHandler &e) : Minion(e) {
    this->set_id(2280);
    this->set_attackMax(6);
    this->set_defaultCost(8);
    this->set_name("Chromaggus");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(6);
    this->set_maxHealth(8);
}

void M2280::init() {
}