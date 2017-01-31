//
// Created by Jo on 19/12/2016.
//

#include "M2308.h"

M2308::M2308(const EventHandler &e) : Minion(e) {
    this->set_id(2308);
    this->set_attackMax(8);
    this->set_defaultCost(7);
    this->set_name("Rend Main-Noire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(4);
}

void M2308::init() {
}