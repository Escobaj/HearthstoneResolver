//
// Created by Jo on 19/12/2016.
//

#include "M2919.h"

M2919::M2919(const EventHandler &e) : Minion(e) {
    this->set_id(2919);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Araignée des tombes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2919::init() {
}