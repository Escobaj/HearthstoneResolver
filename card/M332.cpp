//
// Created by Jo on 19/12/2016.
//

#include "M332.h"

M332::M332(const EventHandler &e) : Minion(e) {
    this->set_id(332);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Diablosaure");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M332::init() {
}