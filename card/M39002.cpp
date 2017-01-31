//
// Created by Jo on 19/12/2016.
//

#include "M39002.h"

M39002::M39002(const EventHandler &e) : Minion(e) {
    this->set_id(39002);
    this->set_attackMax(4);
    this->set_defaultCost(2);
    this->set_name("Sanglier de pénombre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(1);
}

void M39002::init() {
}