//
// Created by Jo on 19/12/2016.
//

#include "M2776.h"

M2776::M2776(const EventHandler &e) : Minion(e) {
    this->set_id(2776);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Atramédès");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(2);
    this->set_maxHealth(8);
}

void M2776::init() {
}