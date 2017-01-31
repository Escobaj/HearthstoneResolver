//
// Created by Jo on 19/12/2016.
//

#include "M2823.h"

M2823::M2823(const EventHandler &e) : Minion(e) {
    this->set_id(2823);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Lucifron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(7);
}

void M2823::init() {
}