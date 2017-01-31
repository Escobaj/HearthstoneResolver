//
// Created by Jo on 19/12/2016.
//

#include "M2589.h"

M2589::M2589(const EventHandler &e) : Minion(e) {
    this->set_id(2589);
    this->set_attackMax(6);
    this->set_defaultCost(3);
    this->set_name("Électron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2589::init() {
}