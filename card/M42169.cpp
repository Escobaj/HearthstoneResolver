//
// Created by Jo on 19/12/2016.
//

#include "M42169.h"

M42169::M42169(const EventHandler &e) : Minion(e) {
    this->set_id(42169);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Gardien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M42169::init() {
}