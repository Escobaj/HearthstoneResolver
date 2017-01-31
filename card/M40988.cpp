//
// Created by Jo on 19/12/2016.
//

#include "M40988.h"

M40988::M40988(const EventHandler &e) : Minion(e) {
    this->set_id(40988);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Cryomancienne");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40988::init() {
}