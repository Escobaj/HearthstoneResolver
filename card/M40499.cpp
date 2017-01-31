//
// Created by Jo on 19/12/2016.
//

#include "M40499.h"

M40499::M40499(const EventHandler &e) : Minion(e) {
    this->set_id(40499);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Rune explosive");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M40499::init() {
}