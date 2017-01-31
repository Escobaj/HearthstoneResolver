//
// Created by Jo on 19/12/2016.
//

#include "M2393.h"

M2393::M2393(const EventHandler &e) : Minion(e) {
    this->set_id(2393);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Électron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2393::init() {
}