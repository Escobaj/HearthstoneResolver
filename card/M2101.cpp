//
// Created by Jo on 19/12/2016.
//

#include "M2101.h"

M2101::M2101(const EventHandler &e) : Minion(e) {
    this->set_id(2101);
    this->set_attackMax(4);
    this->set_defaultCost(2);
    this->set_name("Nérubien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2101::init() {
}