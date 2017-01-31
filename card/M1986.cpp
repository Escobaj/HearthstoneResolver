//
// Created by Jo on 19/12/2016.
//

#include "M1986.h"

M1986::M1986(const EventHandler &e) : Minion(e) {
    this->set_id(1986);
    this->set_attackMax(9);
    this->set_defaultCost(9);
    this->set_name("Mal’Ganis");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(9);
    this->set_maxHealth(7);
}

void M1986::init() {
}