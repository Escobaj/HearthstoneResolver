//
// Created by Jo on 19/12/2016.
//

#include "M2690.h"

M2690::M2690(const EventHandler &e) : Minion(e) {
    this->set_id(2690);
    this->set_attackMax(20);
    this->set_defaultCost(50);
    this->set_name("Golemagg");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(20);
    this->set_maxHealth(20);
}

void M2690::init() {
}