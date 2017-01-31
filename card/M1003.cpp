//
// Created by Jo on 19/12/2016.
//

#include "M1003.h"

M1003::M1003(const EventHandler &e) : Minion(e) {
    this->set_id(1003);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Maître-chien");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M1003::init() {
}