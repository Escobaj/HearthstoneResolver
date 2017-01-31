//
// Created by Jo on 19/12/2016.
//

#include "M9081.h"

M9081::M9081(const EventHandler &e) : Minion(e) {
    this->set_id(9081);
    this->set_attackMax(7);
    this->set_defaultCost(4);
    this->set_name("Ombre ancienne");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(4);
}

void M9081::init() {
}