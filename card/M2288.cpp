//
// Created by Jo on 19/12/2016.
//

#include "M2288.h"

M2288::M2288(const EventHandler &e) : Minion(e) {
    this->set_id(2288);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Chef du gang des diablotins");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2288::init() {
}