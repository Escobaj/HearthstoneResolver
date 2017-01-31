//
// Created by Jo on 19/12/2016.
//

#include "M2513.h"

M2513::M2513(const EventHandler &e) : Minion(e) {
    this->set_id(2513);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Rohart totémique");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2513::init() {
}