//
// Created by Jo on 19/12/2016.
//

#include "M25076.h"

M25076::M25076(const EventHandler &e) : Minion(e) {
    this->set_id(25076);
    this->set_attackMax(4);
    this->set_defaultCost(0);
    this->set_name("Misha");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M25076::init() {
}