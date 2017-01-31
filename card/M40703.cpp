//
// Created by Jo on 19/12/2016.
//

#include "M40703.h"

M40703::M40703(const EventHandler &e) : Minion(e) {
    this->set_id(40703);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Don Han’Cho");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M40703::init() {
}