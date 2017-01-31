//
// Created by Jo on 19/12/2016.
//

#include "M2546.h"

M2546::M2546(const EventHandler &e) : Minion(e) {
    this->set_id(2546);
    this->set_attackMax(7);
    this->set_defaultCost(8);
    this->set_name("Rhonin");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2546::init() {
}