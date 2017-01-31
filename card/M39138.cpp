//
// Created by Jo on 19/12/2016.
//

#include "M39138.h"

M39138::M39138(const EventHandler &e) : Minion(e) {
    this->set_id(39138);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Étendard de bataille");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M39138::init() {
}