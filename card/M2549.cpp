//
// Created by Jo on 19/12/2016.
//

#include "M2549.h"

M2549::M2549(const EventHandler &e) : Minion(e) {
    this->set_id(2549);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Aspirant de Dalaran");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M2549::init() {
}