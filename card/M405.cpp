//
// Created by Jo on 19/12/2016.
//

#include "M405.h"

M405::M405(const EventHandler &e) : Minion(e) {
    this->set_id(405);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Wyrm de mana");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M405::init() {
}