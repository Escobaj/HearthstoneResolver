//
// Created by Jo on 19/12/2016.
//

#include "M1792.h"

M1792::M1792(const EventHandler &e) : Minion(e) {
    this->set_id(1792);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Forgeron squelettique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M1792::init() {
}