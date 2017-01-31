//
// Created by Jo on 19/12/2016.
//

#include "M2275.h"

M2275::M2275(const EventHandler &e) : Minion(e) {
    this->set_id(2275);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Attise-flammes");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2275::init() {
}