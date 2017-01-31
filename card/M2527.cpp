//
// Created by Jo on 19/12/2016.
//

#include "M2527.h"

M2527::M2527(const EventHandler &e) : Minion(e) {
    this->set_id(2527);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Dragonnet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2527::init() {
}