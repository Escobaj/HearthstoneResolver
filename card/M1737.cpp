//
// Created by Jo on 19/12/2016.
//

#include "M1737.h"

M1737::M1737(const EventHandler &e) : Minion(e) {
    this->set_id(1737);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Arcaniste éthérien");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1737::init() {
}